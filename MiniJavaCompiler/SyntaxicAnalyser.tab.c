
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

    char nom[256];

	int yylex(void);
	extern int yylineno;
	extern int i;
    extern int j;
	void yyerror(const char *str);
	void syntaxerror (const char *str);
	void Begin();
    void End();


/* Line 189 of yacc.c  */
#line 92 "SyntaxicAnalyser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     IDENTIFIER = 258,
     TYPE_INT = 259,
     TYPE_BOOLEAN = 260,
     TYPE_STRING = 261,
     BOOLEAN_LITERAL = 262,
     INTEGER_LITERAL = 263,
     STRING_LITERAL = 264,
     KEYWORD_CLASS = 265,
     KEYWORD_PUBLIC = 266,
     KEYWORD_MAIN = 267,
     KEYWORD_EXTENDS = 268,
     KEYWORD_RETURN = 269,
     KEYWORD_IF = 270,
     KEYWORD_ELSE = 271,
     KEYWORD_WHILE = 272,
     KEYWORD_PRINT = 273,
     KEYWORD_LENGTH = 274,
     KEYWORD_THIS = 275,
     KEYWORD_NEW = 276,
     PARENTHESE_OPEN = 277,
     PARENTHESE_CLOSE = 278,
     BRACKET_OPEN = 279,
     BRACKET_CLOSE = 280,
     BRACE_OPEN = 281,
     BRACE_CLOSE = 282,
     OP_AFFECT = 283,
     OP_AND = 284,
     OP_LESS = 285,
     OP_ADD = 286,
     OP_SUBSTRACT = 287,
     OP_MULTIPLY = 288,
     OP_NOT = 289,
     SEMI_COLON = 290,
     DOT = 291,
     COMMA = 292
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
#line 171 "SyntaxicAnalyser.tab.c"

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   556

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNRULES -- Number of states.  */
#define YYNSTATES  343

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

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
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    21,    24,    25,
      26,    37,    47,    56,    57,    58,    59,    70,    73,    74,
      78,    86,    94,   102,   108,   114,   117,   120,   123,   124,
     125,   129,   132,   133,   138,   140,   141,   145,   148,   151,
     154,   157,   158,   162,   166,   167,   168,   182,   195,   208,
     221,   225,   227,   229,   231,   235,   239,   243,   246,   248,
     249,   253,   255,   263,   271,   279,   285,   291,   297,   301,
     307,   313,   317,   323,   329,   335,   340,   345,   350,   355,
     363,   371,   379,   387,   395,   398,   401,   404,   407,   410,
     417,   424,   431,   438,   444,   450,   456,   462,   469,   476,
     483,   490,   494,   499,   504,   509,   513,   518,   523,   527,
     532,   533,   540,   546,   552,   553,   559,   564,   569,   570,
     573,   574,   579,   581,   585,   587,   589,   591,   593,   595,
     597,   599
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    40,    48,    -1,     1,    48,    -1,     1,
      40,    48,    -1,    40,     1,    48,    -1,    40,    48,     1,
      -1,    41,    44,    -1,    -1,    -1,    50,    26,    11,    12,
      42,    22,     6,    43,    24,    25,    -1,    50,    26,     1,
      11,    12,    22,     6,    24,    25,    -1,    50,    26,     1,
      12,    22,     6,    24,    25,    -1,    -1,    -1,    -1,     3,
      45,    23,    46,    26,    62,    27,    47,    57,    27,    -1,
      49,    48,    -1,    -1,    49,     1,    48,    -1,    50,    13,
      72,    26,    51,    57,    27,    -1,    50,    13,     1,    26,
      51,    57,    27,    -1,    50,    13,    72,    26,    51,    57,
       1,    -1,    50,    26,    51,    57,    27,    -1,    50,    26,
      51,    57,     1,    -1,    10,    72,    -1,     1,    72,    -1,
      52,    51,    -1,    -1,    -1,    56,    53,    35,    -1,    56,
       1,    -1,    -1,    56,    55,    37,    54,    -1,    56,    -1,
      -1,    56,     1,    54,    -1,    61,    72,    -1,     1,    72,
      -1,    61,     1,    -1,    58,    57,    -1,    -1,    58,     1,
      57,    -1,    58,    57,     1,    -1,    -1,    -1,    11,    56,
      59,    22,    54,    23,    60,    26,    62,    14,    64,    35,
      27,    -1,     1,    11,    56,    22,    54,    23,    26,    62,
      14,    64,    35,    27,    -1,    11,     1,    72,    22,    54,
      23,    26,    62,    14,    64,    35,    27,    -1,    11,    61,
       1,    22,    54,    23,    26,    62,    14,    64,    35,    27,
      -1,     4,    24,    25,    -1,     5,    -1,     4,    -1,     6,
      -1,     4,    24,     1,    -1,     1,    24,    25,    -1,     4,
       1,    25,    -1,    63,    62,    -1,    63,    -1,    -1,    26,
      62,    27,    -1,    52,    -1,    15,    22,    64,    23,    62,
      16,    62,    -1,    15,     1,    64,    23,    62,    16,    62,
      -1,    15,    22,    64,     1,    63,    16,    62,    -1,    15,
       1,    62,    16,    62,    -1,    15,    22,    64,    23,    62,
      -1,    15,    22,    64,     1,    62,    -1,    15,     1,    62,
      -1,    17,    22,    64,    23,    62,    -1,    17,    22,    64,
       1,    62,    -1,    17,     1,    63,    -1,    18,    22,    64,
      23,    35,    -1,    18,    22,    64,    23,     1,    -1,    18,
      22,    64,     1,    35,    -1,    74,    28,    64,    35,    -1,
      74,    28,    64,     1,    -1,    74,    28,     1,    35,    -1,
      74,     1,    64,    35,    -1,    74,    24,    64,    25,    28,
      64,    35,    -1,    74,     1,    64,    25,    28,    64,    35,
      -1,    74,    24,    64,     1,    28,    64,    35,    -1,    74,
      24,    64,    25,     1,    64,    35,    -1,    74,    24,    64,
      25,    28,    64,     1,    -1,     8,    65,    -1,     7,    65,
      -1,     9,    65,    -1,    73,    65,    -1,    20,    65,    -1,
      21,     4,    24,    64,    25,    65,    -1,    21,     4,     1,
      64,    25,    65,    -1,    21,     1,    24,    64,    25,    65,
      -1,    21,     4,    24,    64,     1,    65,    -1,    21,    72,
      22,    23,    65,    -1,    21,     1,    22,    23,    65,    -1,
      21,    72,     1,    23,    65,    -1,    21,    72,    22,     1,
      65,    -1,    21,    72,    22,    69,    23,    65,    -1,    21,
       1,    22,    69,    23,    65,    -1,    21,    72,     1,    69,
      23,    65,    -1,    21,    72,    22,    69,     1,    65,    -1,
      34,    64,    65,    -1,    22,    64,    23,    65,    -1,     1,
      64,    23,    65,    -1,    22,    64,     1,    65,    -1,    71,
      64,    65,    -1,    24,    64,    25,    65,    -1,    24,    64,
       1,    65,    -1,    36,    19,    65,    -1,    36,     1,    19,
      65,    -1,    -1,    68,    22,    69,    23,    66,    65,    -1,
      68,     1,    69,    23,    65,    -1,    68,    22,    69,     1,
      65,    -1,    -1,    68,    22,    23,    67,    65,    -1,    68,
       1,    23,    65,    -1,    68,    22,     1,    65,    -1,    -1,
      36,    72,    -1,    -1,    64,    70,    37,    69,    -1,    64,
      -1,    64,     1,    69,    -1,    31,    -1,    29,    -1,    30,
      -1,    33,    -1,    32,    -1,     3,    -1,     3,    -1,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    64,    64,    65,    66,    67,    68,    70,    72,    72,
      72,    73,    74,    76,    76,    76,    76,    78,    79,    80,
      82,    83,    84,    85,    86,    88,    89,    91,    92,    94,
      94,    95,    97,    97,    98,    99,   100,   102,   103,   104,
     106,   107,   108,   109,   111,   111,   111,   112,   113,   114,
     117,   118,   119,   120,   121,   122,   123,   125,   126,   127,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   176,   177,   178,   179,   180,
     181,   181,   182,   183,   184,   184,   185,   186,   187,   189,
     191,   191,   192,   193,   195,   196,   197,   198,   199,   201,
     203,   205
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_INT", "TYPE_BOOLEAN",
  "TYPE_STRING", "BOOLEAN_LITERAL", "INTEGER_LITERAL", "STRING_LITERAL",
  "KEYWORD_CLASS", "KEYWORD_PUBLIC", "KEYWORD_MAIN", "KEYWORD_EXTENDS",
  "KEYWORD_RETURN", "KEYWORD_IF", "KEYWORD_ELSE", "KEYWORD_WHILE",
  "KEYWORD_PRINT", "KEYWORD_LENGTH", "KEYWORD_THIS", "KEYWORD_NEW",
  "PARENTHESE_OPEN", "PARENTHESE_CLOSE", "BRACKET_OPEN", "BRACKET_CLOSE",
  "BRACE_OPEN", "BRACE_CLOSE", "OP_AFFECT", "OP_AND", "OP_LESS", "OP_ADD",
  "OP_SUBSTRACT", "OP_MULTIPLY", "OP_NOT", "SEMI_COLON", "DOT", "COMMA",
  "$accept", "Program", "MainClass", "MainHead", "$@1", "$@2", "MainBody",
  "$@3", "$@4", "$@5", "ClassDeclarationS", "ClassDeclaration",
  "ClassHead", "VarDeclarationS", "VarDeclaration", "$@6", "VariableS",
  "$@7", "Variable", "MethodDeclarationS", "MethodDeclaration", "$@8",
  "$@9", "Type", "StatementS", "Statement", "Expression", "ExpressionComp",
  "$@10", "$@11", "MethodCall", "ExpressionS", "$@12", "Operator",
  "Identifier", "Identifierexp", "Identifieraff", 0
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
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    39,    39,    39,    39,    40,    42,    43,
      41,    41,    41,    45,    46,    47,    44,    48,    48,    48,
      49,    49,    49,    49,    49,    50,    50,    51,    51,    53,
      52,    52,    55,    54,    54,    54,    54,    56,    56,    56,
      57,    57,    57,    57,    59,    60,    58,    58,    58,    58,
      61,    61,    61,    61,    61,    61,    61,    62,    62,    62,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    65,    65,    65,
      66,    65,    65,    65,    67,    65,    65,    65,    65,    68,
      70,    69,    69,    69,    71,    71,    71,    71,    71,    72,
      73,    74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     3,     2,     0,     0,
      10,     9,     8,     0,     0,     0,    10,     2,     0,     3,
       7,     7,     7,     5,     5,     2,     2,     2,     0,     0,
       3,     2,     0,     4,     1,     0,     3,     2,     2,     2,
       2,     0,     3,     3,     0,     0,    13,    12,    12,    12,
       3,     1,     1,     1,     3,     3,     3,     2,     1,     0,
       3,     1,     7,     7,     7,     5,     5,     5,     3,     5,
       5,     3,     5,     5,     5,     4,     4,     4,     4,     7,
       7,     7,     7,     7,     2,     2,     2,     2,     2,     6,
       6,     6,     6,     5,     5,     5,     5,     6,     6,     6,
       6,     3,     4,     4,     4,     3,     4,     4,     3,     4,
       0,     6,     5,     5,     0,     5,     4,     4,     0,     2,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       3,     0,     0,    26,    25,     1,     0,     0,     0,    13,
       7,     0,     4,     0,    17,     0,     0,     5,     6,     0,
       0,     0,     0,    19,     0,     0,     0,     0,    51,    53,
       0,     0,     0,     0,     0,    14,     0,     0,     8,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    27,
      31,     0,    39,    37,     0,     0,     0,     0,     0,     0,
      55,    56,    54,    50,     0,     0,    44,     0,    24,    23,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,   131,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,     9,    21,    22,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    57,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,   130,   118,   118,   118,
     118,     0,     0,     0,    68,     0,   118,     0,   130,     0,
      71,     0,     0,    60,     0,     0,     0,     0,     0,    11,
       0,     0,     0,     0,     0,    45,     0,   130,     0,     0,
     125,   126,   124,   128,   127,     0,    85,     0,     0,    84,
      86,    88,     0,     0,     0,     0,   118,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,    77,    76,    75,    10,     0,    36,     0,     0,     0,
       0,   118,     0,     0,   118,   119,     0,     0,   118,     0,
       0,     0,     0,     0,     0,   118,   118,   101,    65,     0,
      67,     0,    66,    70,    69,    74,    73,    72,    16,     0,
       0,     0,     0,     0,    33,     0,     0,     0,   103,   118,
     118,   118,   108,   118,     0,     0,     0,   114,     0,   105,
     118,     0,     0,     0,     0,   118,     0,     0,   118,     0,
     104,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,   106,   109,   116,     0,     0,   118,
     117,   118,   118,   110,    94,   118,   118,   118,   118,   118,
      95,   118,    96,    93,   118,   118,    63,    64,    62,    80,
      81,    82,    83,    79,     0,     0,     0,     0,   123,     0,
     112,   115,   113,   118,    98,    91,    90,    92,    89,    99,
     100,    97,     0,     0,     0,     0,   121,   111,    47,    48,
       0,    49,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    67,   129,    20,    30,    64,   154,
      10,    11,    18,    40,   101,    61,   130,   163,    42,    57,
      58,    91,   209,    43,   123,   103,   254,   176,   323,   291,
     177,   255,   288,   178,    13,   146,   104
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -204
static const yytype_int16 yypact[] =
{
     232,   236,     9,    93,   335,    14,    94,     9,  -204,   358,
    -204,   369,   123,  -204,  -204,  -204,   236,   189,   171,  -204,
    -204,   227,  -204,   236,  -204,    87,   142,  -204,  -204,   187,
     110,   260,   133,  -204,   194,   209,   263,   175,  -204,  -204,
      71,   187,    12,   264,     4,  -204,   228,   258,  -204,   187,
     187,   176,  -204,   252,    78,   289,   377,    34,    80,  -204,
    -204,   274,  -204,  -204,   285,   295,   316,   304,    71,    71,
    -204,  -204,  -204,  -204,   411,     4,  -204,   275,  -204,  -204,
     107,    62,  -204,   490,   324,   310,   340,   329,    73,   338,
     368,   370,   371,   377,  -204,  -204,  -204,    64,   100,   372,
     490,  -204,   353,   430,    31,   376,   378,  -204,  -204,  -204,
    -204,   343,   343,   343,   343,   338,   298,   398,   526,   398,
     398,   375,  -204,  -204,   398,   398,   420,   379,  -204,   389,
     391,    17,   401,   402,   403,   210,    55,   518,   518,   518,
     518,   255,   398,   398,   414,   415,   518,   398,  -204,    69,
    -204,   127,   138,  -204,    71,   238,    86,   151,    29,  -204,
     412,   413,   343,   406,   423,  -204,   424,    36,   428,   398,
    -204,  -204,  -204,  -204,  -204,   224,  -204,   155,   398,  -204,
    -204,  -204,   286,    56,   182,   156,   518,   457,   496,  -204,
     457,   457,   457,   457,   417,    38,   426,   427,  -204,   431,
      57,  -204,  -204,  -204,  -204,   520,  -204,   343,   520,   439,
     520,   518,    96,   451,   518,  -204,   320,   330,   518,   354,
     398,   398,   398,   364,   388,   518,   518,  -204,  -204,   460,
    -204,   463,   466,  -204,  -204,  -204,  -204,  -204,  -204,   398,
     398,   398,   398,   471,  -204,   472,   520,   473,  -204,   518,
     518,   518,  -204,   518,    23,   465,   261,  -204,   164,  -204,
     518,   469,   478,   479,   130,   518,   475,   261,   518,   179,
    -204,  -204,   457,   457,   457,   474,   480,   483,    41,   398,
     398,   492,   398,  -204,  -204,  -204,  -204,   398,   482,   518,
    -204,   518,   518,  -204,  -204,   518,   518,   518,   518,   518,
    -204,   518,  -204,  -204,   518,   518,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,   485,   493,   398,   498,  -204,   398,
    -204,  -204,  -204,   518,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,   509,   512,   505,   528,  -204,  -204,  -204,  -204,
     529,  -204,  -204
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,   544,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
     199,  -204,   288,    88,   200,  -204,   -63,  -204,   -45,   -35,
    -204,  -204,  -204,   -41,   -78,  -112,  -116,   -44,  -204,  -204,
    -204,  -203,  -204,  -204,     0,  -204,  -204
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -132
static const yytype_int16 yytable[] =
{
     145,   149,    14,   151,   152,   102,   150,     8,   155,   156,
     158,    76,     8,    60,   258,    77,   261,    19,   162,   168,
     266,   269,   121,    81,   287,    35,   185,   186,    51,    89,
     202,   168,   124,    87,    88,    78,    52,  -129,   144,   236,
     -34,   168,   312,    63,    52,    94,  -122,   -29,   115,   132,
     133,   134,    77,   212,   -32,   125,  -131,   221,   241,   126,
    -120,    79,   218,    95,   203,   116,   131,   131,   131,   131,
     190,  -129,    55,   237,   109,    90,   313,    63,   231,    72,
     222,    80,    56,  -131,   318,   242,   117,   199,    34,   -40,
       8,    56,   191,    15,   179,   180,   181,   249,   -41,   206,
     110,   118,   189,    73,   262,   263,   264,   -41,    55,   228,
     229,   200,   230,   232,   233,   234,   336,   131,    93,   196,
      21,   250,   119,   275,   276,   277,   278,   243,   192,    59,
     245,   298,   247,    45,   -41,    52,    25,    68,    69,   194,
     168,   184,   227,    36,   244,    48,    37,    38,    39,    26,
     193,   168,   147,    32,   148,   299,   216,   225,   137,   138,
     139,   195,   131,   314,   315,   292,   317,   248,   281,   -28,
     252,   140,   141,   142,   259,   215,    53,   217,   -52,   226,
     304,   270,   271,   223,    25,   143,   201,   293,    44,    -2,
      28,    37,    38,    39,   306,   307,   308,    29,   -28,    54,
     334,    70,   305,    17,   224,   283,   284,   285,    22,   286,
      24,   147,   290,   167,   -28,    27,   294,   137,   138,   139,
      49,   300,    33,   302,   303,   213,    41,     8,    31,    41,
     140,   141,   142,     1,    51,    50,   -18,     7,    32,     8,
      65,    41,     2,   214,   143,   320,     2,   321,   322,    41,
      41,   324,   325,   326,   327,   328,   182,   329,     8,   183,
     330,   331,   147,   197,   148,    62,     8,     8,   137,   138,
     139,    46,    47,   198,    46,    47,    92,    71,     8,   337,
      66,   140,   141,   142,  -118,   169,  -118,    51,     6,    12,
     170,   171,   172,   173,   174,   143,  -118,   175,  -118,   135,
      74,   136,    37,    38,    39,   137,   138,   139,   219,    82,
     220,    83,   -59,    97,   -59,    98,    99,    84,   140,   141,
     142,   147,    85,   148,   100,   -59,    86,   137,   138,   139,
     105,   256,   143,   148,   106,   -18,    16,   137,   138,   139,
     140,   141,   142,   253,    44,     2,   107,    37,    38,    39,
     140,   141,   142,   257,   143,   147,   108,   148,   -18,     7,
     111,   137,   138,   139,   143,   147,   -35,   148,     2,   -18,
      23,   137,   138,   139,   140,   141,   142,   260,    75,     2,
     122,    37,    38,    39,   140,   141,   142,   265,   143,   267,
     112,   148,   113,   114,   120,   137,   138,   139,   143,   147,
     127,   148,   153,   128,   159,   137,   138,   139,   140,   141,
     142,   268,    44,   160,   161,    37,    38,    39,   140,   141,
     142,   157,   143,   148,   164,   165,   166,   137,   138,   139,
     187,    44,   143,    96,    37,    38,    39,   204,   188,   205,
     140,   141,   142,   207,   -58,    97,   -58,    98,    99,   208,
     210,   211,   235,   238,   143,   239,   100,   -58,    44,   240,
      96,    37,    38,    39,    44,   246,    96,    37,    38,    39,
     251,   -59,    97,   -59,    98,    99,   272,   -58,    97,   273,
      98,    99,   274,   100,   -59,   279,   280,   282,   289,   100,
     -58,    44,   295,    96,    37,    38,    39,    44,   301,    96,
      37,    38,    39,   296,   297,    97,   316,    98,    99,   309,
       0,    97,   -59,    98,    99,   310,   100,   -59,   311,   319,
     332,    44,   100,    96,    37,    38,    39,    44,   333,    96,
      37,    38,    39,   335,   -59,    97,   338,    98,    99,   339,
     340,    97,   169,    98,    99,     9,   100,   170,   171,   172,
     173,   174,   100,     0,   175,   341,   342
};

static const yytype_int16 yycheck[] =
{
     116,   117,     2,   119,   120,    83,   118,     3,   124,   125,
     126,    56,     3,     1,   217,    56,   219,     3,     1,   135,
     223,   224,   100,    58,     1,    25,   142,   143,    24,    74,
       1,   147,     1,    68,    69,     1,    36,     1,   116,     1,
      23,   157,     1,    43,    44,    80,    23,    35,    93,   112,
     113,   114,    93,   169,    37,    24,     1,     1,     1,    28,
      37,    27,   178,     1,    35,     1,   111,   112,   113,   114,
       1,    35,     1,    35,     1,    75,    35,    77,   190,     1,
      24,     1,    11,    28,   287,    28,    22,     1,     1,    27,
       3,    11,    23,     0,   138,   139,   140,     1,    27,   162,
      27,     1,   146,    25,   220,   221,   222,    27,     1,   187,
     188,    25,   190,   191,   192,   193,   319,   162,    11,   154,
      26,    25,    22,   239,   240,   241,   242,   205,     1,    41,
     208,     1,   210,    23,    27,   135,    13,    49,    50,     1,
     256,   141,   186,     1,   207,    12,     4,     5,     6,    26,
      23,   267,     1,    11,     3,    25,     1,     1,     7,     8,
       9,    23,   207,   279,   280,     1,   282,   211,   246,    27,
     214,    20,    21,    22,   218,   175,     1,    22,     3,    23,
       1,   225,   226,     1,    13,    34,    35,    23,     1,     0,
       1,     4,     5,     6,   272,   273,   274,    26,    11,    24,
     316,    25,    23,     4,    22,   249,   250,   251,     9,   253,
      11,     1,   256,     3,    27,    16,   260,     7,     8,     9,
      26,   265,    23,   267,   268,     1,    26,     3,     1,    29,
      20,    21,    22,     1,    24,    26,     0,     1,    11,     3,
      12,    41,    10,    19,    34,   289,    10,   291,   292,    49,
      50,   295,   296,   297,   298,   299,     1,   301,     3,     4,
     304,   305,     1,    25,     3,     1,     3,     3,     7,     8,
       9,    11,    12,    35,    11,    12,     1,    25,     3,   323,
      22,    20,    21,    22,    23,    24,    25,    24,     0,     1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,     1,
      11,     3,     4,     5,     6,     7,     8,     9,    22,    35,
      24,    26,    14,    15,    16,    17,    18,    22,    20,    21,
      22,     1,     6,     3,    26,    27,    22,     7,     8,     9,
       6,     1,    34,     3,    24,     0,     1,     7,     8,     9,
      20,    21,    22,    23,     1,    10,     6,     4,     5,     6,
      20,    21,    22,    23,    34,     1,    27,     3,     0,     1,
      22,     7,     8,     9,    34,     1,    23,     3,    10,     0,
       1,     7,     8,     9,    20,    21,    22,    23,     1,    10,
      27,     4,     5,     6,    20,    21,    22,    23,    34,     1,
      22,     3,    22,    22,    22,     7,     8,     9,    34,     1,
      24,     3,    27,    25,    25,     7,     8,     9,    20,    21,
      22,    23,     1,    24,    23,     4,     5,     6,    20,    21,
      22,     1,    34,     3,    23,    23,    23,     7,     8,     9,
      16,     1,    34,     3,     4,     5,     6,    25,    23,    26,
      20,    21,    22,    37,    14,    15,    16,    17,    18,    26,
      26,    23,    35,    27,    34,    28,    26,    27,     1,    28,
       3,     4,     5,     6,     1,    26,     3,     4,     5,     6,
      19,    14,    15,    16,    17,    18,    16,    14,    15,    16,
      17,    18,    16,    26,    27,    14,    14,    14,    23,    26,
      27,     1,    23,     3,     4,     5,     6,     1,    23,     3,
       4,     5,     6,    25,    25,    15,    14,    17,    18,    35,
      -1,    15,    16,    17,    18,    35,    26,    27,    35,    37,
      35,     1,    26,     3,     4,     5,     6,     1,    35,     3,
       4,     5,     6,    35,    14,    15,    27,    17,    18,    27,
      35,    15,    24,    17,    18,     1,    26,    29,    30,    31,
      32,    33,    26,    -1,    36,    27,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    10,    39,    40,    41,    50,     1,     3,    40,
      48,    49,    50,    72,    72,     0,     1,    48,    50,     3,
      44,    26,    48,     1,    48,    13,    26,    48,     1,    26,
      45,     1,    11,    48,     1,    72,     1,     4,     5,     6,
      51,    52,    56,    61,     1,    23,    11,    12,    12,    26,
      26,    24,    72,     1,    24,     1,    11,    57,    58,    51,
       1,    53,     1,    72,    46,    12,    22,    42,    51,    51,
      25,    25,     1,    25,    11,     1,    56,    61,     1,    27,
       1,    57,    35,    26,    22,     6,    22,    57,    57,    56,
      72,    59,     1,    11,    57,     1,     3,    15,    17,    18,
      26,    52,    62,    63,    74,     6,    24,     6,    27,     1,
      27,    22,    22,    22,    22,    56,     1,    22,     1,    22,
      22,    62,    27,    62,     1,    24,    28,    24,    25,    43,
      54,    56,    54,    54,    54,     1,     3,     7,     8,     9,
      20,    21,    22,    34,    62,    64,    73,     1,     3,    64,
      63,    64,    64,    27,    47,    64,    64,     1,    64,    25,
      24,    23,     1,    55,    23,    23,    23,     3,    64,    24,
      29,    30,    31,    32,    33,    36,    65,    68,    71,    65,
      65,    65,     1,     4,    72,    64,    64,    16,    23,    65,
       1,    23,     1,    23,     1,    23,    57,    25,    35,     1,
      25,    35,     1,    35,    25,    26,    54,    37,    26,    60,
      26,    23,    64,     1,    19,    72,     1,    22,    64,    22,
      24,     1,    24,     1,    22,     1,    23,    65,    62,    62,
      62,    63,    62,    62,    62,    35,     1,    35,    27,    28,
      28,     1,    28,    62,    54,    62,    26,    62,    65,     1,
      25,    19,    65,    23,    64,    69,     1,    23,    69,    65,
      23,    69,    64,    64,    64,    23,    69,     1,    23,    69,
      65,    65,    16,    16,    16,    64,    64,    64,    64,    14,
      14,    62,    14,    65,    65,    65,    65,     1,    70,    23,
      65,    67,     1,    23,    65,    23,    25,    25,     1,    25,
      65,    23,    65,    65,     1,    23,    62,    62,    62,    35,
      35,    35,     1,    35,    64,    64,    14,    64,    69,    37,
      65,    65,    65,    66,    65,    65,    65,    65,    65,    65,
      65,    65,    35,    35,    64,    35,    69,    65,    27,    27,
      35,    27,    27
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
        case 3:

/* Line 1455 of yacc.c  */
#line 65 "SyntaxicAnalyser.y"
    {syntaxerror ("main class missing"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 66 "SyntaxicAnalyser.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 67 "SyntaxicAnalyser.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 68 "SyntaxicAnalyser.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 72 "SyntaxicAnalyser.y"
    { g_type = tVoid; verifierFoncID("main"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 72 "SyntaxicAnalyser.y"
    {g_type = tString;;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 73 "SyntaxicAnalyser.y"
    {syntaxerror ("public keyword missing");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 74 "SyntaxicAnalyser.y"
    {syntaxerror ("public keyword missing");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyser.y"
    { verifierVarID(nom);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyser.y"
    { foncDecEnd(); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyser.y"
    {finFonction();;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyser.y"
    {finClass();;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 80 "SyntaxicAnalyser.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 82 "SyntaxicAnalyser.y"
    {finClass();;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 83 "SyntaxicAnalyser.y"
    {syntaxerror ("parent class identifier missing"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 84 "SyntaxicAnalyser.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 85 "SyntaxicAnalyser.y"
    {finClass();;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 86 "SyntaxicAnalyser.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 88 "SyntaxicAnalyser.y"
    {verifierClassID(nom);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 89 "SyntaxicAnalyser.y"
    {syntaxerror ("class keyword missing"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 94 "SyntaxicAnalyser.y"
    {verifierVarID(nom);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 95 "SyntaxicAnalyser.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 97 "SyntaxicAnalyser.y"
    {verifierVarID(nom);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 98 "SyntaxicAnalyser.y"
    {verifierVarID(nom);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 100 "SyntaxicAnalyser.y"
    {syntaxerror ("comma missing"); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 103 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid type"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 104 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid identifier"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 108 "SyntaxicAnalyser.y"
    {syntaxerror ("code out of method"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 109 "SyntaxicAnalyser.y"
    {syntaxerror ("code out of method"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 111 "SyntaxicAnalyser.y"
    { verifierFoncID(nom); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 111 "SyntaxicAnalyser.y"
    {foncDecEnd();;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 111 "SyntaxicAnalyser.y"
    {finFonction();;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 112 "SyntaxicAnalyser.y"
    {syntaxerror ("public keyword missing"); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 113 "SyntaxicAnalyser.y"
    {syntaxerror ("type missing"); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 114 "SyntaxicAnalyser.y"
    {syntaxerror ("method name missing"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 117 "SyntaxicAnalyser.y"
    { g_type = tInt; ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 118 "SyntaxicAnalyser.y"
    { g_type = tBoolean; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 119 "SyntaxicAnalyser.y"
    { g_type = tInt; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 120 "SyntaxicAnalyser.y"
    { g_type = tString; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 121 "SyntaxicAnalyser.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 122 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid array type"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 123 "SyntaxicAnalyser.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 132 "SyntaxicAnalyser.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 133 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 134 "SyntaxicAnalyser.y"
    {syntaxerror ("if condition missing"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 136 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 137 "SyntaxicAnalyser.y"
    {syntaxerror ("if condition missing"); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 139 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 140 "SyntaxicAnalyser.y"
    {syntaxerror ("while condition missing"); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 142 "SyntaxicAnalyser.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 143 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 145 "SyntaxicAnalyser.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 146 "SyntaxicAnalyser.y"
    {syntaxerror ("second expression missing"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 147 "SyntaxicAnalyser.y"
    {syntaxerror ("'=' expected"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 149 "SyntaxicAnalyser.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 150 "SyntaxicAnalyser.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 151 "SyntaxicAnalyser.y"
    {syntaxerror ("'=' expected"); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 152 "SyntaxicAnalyser.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 160 "SyntaxicAnalyser.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 161 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid array type"); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 162 "SyntaxicAnalyser.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 164 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid identifier"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 165 "SyntaxicAnalyser.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 166 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 168 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid identifier"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 169 "SyntaxicAnalyser.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 170 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 173 "SyntaxicAnalyser.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 174 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 178 "SyntaxicAnalyser.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 180 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid .length"); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 181 "SyntaxicAnalyser.y"
    {foncCallEnd();;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 182 "SyntaxicAnalyser.y"
    {syntaxerror("opening parentheses missing"); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 183 "SyntaxicAnalyser.y"
    {syntaxerror("closing parentheses missing"); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 184 "SyntaxicAnalyser.y"
    {g_nbParam = 0;foncCallEnd();;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 185 "SyntaxicAnalyser.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 186 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 189 "SyntaxicAnalyser.y"
    {verifierFoncIDDeclare(nom);;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 191 "SyntaxicAnalyser.y"
    {g_nbParam ++;;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 192 "SyntaxicAnalyser.y"
    {g_nbParam ++;;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 193 "SyntaxicAnalyser.y"
    {syntaxerror ("comma missing"); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 203 "SyntaxicAnalyser.y"
    {checkID(nom);;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 205 "SyntaxicAnalyser.y"
    {checkIDOnInit(nom);;}
    break;



/* Line 1455 of yacc.c  */
#line 2279 "SyntaxicAnalyser.tab.c"
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
#line 210 "SyntaxicAnalyser.y"



extern FILE *yyin;

int main(int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    Begin();
    yyparse();
    End();
    return 1;
}



void Begin()
{
	table = NULL;
	table_local = NULL;
	table_class = NULL;

	g_type = NODE_TYPE_UNKNOWN;

	g_nbParam = 0;

	g_IfFonc = 0 ;
    g_IfFoncParameters = 0 ;
    g_IfClass = 0 ;
}

void End()
{
    fclose(yyin);
    char c;
    c=' ';
    if(i>1)
        c='s';
    printf("%d error%c found\n",i,c);
    c=' ';
    if(j>0)
        c='s';
    printf("%d warnings %c found\n",j,c);
	

    destructSymbolsTable(table_local);
	destructSymbolsTable(table);
	destructSymbolsTable(table_class);
	exit(0);
}


