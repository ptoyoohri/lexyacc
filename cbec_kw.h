/* *****************************************************************************
// [cbec_kw.h]
//
//  Copyright 2002-2005 BigData. All Rights Reserved.
//
// Except as specified in the license terms of BigData, this material may not be copied, modified,
// re-published, uploaded, executed, or distributed in any way, in any medium,
// in whole or in part, without prior written permission from BigData.
// ****************************************************************************/

/* ================================================

  cbec_kw.h -- keyword of cbec language 

  author : Ta-Yung Liu
  Date   : 09/04/2020

  ================================================= */

#ifndef CBEC_KW_H
#define CBEC_KW_H

#include "cbec_yacc.h"

/* ------------------------------------------------ */

struct cbec_kw_table {
  int 	 kw_id;
  const char  *kw_name;
};
typedef struct cbec_kw_table cbec_kw_table;

/* ------------------------------------------------ */

#define cbec_kw_size 24

cbec_kw_table cbec_kw_tbl[cbec_kw_size] = {
  { CBEC_AND_K,		"and" },
  { CBEC_ANY_K,		"any" },
  { CBEC_DEFINE_K,	"define" },
  { CBEC_EVENT_K,	"event" },
  { CBEC_EVERY_K,	"every" },
  { CBEC_EQ_K,		"eq" },
  { CBEC_GE_K,		"ge" },
  { CBEC_GOTO_K,	"goto" },
  { CBEC_GT_K,		"gt" },
  { CBEC_IN_K,		"in" },
  { CBEC_IS_K,		"is" },
  { CBEC_LE_K,		"le" },
  { CBEC_LOSE_K,	"lose" },
  { CBEC_LT_K,		"lt" },
  { CBEC_NE_K,		"ne" },
  { CBEC_NOT_K,		"not" },
  { CBEC_OR_K,		"or" },
  { CBEC_OVER_K,	"over" },
  { CBEC_REPEAT_K,	"repeat" },
  { CBEC_SEQUENCE_K,	"sequence" },
  { CBEC_SET_K,		"set" },
  { CBEC_START_K,	"start" },
  { CBEC_TASK_K,	"task" },
  { CBEC_WHERE_K,	"where" }
};

/* ================================================ */

#endif
