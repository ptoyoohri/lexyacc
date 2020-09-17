/* *****************************************************************************
   [cbec_yacc.y]
 
   Copyright 2020 BigData. All Rights Reserved.

   Except as specified in the license terms of BigData, this material may not be copied, modified,
   re-published, uploaded, executed, or distributed in any way, in any medium,
   in whole or in part, without prior written permission from BigData.
   *****************************************************************************/
%{

/* ================================================

  cbec_yacc.y -- bison format for cbec language

  author : Ta-Yung Liu
  Date   : 09/04/2020

  ================================================= */

#include "cbec_int.h"

// ignored GCC-specific extented keyword
#define __attribute__(xyz)

/* ---- prefix cbec_ (in cbec_lex.l) */
void cbec_error(char *s);
int cbec_lex(void);

extern char *cbec_text;
extern FILE *cbec_out;

/*FILE *cbec_in; */

%}

%token CBEC_AND_K CBEC_ANY_K CBEC_DEFINE_K 
%token CBEC_EVENT_K CBEC_EVERY_K CBEC_EQ_K
%token CBEC_GE_K CBEC_GOTO_K CBEC_GT_K
%token CBEC_IN_K CBEC_IS_K
%token CBEC_LE_K CBEC_LOSE_K CBEC_LT_K
%token CBEC_NE_K CBEC_NOT_K 
%token CBEC_OR_K CBEC_OVER_K CBEC_REPEAT_K 
%token CBEC_SEQUENCE_K CBEC_SET_K CBEC_START_K 
%token CBEC_TASK_K 
%token CBEC_WHERE_K 

%token CBEC_INT_L		/* integer 123 */
%token CBEC_REAL_L		/* float 1.23 */
%token CBEC_STRING_L		/* "string" */
%token CBEC_DURATION_L		/* time, 2s */
%token CBEC_ID_L		/* identifier ex. carry */
%token CBEC_SID_L		/* system identifier ex. $print */
%token CBEC_DBL CBEC_DBR	/* '[[' & ']]' */

%left ',' 			  /* 1L  comma                    ,               */
%right '='			  /* 2R  assign                   =               */
%right '?' ':'			  /* 3R  conditional              ? :             */
%left CBEC_OR_K                   /* 4L  logical or               ||              */
%left CBEC_AND_K                  /* 5L  logical and              &&              */
%left CBEC_EQ CBEC_NE             /* 9L  =,!=                                     */
%left CBEC_LT CBEC_GT CBEC_LE CBEC_GE /* 10L relational operators     <,>,<=,>=       */
%left '+' '-'			  /* 12L add, sub                 +, -            */
%left '*' '/' '%'		  /* 13L mul, div, rem            *, /, %         */
%right CBEC_NOT_K		  /* 15R unary not                                */

%%

cbec_start		: CBEC_TASK_K task_stmts define_stmts
			;

  define_stmts		: define_stmts define_stmt
			| define_stmt
			;

  define_stmt		: define_set_stmt
			| define_seq_stmt
			;

/*-------------------------------------*/

	task_stmts :  CBEC_ID_L '(' task_arguments ')'
			 { fprintf(cbec_out, "\nTASK_STRUCT(%s, %s)\n", $1.context, $3.context);
			 fprintf(cbec_out, "\nNEW_TASK(%s)\n", $1.context); }
			;

  task_arguments	: task_argument ',' task_argument { $1.context = strcat(strcat($1.context, ","), $3.context); $$ = $1; }

  task_argument		: CBEC_ID_L
			 { printf("Id: %s ",$1.context); }

/* ------------------------------------------------ */

func_name		: CBEC_ID_L '(' arguements. ')'
			 {  }
			;

  arguements.		: arguements
			|
			;

  arguements		: arguements ',' arguement { $1.context = strcat(strcat($1.context, ","), $3.context); $$ = $1; }
			| arguement { $$ = $1; }
			;

  arguement		: CBEC_ID_L
			 { printf("Id: %s ",$1.context); }
			| constant
			{ $$ = $1;} ;

  constant		: CBEC_INT_L
			  { $$ = $1; printf("int: %d",$1.value); }
			| CBEC_REAL_L
			  { $$ = $1; printf("real: %f",$1.real); }
			| CBEC_STRING_L
			  { $$ = $1; printf("str: %s",$1.context); }
			| CBEC_DURATION_L
			  { $$ = $1; printf("int: %d %d",$1.duration.time, $1.duration.unit); 	/* 1:s,2:m,3:h */ }
			;

/* ================================================ */


define_set_stmt		: CBEC_DEFINE_K  CBEC_SET_K CBEC_ID_L set_stmt
			  { printf("ID: %s",$3.context); }
			;

  set_stmt		: qualifier '(' set_parameters ')' set_condition. { /*printf("idenfy set_condition: %s\n", $5); */}
			;

  qualifier		: CBEC_EVERY_K 
			  { $$.value = 1; /* for every */ }
			| CBEC_ANY_K 
			  { $$.value = 2; /* for any */ }
			;

  set_parameters	: set_parameters ',' set_parameter
			| set_parameter
			;

    set_parameter	: CBEC_ID_L is_type. CBEC_IN_K CBEC_ID_L
			  {  }
			;

    is_type.		: CBEC_IS_K CBEC_STRING_L
			  { $$ = $2; printf("is detected, %s, %s\n", $1, $2); }
			|
			  { $$.context = NULL; }
			;

  set_condition.	: CBEC_WHERE_K cond_expr { /*printf("idenfy cond_expr: %s\n", $2); */}
			  { $$ = $2; }
			| 
			  { /* $$.exp_obj = NULL; */ }
			;

/* ------------------------------------------------ */

cond_expr		: cond_expr CBEC_OR_K cond_expr1
			  { }
			| cond_expr1  { /*printf("idenfy cond_expr1: %s\n", $1); */}
			  { $$ = $1; }
			;

  cond_expr1		: cond_expr1 CBEC_AND_K cond_stmt
			  { }
			| cond_stmt { /* printf("idenfy cond_stmt: %s\n", $1); */ }
			  { $$ = $1; }
			;

  cond_stmt		: CBEC_ID_L CBEC_IS_K CBEC_STRING_L    /* is_type*/
			  {  }
			| CBEC_ID_L CBEC_IN_K CBEC_ID_L
			  {  }
			| bool_stmt  { /* printf("idenfy bool_stmt: %s\n", $1); */}
			
			
			| '(' cond_expr ')'
			  { $$ = $2; }
			| CBEC_NOT_K cond_stmt
			  {  }
			;

    over_stmt		: CBEC_OVER_K CBEC_DURATION_L action_stmts.
			  {  }
			;

    lose_stmt		: CBEC_LOSE_K CBEC_DURATION_L action_stmts.
			  {  }
			;
			
/* ----------------------------------------------- */

bool_stmt		: func_name { /* printf("idenfy func_name: %s\n", $1); */ }
			| func_name bin_op constant
			| CBEC_ID_L '[' CBEC_STRING_L ']' bin_op constant
			;

  bin_op		: CBEC_GT
			  { $$.cbec_type = CBEC_OBJ_EXP; $$.op_type = EXP_GT; }
			| CBEC_LT
			  { $$.cbec_type = CBEC_OBJ_EXP; $$.op_type = EXP_LT; }
			| CBEC_GE
			  { $$.cbec_type = CBEC_OBJ_EXP; $$.op_type = EXP_GE; }
			| CBEC_LE
			  { $$.cbec_type = CBEC_OBJ_EXP; $$.op_type = EXP_LE; }
			| CBEC_EQ
			  { $$.cbec_type = CBEC_OBJ_EXP; $$.op_type = EXP_EQ; }
			| CBEC_NE
			  { $$.cbec_type = CBEC_OBJ_EXP; $$.op_type = EXP_NE; }
			;

/* =============================================== */

define_seq_stmt		: CBEC_DEFINE_K CBEC_SEQUENCE_K CBEC_ID_L seq_stmts
				 { fprintf(cbec_out, "\nSEQUENCE_STRUCT(%s)\n", $3.context); }
			;

  seq_stmts		: seq_stmts seq_stmt
			| seq_stmt { /* printf("idenfy seq_stmt: %s\n", $1); */ }
			;

  seq_stmt		: CBEC_START_K set_stmt over_stmt lose_stmt state_stmts
			
			;

/* ----------------------------------------------- */

state_stmts		: state_stmts state_stmt
				| state_stmt
				;

state_stmt		: '[' CBEC_INT_L ']' repeat_stmt. state_cond_stmts
			| CBEC_DBL CBEC_INT_L CBEC_DBR action_stmts.
			;

  repeat_stmt.		: CBEC_REPEAT_K CBEC_INT_L
			|
			;

  state_cond_stmts	: state_cond_stmts state_cond_stmt
			| state_cond_stmt
			;

  state_cond_stmt	: cond_expr repeat_stmt. action_stmts
			| event_stmt repeat_stmt. action_stmts
			| over_stmt
			;

    event_stmt		: CBEC_EVENT_K CBEC_ID_L CBEC_STRING_L
			| CBEC_EVENT_K CBEC_STRING_L
			; 

  action_stmts.		: action_stmts
			|
			;

    action_stmts	: action_stmts action_seq
			| action_seq
			;

    action_seq		: action_stmt
			| '{' action_stmts '}'
			;
  
/* ----------------------------------------------- */

action_stmt		: goto_stmt
			| sys_func_name
			;

  goto_stmt		: CBEC_GOTO_K '[' CBEC_INT_L ']'
			| CBEC_GOTO_K CBEC_DBL CBEC_INT_L CBEC_DBR
			;

  sys_func_name		: CBEC_SID_L '(' arguements. ')'
			;

/* ----------------------------------------------- */
