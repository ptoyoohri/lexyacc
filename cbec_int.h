/* *****************************************************************************
// [cbec_int.h]
//
//  Copyright 2020 Bigdata. All Rights Reserved.
//
// Except as specified in the license terms of Bigdata, this material may not be copied, modified,
// re-published, uploaded, executed, or distributed in any way, in any medium,
// in whole or in part, without prior written permission from Bigdata.
// ****************************************************************************/

/* ================================================

  cbec_int.h -- global define for cbec parser 
		cbec package internal use

  author : Ta-Yung Liu
  Date   : 09/07/2020

  ================================================= */

#ifndef CBEC_INT_H
#define CBEC_INT_H
#define ECHO
#ifndef CBEC_ALLOC
#define CBEC_ALLOC extern
#define CBEC_init_val(s)
#else
#define CBEC_init_val(s) = s
#endif

#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <float.h>
#include <assert.h>
#include <sys/stat.h>

#include "cbec.h"

#define MAX_TOK		128

#define MAXINT 214748364
//#define MAXDOUBLE 

/* ================================================ */

extern int cbec_lineno;		/* defined in cbec_lex.cpp */
CBEC_ALLOC char cbec_curr_tok[MAX_TOK];

// for input string buffer and counter
CBEC_ALLOC char *cbec_file_name;
//CBEC_ALLOC int cbec_inp_count;
CBEC_ALLOC char *cbec_message;	// message
//CBEC_ALLOC cbec_exp_type_e cbec_exp_type;	

//CBEC_ALLOC cbec_obj_t *cbec_cont_delay;
CBEC_ALLOC cbec_pt_tree_t *cbec_pt;	// output parsing tree

/* ------------------------------------------------ */

//CBEC_ALLOC unsigned cbec_ignoreCase CBEC_init_val(0);

//CBEC_ALLOC int cbec_inside_sizeof CBEC_init_val(0);

/* ================================================ */

CBEC_ALLOC int cbec_parser_err_count CBEC_init_val(0);
CBEC_ALLOC int cbec_syntax_error CBEC_init_val(0);
//CBEC_ALLOC int cbec_rng_error CBEC_init_val(0);

/* ================================================ */

//CBEC_ALLOC int cbec_parser_st CBEC_init_val(0);

//CBEC_ALLOC int cbec_parser_const_exp CBEC_init_val(0);
//CBEC_ALLOC int cbec_parser_no_real CBEC_init_val(0);	/* no real in index or range */

/* ================================================ */

// ---- sematic rec for both parser

union yystype {

  enum cbec_obj_type_e cbec_type;
  char *context;

  union {
    enum cbec_const_type_e const_type;
    enum cbec_exp_type_e op_type;
  };
    
  /* ================ cbec_lex.l */

  union {
    int value;
    double real;
    struct {
      int time;
      int unit; 
    } duration;
  };

  //cbec_obj_t *cbec_val;

  //struct {		// expression,statement
  //  cbec_link_t *head;
  //  cbec_link_t *_tail;
  //} link;

};
#define YYSTYPE union yystype

/* ================================================ */

class cbec_glb_t {
  public :
    int no;				// CBEC_EXP, CBEC_EVENT
};

CBEC_ALLOC cbec_glb_t *cbec_glb;

/* ================================================ */

inline
char * cbec_copy_string(
	char * text)
{ if (text == NULL)
    return(NULL);

  char * buf = (char *) calloc(strlen(text)+1,1);
  strcpy(buf,text);
  return(buf);
}

/* ------------------------------------------------ */

inline
cbec_obj_t *cbec_get_obj_t(void)
{ cbec_obj_t *opr;

  opr = (cbec_obj_t *) calloc(sizeof(cbec_obj_t),1);
  return(opr);
}

/* ================================================ */

// hash: h*17 + c + 97531

inline
unsigned int cbec_def_hash(
        char * s)
{ unsigned int h,n;

  h = 0;
  for (;(n = *s)!=0;s++)
    h = (h << 4) + h + n + 97531;
  return (h);
}

/* ================================================ */

/* cbec_ev.cpp */

//bool_T cbec_ev_preprocess(cbec_pt_tree_t *pt);

/* ------------------------------------------------ */

/* cbec_kw.cpp */

int cbec_kw_find_keyword(char *id);

/* ------------------------------------------------ */

/* cbec_link.cpp */

void cbec_link_obj(YYSTYPE *r,YYSTYPE *r1);
void cbec_link_append(YYSTYPE *r,YYSTYPE *r1,YYSTYPE *r2);
void cbec_link_handle(YYSTYPE *r,YYSTYPE *r1,YYSTYPE *r2);

/* ------------------------------------------------ */

/* cbec_misc.cpp */

//void cbec_misc_block_end(int end);
//void cbec_misc_int(YYSTYPE *r,int value);
//void cbec_misc_bit_vector(YYSTYPE *r,int width,int base,char *int_ext);
//void cbec_misc_id_link(YYSTYPE *r,char *id1,char *id2);

//void cbec_misc_free_pt_tree(Vmalloc_t *vm,cbec_pt_tree_t *pt_tree);

/* ------------------------------------------------ */

/* cbec_msg.cpp */

void cbec_msg_err(const char *msg, ...);

/* ------------------------------------------------ */

/* cbec_opr.cpp */

//void cbec_opr_handle(YYSTYPE *r,enum hdbOpcode op_code);
//void cbec_opr_link_handle(YYSTYPE *r,YYSTYPE *rop,YYSTYPE *r1,YYSTYPE *r2,YYSTYPE *r3);
//void cbec_opr_event_name(YYSTYPE *r,YYSTYPE *r1);
//void cbec_opr_event_or(YYSTYPE *r,YYSTYPE *r1,YYSTYPE *r2,YYSTYPE *r3);
//void cbec_opr_slice_handle(YYSTYPE *r,YYSTYPE *r1,YYSTYPE *r2);
//void cbec_opr_concat_handle(YYSTYPE *r,YYSTYPE *r1,YYSTYPE *r2);
//void cbec_opr_id_name(YYSTYPE *r,char *id_name);

/* ------------------------------------------------ */

/* cbec_rng.cpp */

//bool_T cbec_rng_handle(cbec_obj_t *exp);
//void cbec_rng_set_edge(cbec_obj_t *exp,unsigned int is_posedge,unsigned int is_negedge);

/* ------------------------------------------------ */

/* cbec_stmt.cpp */

//void cbec_stmt_handle(YYSTYPE *r,enum hdbStmtType st_code);
//void cbec_stmt_link_handle(YYSTYPE *r,YYSTYPE *ost,YYSTYPE *r1,YYSTYPE *r2,YYSTYPE *r3);
//void cbec_stmt_list_handle(YYSTYPE *r,YYSTYPE *ost,YYSTYPE *r1);
//void cbec_stmt_cont_assign(YYSTYPE *r,cbec_obj_t *iid,cbec_obj_t *idx,
//		cbec_link_t *slice,cbec_obj_t *exp);

/* ================================================ */

#endif


