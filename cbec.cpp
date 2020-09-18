/* *****************************************************************************
// [cbec.cpp]
//
//  Copyright 2004-2004 SPRINGSOFT. All Rights Reserved.
//
// Except as specified in the license terms of SPRINGSOFT, this material may not be copied, modified,
// re-published, uploaded, executed, or distributed in any way, in any medium,
// in whole or in part, without prior written permission from SPRINGSOFT.
// ****************************************************************************/

#define CBEC_ALLOC

//#include "cbec.h"
//#include <values.h>
#include <float.h>
#include <stdarg.h>
#include "cbec_int.h"
#include "cbec_kw.h"

//#include "cbec_prop.src"

//#include "cbec_ev.src"
//#include "cbec_eval.src"
#include "cbec_kw.src"
//#include "cbec_link.src"
//#include "cbec_misc.src"
#include "cbec_msg.src"
//#include "cbec_opr.src"
//#include "cbec_rng.src"
//#include "cbec_stmt.src"
#include "cbec_main.src"




void Task::init(char task_name[], char o_e_Name[]) {
    
    taskName = task_name;
    char *objectsName = o_e_Name;
    char *ptr = o_e_Name;
    int lenght = strlen(o_e_Name);


    for (ptr = o_e_Name; *ptr != '\0' ; ptr++) {
        
        if (*ptr == ',') {
            char *ptr_NULL = ptr;
            ptr ++;
           
            *ptr_NULL = '\0'; 
             
            break;
        }
    }

    evnetsName = ptr;


    printf("Task::init(): %s; %s; %s \n", taskName, objectsName, evnetsName);
}

void Task::setIn(char var_name[], char is_name[], char in_set_name[]) {
    
    sets[countSet].defineIn.varName = var_name; // P
    sets[countSet].defineIn.isName = is_name; // is "people"
    sets[countSet].defineIn.inSetName = in_set_name; // in objects

    printf("Task::setIs(): %s; %s; %s;\n", var_name, is_name, in_set_name);
}

void Task::everyAny(int qlfy) {  
    sets[countSet].everyAny = qlfy;  // 1:every or 2: any
    printf("Task::everyAny(): %d;\n", qlfy);
}

void Task::setCondition(char condition[]) {  
    sets[countSet].conditionClause = condition;  // 1:every or 2: any
    printf("Task::setCondition(): %s;\n", sets[countSet].conditionClause);
}