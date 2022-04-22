
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "SyntaxicAnalyser.y"

#include "semantic.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;
char nom[256];

int yyerror(char const * msg);	
int yylex(void);
void Begin();
void End();



/* Line 189 of yacc.c  */
#line 90 "SyntaxicAnalyser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     P_OUVRANTE = 259,
     P_FERMANTE = 260,
     C_OUVRANTE = 261,
     C_FERMANTE = 262,
     BLOCK_START = 263,
     BLOCK_END = 264,
     VIRGULE = 265,
     POINT_VIRGULE = 266,
     POINT = 267,
     INTEGER_LITERAL = 268,
     BOOLEAN_LITERAL = 269,
     INEQUALITY = 270,
     EQUALITY = 271,
     SUBSTRACTION = 272,
     MULTIPLICATION = 273,
     AFFECTATION = 274,
     DIVISION = 275,
     ADD = 276,
     ET = 277,
     OR = 278,
     INF = 279,
     SUP = 280,
     NOT = 281,
     CLASS = 282,
     STATIC = 283,
     EXTENDS = 284,
     PRIVATE = 285,
     PUBLIC = 286,
     PACKAGE = 287,
     IF = 288,
     ELSE = 289,
     WHILE = 290,
     THIS = 291,
     NEW = 292,
     RETURN = 293,
     LENGTH = 294,
     VOID = 295,
     MAIN = 296,
     SYSTEM_OUT_PRINTLN = 297,
     ID = 298,
     STRING = 299,
     STR = 300,
     TYPE = 301,
     INT = 302,
     BOOL = 303
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 180 "SyntaxicAnalyser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNRULES -- Number of states.  */
#define YYNSTATES  253

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    30,    48,    66,    84,
     102,   120,   138,   156,   174,   183,   191,   199,   206,   212,
     218,   225,   232,   239,   242,   244,   247,   249,   250,   255,
     259,   260,   261,   276,   292,   306,   321,   324,   326,   327,
     332,   334,   337,   339,   341,   345,   347,   349,   353,   361,
     367,   373,   378,   386,   390,   394,   398,   402,   406,   410,
     414,   419,   423,   430,   432,   434,   436,   438,   444,   445,
     451,   454,   458,   460,   461,   466
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    52,    -1,    51,    -1,    51,    52,
       1,    -1,    27,    43,     8,    31,    28,    40,    41,     4,
      45,     6,     7,    43,     5,     8,    65,     9,     9,    -1,
      27,     1,     8,    31,    28,    40,    41,     4,    45,     6,
       7,    43,     5,     8,    65,     9,     9,    -1,    27,    43,
       1,    31,    28,    40,    41,     4,    45,     6,     7,    43,
       5,     8,    65,     9,     9,    -1,    27,    43,     8,    31,
      28,    40,    41,     1,    45,     6,     7,    43,     5,     8,
      65,     9,     9,    -1,    27,    43,     8,    31,    28,    40,
       1,     4,    45,     6,     7,    43,     5,     8,    65,     9,
       9,    -1,    27,    43,     8,    31,    28,    40,    41,     4,
      45,     6,     1,    43,     5,     8,    65,     9,     9,    -1,
      27,    43,     8,    31,    28,    40,    41,     4,    45,     6,
       7,    43,     1,     8,    65,     9,     9,    -1,    27,    43,
       8,    31,    28,    40,    41,     4,    45,     6,     7,    43,
       5,     8,    65,     1,     9,    -1,    27,     1,     8,    31,
      28,    40,    41,     4,    45,     6,     7,    43,     5,     8,
      65,     9,     1,    -1,    27,    43,    29,    43,     8,    53,
      54,     9,    -1,    27,    43,    29,    43,     8,    53,     9,
      -1,    27,    43,    29,    43,     8,    54,     9,    -1,    27,
      43,     8,    53,    54,     9,    -1,    27,    43,     8,    54,
       9,    -1,    27,    43,     8,    53,     9,    -1,    27,    43,
       1,    53,    54,     9,    -1,    27,    43,     8,    53,    54,
       1,    -1,     1,    43,     8,    53,    54,     9,    -1,    55,
      53,    -1,    55,    -1,    59,    54,    -1,    59,    -1,    -1,
      64,    43,    56,    11,    -1,    64,    43,     1,    -1,    -1,
      -1,    31,    64,    43,    57,     4,     5,    58,     8,    53,
      60,    38,    66,    11,     9,    -1,    31,    64,    43,    57,
       4,    61,     5,    58,     8,    53,    60,    38,    66,    11,
       9,    -1,    31,    64,    43,    57,     4,     5,    58,     8,
      60,    38,    66,    11,     9,    -1,    31,    64,    43,    57,
       4,    61,     5,    58,     8,    60,    38,    66,    11,     9,
      -1,    65,    60,    -1,    65,    -1,    -1,    63,    62,    10,
      61,    -1,    63,    -1,    64,    43,    -1,    47,    -1,    48,
      -1,    47,     7,     7,    -1,    46,    -1,    43,    -1,     8,
      60,     9,    -1,    33,     4,    66,     5,    65,    34,    65,
      -1,    35,     4,    66,     5,    65,    -1,    42,     4,    66,
       5,    11,    -1,    43,    19,    66,    11,    -1,    43,     6,
      66,     7,    19,    66,    11,    -1,    66,    22,    66,    -1,
      66,    23,    66,    -1,    66,    25,    66,    -1,    66,    24,
      66,    -1,    66,    21,    66,    -1,    66,    17,    66,    -1,
      66,    18,    66,    -1,    66,     6,    66,     7,    -1,    66,
      12,    39,    -1,    66,    12,    43,     4,    68,     5,    -1,
      13,    -1,    14,    -1,    43,    -1,    36,    -1,    37,    13,
       6,    66,     7,    -1,    -1,    37,    43,    67,     4,     5,
      -1,    26,    66,    -1,     4,    66,     5,    -1,    44,    -1,
      -1,    66,    69,    10,    68,    -1,    66,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    70,    70,    71,    72,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    94,    95,    97,    98,   100,   100,   101,
     104,   114,   119,   120,   121,   122,   124,   125,   127,   127,
     128,   130,   133,   134,   135,   136,   137,   139,   140,   141,
     142,   143,   144,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   162,
     163,   164,   165,   168,   168,   171
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "P_OUVRANTE", "P_FERMANTE",
  "C_OUVRANTE", "C_FERMANTE", "BLOCK_START", "BLOCK_END", "VIRGULE",
  "POINT_VIRGULE", "POINT", "INTEGER_LITERAL", "BOOLEAN_LITERAL",
  "INEQUALITY", "EQUALITY", "SUBSTRACTION", "MULTIPLICATION",
  "AFFECTATION", "DIVISION", "ADD", "ET", "OR", "INF", "SUP", "NOT",
  "CLASS", "STATIC", "EXTENDS", "PRIVATE", "PUBLIC", "PACKAGE", "IF",
  "ELSE", "WHILE", "THIS", "NEW", "RETURN", "LENGTH", "VOID", "MAIN",
  "SYSTEM_OUT_PRINTLN", "ID", "STRING", "STR", "TYPE", "INT", "BOOL",
  "$accept", "programme", "MainClass", "ClassDeclaration",
  "VarDeclarations", "MethodDeclarations", "VarDeclaration", "$@1",
  "afterIdMethodeCode", "afterParentheseFermanteMethodeCode",
  "MethodDeclaration", "Statements", "argDeclarations", "$@2",
  "argDeclaration", "type", "Statement", "expression", "$@3",
  "expressions", "$@4", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    53,    53,    54,    54,    56,    55,    55,
      57,    58,    59,    59,    59,    59,    60,    60,    62,    61,
      61,    63,    64,    64,    64,    64,    64,    65,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    66,
      66,    66,    66,    69,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,    17,    17,    17,    17,    17,
      17,    17,    17,    17,     8,     7,     7,     6,     5,     5,
       6,     6,     6,     2,     1,     2,     1,     0,     4,     3,
       0,     0,    14,    15,    13,    14,     2,     1,     0,     4,
       1,     2,     1,     1,     3,     1,     1,     3,     7,     5,
       5,     4,     7,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     6,     1,     1,     1,     1,     5,     0,     5,
       2,     3,     1,     0,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    45,    42,    43,
       0,    24,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,    23,     0,     0,     0,    19,     0,
      18,    25,     0,     0,     0,     0,     0,    44,    22,    29,
       0,    20,    30,    21,    17,     0,     0,     0,     0,     0,
       0,     0,    28,     0,    15,     0,    16,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,    31,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,    37,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,    63,    64,     0,
      66,     0,    65,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,    13,     6,     7,     9,     8,    10,    11,
      12,     5,    71,     0,     0,     0,     0,    61,     0,    58,
      59,    57,    53,    54,    56,    55,    49,    50,     0,     0,
      34,     0,     0,     0,     0,     0,    60,     0,     0,    32,
       0,    35,    67,    69,    48,    73,     0,    52,    33,     0,
      62,     0,    74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    30,    36,    31,    60,    73,    99,
      37,   125,    90,   101,    91,    32,   126,   245,   214,   246,
     249
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -128
static const yytype_int16 yypact[] =
{
       3,     9,    39,    17,    51,    27,  -128,    37,    38,    15,
      80,    81,    88,   102,    33,  -128,    92,    98,    99,   175,
     175,   156,    85,   100,   101,   113,  -128,  -128,   147,  -128,
     124,   175,   125,   124,   175,     5,   158,   124,   148,   128,
     129,    23,   174,   173,  -128,    65,   179,   141,  -128,    76,
    -128,  -128,   156,   192,   193,   194,   138,  -128,  -128,  -128,
     172,  -128,  -128,  -128,  -128,    18,   198,   163,   170,   171,
     182,   183,  -128,   197,  -128,   215,  -128,   211,   229,   230,
     231,   232,     8,  -128,   234,   235,   236,   237,    77,  -128,
     242,   243,   212,   213,   214,   218,   219,   220,   221,   250,
    -128,   257,  -128,   263,   270,   271,   272,   273,    95,    55,
     274,   175,   275,   276,   279,   280,   289,   290,   291,    71,
     277,   292,   297,    41,    71,   264,    71,    55,  -128,    71,
      71,    71,    71,    71,    71,    71,    41,   294,    79,    79,
      79,    79,    79,   266,    79,  -128,    71,   269,   299,   306,
     307,   309,   312,   313,    86,  -128,    79,  -128,  -128,    79,
    -128,    -1,  -128,  -128,   112,   126,   140,   188,   208,    79,
     228,   285,    79,    90,   315,   318,   319,   327,   329,   330,
     332,   154,   362,   311,  -128,    71,    79,    82,    79,    79,
      79,    79,    79,    79,    79,    71,   326,   323,  -128,   248,
     334,    79,   268,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,    79,   340,   314,   288,  -128,   343,   362,
     362,   362,   362,   362,   362,   362,  -128,  -128,    79,   346,
    -128,   308,   347,   328,   352,    71,  -128,    79,   348,  -128,
     349,  -128,  -128,  -128,  -128,   168,   356,  -128,  -128,   353,
    -128,    79,  -128
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,  -128,  -128,   -20,    -4,  -128,  -128,  -128,   262,
    -128,   -81,   253,  -128,  -128,   -25,  -127,  -119,  -128,   116,
    -128
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -76
static const yytype_int16 yytable[] =
{
      33,    35,   148,   149,   150,   151,   152,   153,   154,    47,
       4,    44,   183,    89,    48,    -2,    15,    -3,     7,   164,
     165,   166,   167,   168,    55,   170,    43,    74,    11,    46,
       1,    49,    65,    51,    20,    12,    34,   181,   137,     6,
     182,    21,   184,   143,     8,   145,   147,   141,    66,    34,
     199,    26,     5,   202,    27,    28,    29,    92,   215,    10,
     142,    75,    22,   119,    56,   171,    59,   216,   226,   219,
     220,   221,   222,   223,   224,   225,   -27,    63,    97,   119,
      13,    14,   231,   156,    98,    64,    92,   179,   120,   124,
     121,   203,   157,   158,   233,   180,   117,   122,   123,   204,
     118,    27,    28,    29,   120,   159,   121,   146,   244,   238,
      19,    16,    17,   122,   136,   160,   161,   185,   186,    18,
      23,   217,   162,   163,   187,   218,    24,    25,    38,   188,
     189,   195,   186,   190,   191,   192,   193,   194,   187,    70,
      39,    40,    71,   188,   189,   196,   186,   190,   191,   192,
     193,   194,   187,    41,    42,    34,    52,   188,   189,   212,
     186,   190,   191,   192,   193,   194,   187,    50,    45,    53,
      54,   188,   189,   -75,   186,   190,   191,   192,   193,   194,
     187,    57,    58,    72,    62,   188,   189,    34,    61,   190,
     191,   192,   193,   194,   186,   197,    67,    68,    69,    26,
     187,    82,    27,    28,    29,   188,   189,    76,    77,   190,
     191,   192,   193,   194,   186,    78,    79,    84,    26,   198,
     187,    27,    28,    29,    83,   188,   189,    80,    81,   190,
     191,   192,   193,   194,   186,    85,    86,    87,    88,   200,
     187,    93,    94,    95,    96,   188,   189,   100,   -40,   190,
     191,   192,   193,   194,   186,   102,   103,   104,   109,   229,
     187,   105,   106,   107,   108,   188,   189,   111,   112,   190,
     191,   192,   193,   194,   186,   113,   114,   115,   116,   232,
     187,   138,   127,   129,   130,   188,   189,   131,   132,   190,
     191,   192,   193,   194,   186,   236,   139,   133,   134,   135,
     187,   140,   144,   155,   169,   188,   189,   172,   173,   190,
     191,   192,   193,   194,   186,   174,   175,   213,   176,   240,
     187,   177,   178,   201,   205,   188,   189,   206,   207,   190,
     191,   192,   193,   194,   186,   242,   208,   227,   209,   210,
     187,   211,   228,   230,   234,   188,   189,   237,   235,   190,
     191,   192,   193,   194,   186,   239,   241,   243,   248,   247,
     187,   250,   110,   251,   128,   188,   189,   252,   186,   190,
     191,   192,   193,   194,   187,     0,     0,     0,     0,   188,
     189,     0,     0,   190,   191,   192,   193,   194
};

static const yytype_int16 yycheck[] =
{
      20,    21,   129,   130,   131,   132,   133,   134,   135,    34,
       1,    31,    13,     5,     9,     0,     1,     0,     1,   138,
     139,   140,   141,   142,     1,   144,    30,     9,     1,    33,
      27,    35,    52,    37,     1,     8,    31,   156,   119,     0,
     159,     8,    43,   124,    27,   126,   127,     6,    52,    31,
     169,    43,    43,   172,    46,    47,    48,    82,   185,     8,
      19,    65,    29,     8,    41,   146,     1,   186,   195,   188,
     189,   190,   191,   192,   193,   194,    11,     1,     1,     8,
      43,    43,   201,     4,     7,     9,   111,     1,    33,   109,
      35,     1,    13,    14,   213,     9,     1,    42,    43,     9,
       5,    46,    47,    48,    33,    26,    35,   127,   235,   228,
       8,    31,    31,    42,    43,    36,    37,     5,     6,    31,
      28,    39,    43,    44,    12,    43,    28,    28,    43,    17,
      18,     5,     6,    21,    22,    23,    24,    25,    12,     1,
      40,    40,     4,    17,    18,     5,     6,    21,    22,    23,
      24,    25,    12,    40,     7,    31,     8,    17,    18,     5,
       6,    21,    22,    23,    24,    25,    12,     9,    43,    41,
      41,    17,    18,     5,     6,    21,    22,    23,    24,    25,
      12,     7,     9,    11,    43,    17,    18,    31,     9,    21,
      22,    23,    24,    25,     6,     7,     4,     4,     4,    43,
      12,     4,    46,    47,    48,    17,    18,     9,    45,    21,
      22,    23,    24,    25,     6,    45,    45,     6,    43,    11,
      12,    46,    47,    48,     9,    17,    18,    45,    45,    21,
      22,    23,    24,    25,     6,     6,     6,     6,     6,    11,
      12,     7,     7,     7,     7,    17,    18,     5,     5,    21,
      22,    23,    24,    25,     6,    43,    43,    43,     8,    11,
      12,    43,    43,    43,    43,    17,    18,    10,     5,    21,
      22,    23,    24,    25,     6,     5,     5,     5,     5,    11,
      12,     4,     8,     8,     8,    17,    18,     8,     8,    21,
      22,    23,    24,    25,     6,     7,     4,     8,     8,     8,
      12,     4,    38,     9,    38,    17,    18,    38,     9,    21,
      22,    23,    24,    25,     6,     9,     9,     6,     9,    11,
      12,     9,     9,    38,     9,    17,    18,     9,     9,    21,
      22,    23,    24,    25,     6,     7,     9,    11,     9,     9,
      12,     9,    19,     9,     4,    17,    18,     4,    34,    21,
      22,    23,    24,    25,     6,     9,     9,     5,     9,    11,
      12,     5,   100,    10,   111,    17,    18,   251,     6,    21,
      22,    23,    24,    25,    12,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    21,    22,    23,    24,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    50,    51,     1,    43,     0,     1,    27,    52,
       8,     1,     8,    43,    43,     1,    31,    31,    31,     8,
       1,     8,    29,    28,    28,    28,    43,    46,    47,    48,
      53,    55,    64,    53,    31,    53,    54,    59,    43,    40,
      40,    40,     7,    54,    53,    43,    54,    64,     9,    54,
       9,    54,     8,    41,    41,     1,    41,     7,     9,     1,
      56,     9,    43,     1,     9,    53,    54,     4,     4,     4,
       1,     4,    11,    57,     9,    54,     9,    45,    45,    45,
      45,    45,     4,     9,     6,     6,     6,     6,     6,     5,
      61,    63,    64,     7,     7,     7,     7,     1,     7,    58,
       5,    62,    43,    43,    43,    43,    43,    43,    43,     8,
      58,    10,     5,     5,     5,     5,     5,     1,     5,     8,
      33,    35,    42,    43,    53,    60,    65,     8,    61,     8,
       8,     8,     8,     8,     8,     8,    43,    60,     4,     4,
       4,     6,    19,    60,    38,    60,    53,    60,    65,    65,
      65,    65,    65,    65,    65,     9,     4,    13,    14,    26,
      36,    37,    43,    44,    66,    66,    66,    66,    66,    38,
      66,    60,    38,     9,     9,     9,     9,     9,     9,     1,
       9,    66,    66,    13,    43,     5,     6,    12,    17,    18,
      21,    22,    23,    24,    25,     5,     5,     7,    11,    66,
      11,    38,    66,     1,     9,     9,     9,     9,     9,     9,
       9,     9,     5,     6,    67,    65,    66,    39,    43,    66,
      66,    66,    66,    66,    66,    66,    65,    11,    19,    11,
       9,    66,    11,    66,     4,    34,     7,     4,    66,     9,
      11,     9,     7,     5,    65,    66,    68,    11,     9,    69,
       5,    10,    68
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 70 "SyntaxicAnalyser.y"
    {checkIdDeclaredIsUsed();;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 71 "SyntaxicAnalyser.y"
    {checkIdDeclaredIsUsed();;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 72 "SyntaxicAnalyser.y"
    {yyerror ("Detection des declaration invalid"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 75 "SyntaxicAnalyser.y"
    {yyerror (" invalid declaration : class name not found"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '{' expected but not found"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 77 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '(' expected but not found"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 78 "SyntaxicAnalyser.y"
    {yyerror (" invalid declaration : class main not found"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 79 "SyntaxicAnalyser.y"
    {yyerror (" invalid declaration : ']' expected but not found"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 80 "SyntaxicAnalyser.y"
    {yyerror (" invalid declaration : ')' expected but not found"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 81 "SyntaxicAnalyser.y"
    {yyerror (" invalid declaration : '}' expected but not found"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 82 "SyntaxicAnalyser.y"
    {yyerror (" invalid declaration :'}' expected but not found"); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 90 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '{' expect but not found"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 91 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '}' expect but not found"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 92 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : keyword class not found "); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 100 "SyntaxicAnalyser.y"
    {checkIdExisted(nom);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 101 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ';' expect but not found"); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 104 "SyntaxicAnalyser.y"
    {
                            if( chercher(nom, table) ){
                                yyerror("The procedure is Already defined");
                            }else{
                                NODE g_noeudMethod = create(nom, NODE_TYPE_UNKNOWN, procedure, NULL);
                                table = insert(g_noeudMethod, table);
                            }
                            g_IfProcParameters = 1;
                        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 114 "SyntaxicAnalyser.y"
    { g_IfProc = 1; 
						    g_noeudProc->nbParam = g_nbParam;
                            g_nbParam = 0;
						;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 119 "SyntaxicAnalyser.y"
    {checkIdDeclaredIsUsed();;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 120 "SyntaxicAnalyser.y"
    {checkIdDeclaredIsUsed();;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 121 "SyntaxicAnalyser.y"
    {checkIdDeclaredIsUsed();;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 122 "SyntaxicAnalyser.y"
    {checkIdDeclaredIsUsed();;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 127 "SyntaxicAnalyser.y"
    {g_nbParam++;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 130 "SyntaxicAnalyser.y"
    {checkIdExisted(nom);
                            ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 133 "SyntaxicAnalyser.y"
    { g_type = tInt; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 134 "SyntaxicAnalyser.y"
    { g_type = tBool; ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 159 "SyntaxicAnalyser.y"
    { checkIdDeclared (nom);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 162 "SyntaxicAnalyser.y"
    { checkIdDeclared (nom);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 168 "SyntaxicAnalyser.y"
    {
							g_nbParam ++;
						;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 171 "SyntaxicAnalyser.y"
    {
							g_nbParam ++;
						;}
    break;



/* Line 1455 of yacc.c  */
#line 1833 "SyntaxicAnalyser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 177 "SyntaxicAnalyser.y"
 



int yyerror(char const *msg) {
       
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
	
	
}

extern FILE *yyin;

void Begin()
{
	//initialisations
    //contient tous les variables : table de symboles
	table = NULL;

    //contient les variables locale : scope methode
	table_local = NULL;

	g_type = NODE_TYPE_UNKNOWN;
    // nombre de parametres de la methode
	g_nbParam = 0;
    
    //il s'agit d'une methode
	g_IfProc = 0 ;
    
    // la methode a des arguments
    g_IfProcParameters = 0 ;
    
}

void End()
{
	destructSymbolsTable(table);
}


int main()
{
	Begin();
	yyparse();
	End();
    return 1;
}

int yywrap()
{
	return(1);
}
