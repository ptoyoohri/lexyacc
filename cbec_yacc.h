/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_CBEC_CBEC_YACC_HPP_INCLUDED
# define YY_CBEC_CBEC_YACC_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int cbec_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CBEC_AND_K = 258,
    CBEC_ANY_K = 259,
    CBEC_DEFINE_K = 260,
    CBEC_EVENT_K = 261,
    CBEC_EVERY_K = 262,
    CBEC_EQ_K = 263,
    CBEC_GE_K = 264,
    CBEC_GOTO_K = 265,
    CBEC_GT_K = 266,
    CBEC_IN_K = 267,
    CBEC_IS_K = 268,
    CBEC_LE_K = 269,
    CBEC_LOSE_K = 270,
    CBEC_LT_K = 271,
    CBEC_NE_K = 272,
    CBEC_NOT_K = 273,
    CBEC_OR_K = 274,
    CBEC_OVER_K = 275,
    CBEC_REPEAT_K = 276,
    CBEC_SEQUENCE_K = 277,
    CBEC_SET_K = 278,
    CBEC_START_K = 279,
    CBEC_TASK_K = 280,
    CBEC_WHERE_K = 281,
    CBEC_INT_L = 282,
    CBEC_REAL_L = 283,
    CBEC_STRING_L = 284,
    CBEC_DURATION_L = 285,
    CBEC_ID_L = 286,
    CBEC_SID_L = 287,
    CBEC_DBL = 288,
    CBEC_DBR = 289,
    CBEC_EQ = 290,
    CBEC_NE = 291,
    CBEC_LT = 292,
    CBEC_GT = 293,
    CBEC_LE = 294,
    CBEC_GE = 295
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE cbec_lval;

int cbec_parse (void);

#endif /* !YY_CBEC_CBEC_YACC_HPP_INCLUDED  */
