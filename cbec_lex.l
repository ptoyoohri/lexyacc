/* *****************************************************************************
   [cbec_lex.l]

   Copyright 2020, BigData . All Rights Reserved.

   Except as specified in the license terms of BigData, this material may not be copied, modified,
   re-published, uploaded, executed, or distributed in any way, in any medium,
   in whole or in part, without prior written permission from BigData
   *****************************************************************************/

%{

/* ================================================

  cbec_lex.l -- flex format for cbec language

  author : Ta-Yung Liu
  Date   : 09/04/2020

  ================================================= */

#include "cbec_int.h"		/* for semetic record */
#include "cbec_yacc.h"
//#include <values.h>
//#include <float.h>

/* ---- prefix cbec_ */

#define YY_SKIP_YYWRAP	1
#undef yywrap
#define yywrap()	1

extern char *cbec_inp_str;
extern int cbec_inp_count;

#if 0	/* { */
#undef YY_INPUT
#define YY_INPUT(buf,result,max_size) \
	{ int c='*',n;\
	  for (n=0;n<max_size;n++,cbec_inp_count++) {	\
	    c = buf[n] = cbec_inp_str[cbec_inp_count];	\
	    if (c == '\n' || c == '\0') {		\
	      if (c == '\n')				\
		cbec_inp_count++;			\
	      n++;					\
	      break;					\
	    } 	\
	  }	\
	  /*printf(" M:%d, n:%d, ch=%d, idx:%d\n",max_size,n,c,cbec_inp_count);*/\
          result = n; \
	} 
#endif	/* } */

extern YYSTYPE cbec_lval;

#define echo		/* ECHO */
#define RN(s)		cbec_lex_copy_tok(yytext); return(s)
#define CRN(s)		cbec_lval.context = cbec_copy_string(yytext); RN(s)

extern FILE *yyin;

/* ------------------------------------------------- */

static int cbec_lex_ss[100];	// state stack
static int cbec_lex_ssc = 0;	// state stack counter

/* next state */
#define NEXT_S	cbec_lex_ss[cbec_lex_ssc++]=YY_START; BEGIN

/* previous state */
#define PREV_S	BEGIN cbec_lex_ss[--cbec_lex_ssc]

/* ------------------------------------------------- */

void cbec_error(char *);
int cbec_lex_yytext_to_int(char * s);
static void cbec_lex_duration(YYSTYPE *r,char *duration);
static double cbec_lex_yytext_to_real(char *s);
static void cbec_lex_real1(YYSTYPE *r,char *s);
static void cbec_lex_real2(YYSTYPE *r,char *s);
static void cbec_lex_real3(YYSTYPE *r,char *s);

//static void cbec_lex_based(YYSTYPE *r,char *based);
static void cbec_lex_string_handle(YYSTYPE *r,char *s);
static void cbec_lex_bad_string(YYSTYPE *r,char *s);
static void cbec_lex_copy_tok(char *s);

/* ------------------------------------------------- */

%}

%x      PS1 PS2

linefeed        [\n]
ws              [ \b\f\r\t\v]+

unsigned        [0-9][0-9_]*
unsigned_ext    [0-9A-Za-z?][0-9A-Za-z_?]*

string          ["]([^"\n]|\\\")*["]
string1         ["]([^"\n]|\\\")*

identifier      [A-Za-z/_][0-9A-Za-z/_]*
sys_id          [$]{identifier}

%%

{ws}			{ echo; }
[\n]|"\\\n"		{ echo; cbec_lineno++; }

"/*"			{ echo; if (yy_start != (2*PS1+1)) NEXT_S PS1; }
<PS1>"*"+"/"		{ echo; PREV_S; }
<PS1>[^*\n]*		{ echo; }
<PS1>"*"+[^*\n/]*	{ echo; }
<PS1>\n			{ echo; cbec_lineno++; }

"//"                    { echo; BEGIN PS2; }
<PS2>\n                 { echo; cbec_lineno++; BEGIN INITIAL; }
<PS2>.*                 { echo; }

        /* ---- duration */
{unsigned}[smh]		{ echo; cbec_lex_duration(&cbec_lval,yytext); RN(CBEC_DURATION_L); }

        /* ---- integer */
{unsigned}		{ echo; cbec_lval.value = cbec_lex_yytext_to_int(yytext); RN(CBEC_INT_L); }

        /* ---- real */
{unsigned}[.]{unsigned} { echo;
			  cbec_lex_real1(&cbec_lval,yytext); RN(CBEC_REAL_L); /* 12.34 */ }
{unsigned}[.]{unsigned}[Ee][+\-]?{unsigned}     { echo;
			  cbec_lex_real2(&cbec_lval,yytext); RN(CBEC_REAL_L); /* 12.34e2 */ }
{unsigned}[Ee][+\-]?{unsigned}                  { echo;
			  cbec_lex_real3(&cbec_lval,yytext); RN(CBEC_REAL_L); /* 12E3 */ }

{string}	{ echo; cbec_lex_string_handle(&cbec_lval,yytext); RN(CBEC_STRING_L); }
{string1}	{ echo; cbec_lex_bad_string(&cbec_lval,yytext);    RN(CBEC_STRING_L); }

">"             { echo; RN(CBEC_GT); }
"<"             { echo; RN(CBEC_LT); }
"="             { echo; RN(CBEC_EQ); }
">="            { echo; RN(CBEC_GE); }
"<="            { echo; RN(CBEC_LE); }
"!="            { echo; RN(CBEC_NE); }

"[["            { echo; RN(CBEC_DBL); }
"]]"            { echo; RN(CBEC_DBR); }

[+*%&~!?:;.#@=,'`\-\|\^\(\){}\[\]]     { echo; RN(yytext[0]); }

{identifier}    { int val = cbec_kw_find_keyword(yytext);
		  echo;
                  if (val < 0) {	/* identifier */
                    CRN(CBEC_ID_L);
                  }
                  else {		/* keyword */
                    RN(val);
                  }
                }

{sys_id}        { echo; CRN(CBEC_SID_L); }

<<EOF>>		{ yyterminate(); }

.		{ echo; cbec_msg_err("Syntax error near %s\n",yytext); }

%%

/* ------------------------------------------------ */

void cbec_error(
	char *S)
{ /* using multi-language to print out error message */

  if (strcmp(S,"parse error") == 0) {
    if (!cbec_syntax_error)	// ---- already print another error message
      cbec_msg_err("Syntax error near %s\n",cbec_curr_tok); 
  }
  else
    cbec_msg_err("Parser stack overflow\n"); 
  cbec_syntax_error = 0;
}

/* ------------------------------------------------ */

void cbec_lex_restart(void)
{ yyrestart(yyin); }

/* ================================================ */

// {unsigned} 12_34 -> unsigned

int cbec_lex_yytext_to_int(		// base is 10
	char * s)
{ int j,sum,neg;

  sum = j = neg = 0;
  if (s[0] == '-') {
    neg = 1;          /* is negative number */
    j++;
  }
  else if (s[0] == '+')
    j++;

  for(;s[j]!='\0';j++) {
    if (s[j] == '_') continue;
    if (sum > (MAXINT / 10) ||                /* 214748364 */
       (sum == (MAXINT / 10) && ((s[j] - '0') > (neg + 7)) ) ) {
      sum = MAXINT;
      cbec_msg_err("Integer %s exceed 214748364\n",s);
      break;
    }
    sum = sum * 10 + (s[j] - '0');
  }
  sum = neg? -sum : sum;
  return(sum);
}

/* ------------------------------------------------ */

static
void cbec_lex_duration(
	YYSTYPE *r,
	char *duration)
{ int len = strlen(duration);
  char ch;

  switch (duration[1]) {
    case 's' :	r->duration.unit = 1;	break;
    case 'm' :	r->duration.unit = 2;	break;
    case 'h' :	r->duration.unit = 3;	break;
    default : assert(0);
  }
  ch = duration[len-1];
  duration[len-1] = '\0';
  r->duration.time = cbec_lex_yytext_to_int(duration);
  duration[len-1] = ch;
}

/* ================================================ */

// convert yytext : {unsigned}"."{unsigned} 12.12 -> float

  static
  double cbec_lex_yytext_to_real(
	  char * s)
  { int j,dot = 0;
    double sum = 0.0,div = 1.0;

    for(j=0;s[j]!='\0';j++) {
      if (s[j] == '_') continue;
      if (s[j] == '.') {
        dot = 1;
        continue;
      }
      if (sum > (DBL_MAX/10.0)) {		// overflow
        sum = DBL_MAX;
        cbec_msg_err("Real number %s exceeds the range of double.\n",s);
        break;
      }
      // ---- base is 10
      if (dot) {
        div *= 10.0;
        sum += ((double)(s[j] - '0')) / div  ;
      }
      else
        sum = sum * 10.0 + ((double)(s[j] - '0'));
    }
    return(sum);
  }

/* ------------------------------------------------- */

// {unsigned}"."{unsigned} 12.12 -> yylval

static
void cbec_lex_real1(
        YYSTYPE *r,             /* yylval */
        char *s)                /* yytext */
{ //cbec_obj_t *p;
  double value;

  //r->cbec_val = p = cbec_get_obj_t();
  r->const_type = CBEC_CONST_DOUBLE;
  r->real = value =cbec_lex_yytext_to_real(s);
}

/* ------------------------------------------------ */

// {unsigned}"."{unsigned}[Ee][+-]?{unsigned} 12.12E+2 -> yylval

static
void cbec_lex_real2(
        YYSTYPE *r,             /* yylval */
        char *s)                /* yytext */
{ //cbec_obj_t *p;
  int exp;
  double value;
  char *s1,*s2,ch;

  //r->cbec_val = p = cbec_get_obj_t();
  r->const_type = CBEC_CONST_DOUBLE;

  for (s1=s2=s;(*s1)!='e' && (*s1)!='E';s2++)
    s1 = s2;
  ch = *s1;
  (*s1) = '\0';
  value = cbec_lex_yytext_to_real(s);
  exp   = cbec_lex_yytext_to_int(s2);
  if (exp < 0)
    for (;exp<0;exp++,value/=10.0);
  else {
    for (;exp>0;exp--) {
      if (value > (DBL_MAX/10.0)) {		// overflow
        value = DBL_MAX;
        *s1 = ch;
        cbec_msg_err("Real number %s exceesds the range of double.\n",s);
        break;
      }
      value *= 10.0;
    }
  }
  r->real = value;
}

/* ------------------------------------------------ */

// {unsigned}[Ee][+-]?{unsigned} 11E+2 -> yylval

static
void cbec_lex_real3(
        YYSTYPE *r,             /* yylval */
        char *s)                /* yytext */
{ //cbec_obj_t *p;
  int bit_len,exp;
  double value;
  char *s1,*s2,ch;

  //r->cbec_val = p = cbec_get_obj_t();
  r->const_type = CBEC_CONST_DOUBLE;

  for (s1=s2=s;(*s1)!='e' && (*s1)!='E';s2++)
    s1 = s2;
  ch = *s1;
  (*s1) = '\0';
  value = cbec_lex_yytext_to_real(s);
  exp   = cbec_lex_yytext_to_int(s2);
  if (exp < 0)
    for (;exp<0;exp++,value/=10.0);
  else {
    for (;exp>0;exp--) {
      if (value > (DBL_MAX/10.0)) {		// overflow
        value = DBL_MAX;
        *s1 = ch;
        cbec_msg_err("Real number %s exceeds the range of double.\n",s);
        break;
      }
      value *= 10.0;
    }
  }
  r->real = value;
}

/* ================================================ */

static
void cbec_lex_string_handle(
        YYSTYPE *r,             /* cbec_lval */
        char *s)                /* yytext */
{ //cbec_obj_t *p;
  int len;

  //r->cbec_val = p = cbec_get_obj_t();
  r->const_type = CBEC_CONST_STRING;
  r->context = cbec_copy_string(s);
}

/* ------------------------------------------------- */

static
void cbec_lex_bad_string(
        YYSTYPE *r,             /* cbec_lval */
        char *s)                /* yytext */
{ int len;
  char *ss;

  cbec_lex_copy_tok(s);
  cbec_msg_err("Missing '\"' in string\n");
  len = strlen(s);
  ss  = (char *) calloc(sizeof(char),len+2);
  strcpy(ss,s);
  strcat(ss,"\"");
  ss[0] = '"';
  cbec_lex_string_handle(r,ss);
  free(ss);
}

/* ------------------------------------------------ */

static
void cbec_lex_copy_tok(
        char *s)
{ if (s == NULL) {
    cbec_curr_tok[0] = ' ';
    cbec_curr_tok[1] = '\0';
  }
  else {
    int len = strlen(s);
    if (len < MAX_TOK)
      strcpy(cbec_curr_tok,s);
    else {
      int i;
      for (i=0;i<(MAX_TOK-4);i++)
        cbec_curr_tok[i] = s[i];
      cbec_curr_tok[MAX_TOK-4] = '.';
      cbec_curr_tok[MAX_TOK-3] = '.';
      cbec_curr_tok[MAX_TOK-2] = '.';
      cbec_curr_tok[MAX_TOK-1] = '\0';
    }
  }
}

/* ------------------------------------------------ */

