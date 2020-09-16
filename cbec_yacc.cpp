/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         cbec_parse
#define yylex           cbec_lex
#define yyerror         cbec_error
#define yydebug         cbec_debug
#define yynerrs         cbec_nerrs

#define yylval          cbec_lval
#define yychar          cbec_char

/* Copy the first part of user declarations.  */
#line 10 "cbec_yacc.y" /* yacc.c:339  */


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

/*FILE *cbec_in; */


#line 100 "cbec_yacc.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cbec_yacc.hpp".  */
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

/* Copy the second part of user declarations.  */

#line 192 "cbec_yacc.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   121

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    49,     2,     2,
      50,    51,    47,    45,    35,    46,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,     2,
       2,    36,     2,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    71,    72,    75,    76,    81,    85,    86,
      89,    90,    93,    95,    98,   100,   102,   104,   111,   115,
     118,   120,   124,   125,   128,   132,   135,   138,   138,   141,
     146,   148,   148,   152,   154,   154,   158,   160,   162,   165,
     167,   171,   175,   181,   182,   183,   186,   188,   190,   192,
     194,   196,   202,   205,   206,   209,   215,   216,   219,   220,
     223,   224,   227,   228,   231,   232,   233,   236,   237,   240,
     241,   244,   245,   248,   249,   254,   255,   258,   259,   262
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CBEC_AND_K", "CBEC_ANY_K",
  "CBEC_DEFINE_K", "CBEC_EVENT_K", "CBEC_EVERY_K", "CBEC_EQ_K",
  "CBEC_GE_K", "CBEC_GOTO_K", "CBEC_GT_K", "CBEC_IN_K", "CBEC_IS_K",
  "CBEC_LE_K", "CBEC_LOSE_K", "CBEC_LT_K", "CBEC_NE_K", "CBEC_NOT_K",
  "CBEC_OR_K", "CBEC_OVER_K", "CBEC_REPEAT_K", "CBEC_SEQUENCE_K",
  "CBEC_SET_K", "CBEC_START_K", "CBEC_TASK_K", "CBEC_WHERE_K",
  "CBEC_INT_L", "CBEC_REAL_L", "CBEC_STRING_L", "CBEC_DURATION_L",
  "CBEC_ID_L", "CBEC_SID_L", "CBEC_DBL", "CBEC_DBR", "','", "'='", "'?'",
  "':'", "CBEC_EQ", "CBEC_NE", "CBEC_LT", "CBEC_GT", "CBEC_LE", "CBEC_GE",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", "'['", "']'", "'{'",
  "'}'", "$accept", "cbec_start", "define_stmts", "define_stmt",
  "func_name", "arguements.", "arguements", "arguement", "constant",
  "define_set_stmt", "set_stmt", "qualifier", "set_parameters",
  "set_parameter", "is_type.", "set_condition.", "$@1", "cond_expr", "$@2",
  "cond_expr1", "$@3", "cond_stmt", "over_stmt", "lose_stmt", "bool_stmt",
  "bin_op", "define_seq_stmt", "seq_stmts", "seq_stmt", "state_stmts",
  "state_stmt", "repeat_stmt.", "state_cond_stmts", "state_cond_stmt",
  "event_stmt", "action_stmts.", "action_stmts", "action_seq",
  "action_stmt", "goto_stmt", "sys_func_name", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    44,    61,    63,    58,   290,
     291,   292,   293,   294,   295,    43,    45,    42,    47,    37,
      40,    41,    91,    93,   123,   125
};
# endif

#define YYPACT_NINF -111

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-111)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      11,    -7,    27,     0,    59,  -111,    31,    45,    59,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,    15,    34,  -111,
    -111,    39,    40,  -111,  -111,    31,    48,    18,  -111,    18,
      48,  -111,  -111,  -111,  -111,    23,    54,  -111,    46,    49,
      60,    63,   -21,  -111,    -6,    50,   -23,    52,    66,    46,
      56,   -20,    33,    -6,  -111,    -6,  -111,  -111,  -111,  -111,
      -6,    62,    64,   -23,  -111,  -111,    61,  -111,   -12,  -111,
      67,    68,    31,    -9,  -111,  -111,    53,    37,  -111,  -111,
     -12,    -1,   -12,    13,    74,    93,  -111,  -111,    65,    47,
      51,  -111,    -6,    76,  -111,    70,    69,    75,   -17,  -111,
    -111,  -111,  -111,  -111,  -111,    14,   -12,  -111,   -12,  -111,
    -111,  -111,  -111,  -111,  -111,    78,    -3,  -111,  -111,    55,
    -111,  -111,    93,  -111,  -111,     2,    44,  -111,    -3,  -111,
      76,    13,  -111,    77,    -6,  -111,    -6,    14,  -111,    -6,
      -6,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     9,     0,     2,     4,
       5,     6,    14,    15,    16,    17,    12,     0,     8,    11,
      13,     0,     0,     3,     7,     0,     0,     0,    10,     0,
      52,    54,    21,    20,    18,     0,     0,    53,     0,     0,
       0,    26,     0,    23,    70,     0,     0,     0,     0,     0,
      29,     0,     0,     0,    41,    69,    72,    73,    75,    76,
      70,     0,     0,    55,    57,    25,     0,    22,     0,    19,
       0,     0,     9,     0,    71,    42,     0,     0,    56,    24,
       0,     0,     0,    43,    27,    31,    34,    38,     0,     0,
       0,    74,    70,    61,    40,     0,     0,     0,     0,    50,
      51,    47,    46,    49,    48,     0,     0,    28,     0,    32,
      35,    78,    77,    79,    59,     0,     0,    37,    36,     0,
      39,    44,    30,    33,    60,     0,    61,    66,    58,    63,
      61,     0,    68,     0,     0,    62,     0,     0,    67,    64,
      65,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -111,  -111,  -111,    95,   106,    38,  -111,    84,   -98,  -111,
      82,  -111,  -111,    71,  -111,  -111,  -111,   -47,  -111,     6,
    -111,   -71,    79,  -111,  -111,   -18,  -111,  -111,    86,  -111,
      58,  -110,  -111,   -14,  -111,   -52,   -48,   -55,  -111,  -111,
    -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    83,    17,    18,    19,    20,    10,
      34,    35,    42,    43,    48,    69,   107,   126,   109,    85,
     110,    86,   127,    46,    87,   105,    11,    30,    31,    63,
      64,   116,   128,   129,   130,    54,    55,    56,    57,    58,
      59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      74,    51,   106,   125,    51,    73,    80,   121,    75,    94,
      61,    95,    96,    70,    49,    80,   134,    39,    74,    81,
     136,    84,    32,    52,     3,    33,    52,     5,    81,    62,
      50,   132,    71,   133,   120,    98,     1,   123,    82,   141,
     114,    12,    13,    14,    15,    53,    91,    82,    53,     6,
       6,    97,    99,   100,   101,   102,   103,   104,    12,    13,
      14,    15,    16,   106,     7,   115,    24,    21,    22,    25,
      26,    27,    29,    38,    39,    45,    47,    41,    66,    44,
      60,    65,    68,    72,    74,    74,   139,    92,   140,    76,
      93,    77,    79,   106,    88,    89,   108,   115,   118,   111,
     112,   117,   113,    23,   119,   124,   138,     4,   131,    28,
      90,    36,   122,   137,   135,    40,    37,     0,     0,     0,
      67,    78
};

static const yytype_int16 yycheck[] =
{
      55,    10,    19,     6,    10,    53,    18,   105,    60,    80,
      33,    12,    13,    33,    35,    18,   126,    20,    73,    31,
     130,    68,     4,    32,    31,     7,    32,     0,    31,    52,
      51,    29,    52,    31,    51,    82,    25,   108,    50,   137,
      92,    27,    28,    29,    30,    54,    55,    50,    54,    50,
      50,    52,    39,    40,    41,    42,    43,    44,    27,    28,
      29,    30,    31,    19,     5,    21,    51,    22,    23,    35,
      31,    31,    24,    50,    20,    15,    13,    31,    12,    30,
      30,    29,    26,    50,   139,   140,   134,    34,   136,    27,
      53,    27,    31,    19,    27,    27,     3,    21,    29,    34,
      53,    31,    51,     8,    29,    27,    29,     1,    53,    25,
      72,    29,   106,   131,   128,    36,    30,    -1,    -1,    -1,
      49,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    57,    31,    60,     0,    50,     5,    58,    59,
      65,    82,    27,    28,    29,    30,    31,    61,    62,    63,
      64,    22,    23,    59,    51,    35,    31,    31,    63,    24,
      83,    84,     4,     7,    66,    67,    66,    84,    50,    20,
      78,    31,    68,    69,    30,    15,    79,    13,    70,    35,
      51,    10,    32,    54,    91,    92,    93,    94,    95,    96,
      30,    33,    52,    85,    86,    29,    12,    69,    26,    71,
      33,    52,    50,    92,    93,    91,    27,    27,    86,    31,
      18,    31,    50,    60,    73,    75,    77,    80,    27,    27,
      61,    55,    34,    53,    77,    12,    13,    52,    73,    39,
      40,    41,    42,    43,    44,    81,    19,    72,     3,    74,
      76,    34,    53,    51,    91,    21,    87,    31,    29,    29,
      51,    64,    75,    77,    27,     6,    73,    78,    88,    89,
      90,    53,    29,    31,    87,    89,    87,    81,    29,    92,
      92,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    64,    64,    65,    66,
      67,    67,    68,    68,    69,    70,    70,    72,    71,    71,
      73,    74,    73,    75,    76,    75,    77,    77,    77,    77,
      77,    78,    79,    80,    80,    80,    81,    81,    81,    81,
      81,    81,    82,    83,    83,    84,    85,    85,    86,    86,
      87,    87,    88,    88,    89,    89,    89,    90,    90,    91,
      91,    92,    92,    93,    93,    94,    94,    95,    95,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     1,     1,     4,     1,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     4,     5,
       1,     1,     3,     1,     4,     2,     0,     0,     3,     0,
       3,     0,     2,     3,     0,     2,     3,     3,     1,     3,
       2,     3,     3,     1,     3,     6,     1,     1,     1,     1,
       1,     1,     4,     2,     1,     5,     2,     1,     5,     4,
       2,     0,     2,     1,     3,     3,     1,     3,     2,     1,
       0,     2,     1,     1,     3,     1,     1,     4,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:
#line 82 "cbec_yacc.y" /* yacc.c:1646  */
    { printf("\nfunc-Id: , $1: %s \t $3: %s\t $4: %s\n",(yyvsp[-3]).context, (yyvsp[-1]).context, (yyvsp[0]).context); }
#line 1378 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 90 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1384 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 94 "cbec_yacc.y" /* yacc.c:1646  */
    { printf("Id: %s ",(yyvsp[0]).context); }
#line 1390 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 96 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1396 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 99 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("int: %d",(yyvsp[0]).value); }
#line 1402 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 101 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("real: %f",(yyvsp[0]).real); }
#line 1408 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 103 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("str: %s",(yyvsp[0]).context); }
#line 1414 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 105 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("int: %d %d",(yyvsp[0]).duration.time, (yyvsp[0]).duration.unit); 	/* 1:s,2:m,3:h */ }
#line 1420 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 112 "cbec_yacc.y" /* yacc.c:1646  */
    { printf("ID: %s",(yyvsp[-1]).context); }
#line 1426 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 115 "cbec_yacc.y" /* yacc.c:1646  */
    { /*printf("idenfy set_condition: %s\n", $5); */}
#line 1432 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 119 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval).value = 1; /* for every */ }
#line 1438 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 121 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval).value = 2; /* for any */ }
#line 1444 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 129 "cbec_yacc.y" /* yacc.c:1646  */
    {  }
#line 1450 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 133 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("is detected, %s, %s\n", (yyvsp[-1]), (yyvsp[0])); }
#line 1456 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 135 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval).context = NULL; }
#line 1462 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 138 "cbec_yacc.y" /* yacc.c:1646  */
    { /*printf("idenfy cond_expr: %s\n", $2); */}
#line 1468 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 139 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1474 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 141 "cbec_yacc.y" /* yacc.c:1646  */
    { /* $$.exp_obj = NULL; */ }
#line 1480 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 147 "cbec_yacc.y" /* yacc.c:1646  */
    { }
#line 1486 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 148 "cbec_yacc.y" /* yacc.c:1646  */
    { /*printf("idenfy cond_expr1: %s\n", $1); */}
#line 1492 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 149 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1498 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 153 "cbec_yacc.y" /* yacc.c:1646  */
    { }
#line 1504 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 154 "cbec_yacc.y" /* yacc.c:1646  */
    { /* printf("idenfy cond_stmt: %s\n", $1); */ }
#line 1510 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 155 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1516 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 159 "cbec_yacc.y" /* yacc.c:1646  */
    {  }
#line 1522 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 161 "cbec_yacc.y" /* yacc.c:1646  */
    {  }
#line 1528 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 162 "cbec_yacc.y" /* yacc.c:1646  */
    { /* printf("idenfy bool_stmt: %s\n", $1); */}
#line 1534 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 166 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1540 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 168 "cbec_yacc.y" /* yacc.c:1646  */
    {  }
#line 1546 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 172 "cbec_yacc.y" /* yacc.c:1646  */
    {  }
#line 1552 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 176 "cbec_yacc.y" /* yacc.c:1646  */
    {  }
#line 1558 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 181 "cbec_yacc.y" /* yacc.c:1646  */
    { /* printf("idenfy func_name: %s\n", $1); */ }
#line 1564 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 187 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval).cbec_type = CBEC_OBJ_EXP; (yyval).op_type = EXP_GT; }
#line 1570 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 189 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval).cbec_type = CBEC_OBJ_EXP; (yyval).op_type = EXP_LT; }
#line 1576 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 191 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval).cbec_type = CBEC_OBJ_EXP; (yyval).op_type = EXP_GE; }
#line 1582 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 193 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval).cbec_type = CBEC_OBJ_EXP; (yyval).op_type = EXP_LE; }
#line 1588 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 195 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval).cbec_type = CBEC_OBJ_EXP; (yyval).op_type = EXP_EQ; }
#line 1594 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 197 "cbec_yacc.y" /* yacc.c:1646  */
    { (yyval).cbec_type = CBEC_OBJ_EXP; (yyval).op_type = EXP_NE; }
#line 1600 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 206 "cbec_yacc.y" /* yacc.c:1646  */
    { /* printf("idenfy seq_stmt: %s\n", $1); */ }
#line 1606 "cbec_yacc.cpp" /* yacc.c:1646  */
    break;


#line 1610 "cbec_yacc.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
