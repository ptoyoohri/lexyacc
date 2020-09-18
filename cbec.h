/* *****************************************************************************
// [cbec.h]
//
//  Copyright 2020 BigData. All Rights Reserved.
//
// Except as specified in the license terms of BigData, this material may not be copied, modified,
// re-published, uploaded, executed, or distributed in any way, in any medium,
// in whole or in part, without prior written permission from BigData.
// ****************************************************************************/

/* ================================================

  cbec.h -- data structure and prototypes of cbec language

  author : Ta-Yung Liu
  Date   : 09/07/2020

  ================================================= */

#ifndef CBEC_H
#define CBEC_H


#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
 
#define FIX_SIZE 8
#define WHERE_SIZE 1024

/* ------------------------------------------------ */

enum cbec_obj_type_e {
  CBEC_OBJ_CONST,
  CBEC_OBJ_ID,
  CBEC_OBJ_STMT,
  CBEC_OBJ_EXP,
  CBEC_OBJ_END
};
typedef enum cbec_obj_type_e cbec_obj_type_e;

/* ------------------------------------------------ */

enum cbec_const_type_e {
  CBEC_CONST_INT,
  CBEC_CONST_DOUBLE,
  CBEC_CONST_STRING,
  CBEC_CONST_DURATION,
  CEBC_CONST_END
};
typedef enum cbec_const_type_e cbec_const_type_e;

/* ------------------------------------------------ */

enum cbec_exp_type_e {
  EXP_GT        = 0,
  EXP_GE        = 1,
  EXP_LT        = 2,
  EXP_LE        = 3,
  EXP_EQ        = 4,
  EXP_NE        = 5,
  EXP_AND       = 6,
  EXP_OR        = 7,
  EXP_NOT       = 8,
  VE_UNKNOW     = 9
};
typedef enum cbec_exp_type_e cbec_exp_type_e;

/* ================================================ */

/* object for parsing tree (no use for now) */

class cbec_obj_t {
  public :
    //inline enum cbec_obj_type_e vlpGetType(void) { return(cbec_type); }

    enum cbec_obj_type_e cbec_type;	// cebc_obj_type
    char *context;			// for ID

    //class cbec_link_t *exp_obj;
    //class cbec_link_t *stmt_obj;
    union {
      cbec_exp_type_e po_type;			// cbec_type = CBEC_OBJ_EXP
      //enum cbec_stmt_e st_type;		// cbec_type = CBEC_OBJ_STMT
      char *identifier;				// cbec_type = CBEC_OBJ_ID
      cbec_const_type_e const_type;		// cbec_type = CBEC_OBJ_CONST
    };
    union {
      //unsigned int end_lineno;		// for source code end lineno
      int value;			// const_type = CBEC_CONST_INT
      double real;			// const_type = CBEC_CONST_DOUBLE
      char *str;			// const_type = CBEC_CONST_STRING
      struct { 				// const_type = CBEC_CONST_DURATION
        int time;
	int unit;			// 1:sec, 2:min, 3:hour
      } duration;		
    };
    //unsigned int begin_lineno;
};

/* ------------------------------------------------ */

class cbec_link_t {
  public :
    class cbec_link_t *next;
    class cbec_obj_t *_ptr;
};

/* ------------------------------------------------ */

class cbec_pt_tree_t {
  public :
    class cbec_obj_t *parsing_tree;
};

/* ================================================ */

class cbec_opr_iter_t {
  friend class cbec_obj_t;

  public :
    void iterInit(cbec_obj_t *op);
    int iterNext(cbec_obj_t *&nop);
    void iterStop(void);

  private :
    class cbec_link_t *cbec_lp;
};

/* ================================================ */

/* cbec_eval.src */

//fbv_obj_t *cbec_eval_handle(cbec_obj_t *exp,int source);
//fbv_obj_t *cbec_eval_event_handle(cbec_obj_t *exp);

/* ------------------------------------------------ */

/* cbec_main.src */

//bool_T cbec_main_parse_a_vl_ECO(Vmalloc_t *vm,int no,hdbId *IDary,char *inp_buf,
//		cbec_pt_tree_t **pt_out);
//fbv_obj_t *cbec_main_parse_for_spare_sheet(fu_hash_t *kop_tbl,char *inp_buf);
//bool_T cbec_main_parse_an_event(Vmalloc_t *vm,int no,hdbId *IDary,char *inp_buf,
//		cbec_pt_tree_t **pt_out,bool_T chk_fsdb = TRUE, unsigned ignoreCase=0);
//bool_T cbec_main_parse_an_expression_n(Vmalloc_t *vm,int no,hdbId *IDary,
//        char *inp_buf,cbec_exp_type_e exp_type,cbec_pt_tree_t **pt_out,bool_T chk_fsdb, 
//        unsigned ignoreCase=0);
//void cbec_main_set_data_out(void);	// for dnl_mrh.src

//bool_T cbec_main_parse_for_RDE(fu_hash_t *kop_tbl,char *inp_buf,cbec_pt_tree_t *& ptree);
//fbv_obj_t *cbec_main_RDE_eval(fu_hash_t *kop_tbl,cbec_pt_tree_t *ptree);
//void cbec_main_RDE_free_ptree(cbec_pt_tree_t *&ptree);


/* ------------------------------------------------ */

/* cbec_misc.src */

//void cbec_misc_free_pt_tree(Vmalloc_t *vm,cbec_pt_tree_t *pt_tree);

/* ------------------------------------------------ */

/* cbec_msg.cpp */

void cbec_msg_err(char *msg, ...);

/* ------------------------------------------------ */

/* cbec_prop.src */	// for dnl_mrh.src

//bool_T cbec_prop_main(Vmalloc_t *vm,int no,hdbId *idArr,char *inp_buf,char *out_buf);

/* ================================================ */

#endif


class Action {
public:
    char    *actionClause;
    
};



class Timer {
    char  *duration; // 2m
    Action    actions;
};

class In {
    public:
        char *varName; // P
        char *isName;   // if it is not null, means it has "is" 
        char *inSetName; // in a set
        
};


class Condition {
public:
    char    *conditionClause;
    int     repeat;
    Action    actions;
}; 


class State {
    public:
        int stateIndex;
        bool    end;
        Condition   condtions[FIX_SIZE];
        Timer       timeout;

        Action    actions; // it will execute when instance enther this state
}; 


class Set {
    public:
        char *setName; // People
        int everyAny; // 1:every or 2: any
        In  defineIn; //  (P is "person" in objects) where P .....
        char *conditionClause;
};


class Sequence {
    public:
        char *sequenceName;
        char everyAny;
        In  startIn[FIX_SIZE];
        Timer   Over;
        Timer   Lose;

        State   states[FIX_SIZE];

};


class Task {
    public:
    char *taskName;
    char *objectsName; 
    char *evnetsName;

    Set         sets[FIX_SIZE];
  

    Sequence    sequences[FIX_SIZE];

    int countSet;
    int countSequence;


    void init(char [], char []);
    void setIn(char [], char [], char []);
    void everyAny(int);
    void setCondition(char []);
   
 //   void addFunc(char [], char[]);
  //  void setCondition(char []);
};



