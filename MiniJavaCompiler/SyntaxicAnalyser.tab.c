
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
    #include "generator.c"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    char nom[256];
    int numval;
    char nomaff[256];
    char oper[10];
    int indexIf;
    int indexWhile1;
    int indexWhile2;
	int yylex(void);
	extern int yylineno;
	extern int i;
    extern int j;
	void yyerror(const char *str);
	void syntaxerror (const char *str);
	void BeginSemantique();
	void BeginCodeGen();
    void EndSemantique();
    void EndCodeGen();


/* Line 189 of yacc.c  */
#line 100 "SyntaxicAnalyser.tab.c"

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
     OP_ADD = 284,
     OP_SUBSTRACT = 285,
     OP_MULTIPLY = 286,
     OP_NOT = 287,
     LOG_AND = 288,
     LOG_LESS = 289,
     LOG_EQLESS = 290,
     LOG_MORE = 291,
     LOG_EQMORE = 292,
     LOG_EQ = 293,
     LOG_DIF = 294,
     SEMI_COLON = 295,
     DOT = 296,
     COMMA = 297
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
#line 184 "SyntaxicAnalyser.tab.c"

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
#define YYLAST   580

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNRULES -- Number of states.  */
#define YYNSTATES  364

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
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
     249,   253,   257,   261,   263,   264,   265,   279,   287,   295,
     301,   302,   303,   313,   319,   325,   331,   336,   341,   346,
     351,   359,   367,   375,   383,   391,   392,   396,   399,   402,
     405,   408,   415,   422,   429,   436,   442,   448,   454,   460,
     467,   474,   481,   488,   492,   497,   502,   507,   508,   513,
     514,   519,   524,   529,   533,   538,   539,   546,   552,   558,
     559,   565,   570,   575,   576,   579,   580,   585,   587,   591,
     593,   595,   597,   599,   601,   603,   605,   607,   609,   611,
     613,   615
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    45,    53,    -1,     1,    53,    -1,     1,
      45,    53,    -1,    45,     1,    53,    -1,    45,    53,     1,
      -1,    46,    49,    -1,    -1,    -1,    55,    26,    11,    12,
      47,    22,     6,    48,    24,    25,    -1,    55,    26,     1,
      11,    12,    22,     6,    24,    25,    -1,    55,    26,     1,
      12,    22,     6,    24,    25,    -1,    -1,    -1,    -1,     3,
      50,    23,    51,    26,    67,    27,    52,    62,    27,    -1,
      54,    53,    -1,    -1,    54,     1,    53,    -1,    55,    13,
      85,    26,    56,    62,    27,    -1,    55,    13,     1,    26,
      56,    62,    27,    -1,    55,    13,    85,    26,    56,    62,
       1,    -1,    55,    26,    56,    62,    27,    -1,    55,    26,
      56,    62,     1,    -1,    10,    85,    -1,     1,    85,    -1,
      57,    56,    -1,    -1,    -1,    61,    58,    40,    -1,    61,
       1,    -1,    -1,    61,    60,    42,    59,    -1,    61,    -1,
      -1,    61,     1,    59,    -1,    66,    85,    -1,     1,    85,
      -1,    66,     1,    -1,    63,    62,    -1,    -1,    63,     1,
      62,    -1,    63,    62,     1,    -1,    -1,    -1,    11,    61,
      64,    22,    59,    23,    65,    26,    67,    14,    73,    40,
      27,    -1,     1,    11,    61,    22,    59,    23,    26,    67,
      14,    73,    40,    27,    -1,    11,     1,    85,    22,    59,
      23,    26,    67,    14,    73,    40,    27,    -1,    11,    66,
       1,    22,    59,    23,    26,    67,    14,    73,    40,    27,
      -1,     4,    24,    25,    -1,     5,    -1,     4,    -1,     6,
      -1,     4,    24,     1,    -1,     1,    24,    25,    -1,     4,
       1,    25,    -1,    68,    67,    -1,    68,    -1,    -1,    26,
      67,    27,    -1,    26,    67,     1,    -1,     1,    67,    27,
      -1,    57,    -1,    -1,    -1,    15,    22,    73,    23,    69,
      26,    67,    27,    70,    16,    26,    67,    27,    -1,    15,
       1,    73,    23,    67,    16,    67,    -1,    15,    22,    73,
       1,    68,    16,    67,    -1,    15,     1,    67,    16,    67,
      -1,    -1,    -1,    17,    71,    22,    73,    23,    72,    26,
      67,    27,    -1,    18,    22,    73,    23,    40,    -1,    18,
      22,    73,    23,     1,    -1,    18,    22,    73,     1,    40,
      -1,    87,    28,    73,    40,    -1,    87,    28,    73,     1,
      -1,    87,    28,     1,    40,    -1,    87,     1,    73,    40,
      -1,    87,    24,    73,    25,    28,    73,    40,    -1,    87,
       1,    73,    25,    28,    73,    40,    -1,    87,    24,    73,
       1,    28,    73,    40,    -1,    87,    24,    73,    25,     1,
      73,    40,    -1,    87,    24,    73,    25,    28,    73,     1,
      -1,    -1,     8,    74,    75,    -1,     7,    75,    -1,     9,
      75,    -1,    86,    75,    -1,    20,    75,    -1,    21,     4,
      24,    73,    25,    75,    -1,    21,     4,     1,    73,    25,
      75,    -1,    21,     1,    24,    73,    25,    75,    -1,    21,
       4,    24,    73,     1,    75,    -1,    21,    85,    22,    23,
      75,    -1,    21,     1,    22,    23,    75,    -1,    21,    85,
       1,    23,    75,    -1,    21,    85,    22,     1,    75,    -1,
      21,    85,    22,    81,    23,    75,    -1,    21,     1,    22,
      81,    23,    75,    -1,    21,    85,     1,    81,    23,    75,
      -1,    21,    85,    22,    81,     1,    75,    -1,    32,    73,
      75,    -1,    22,    73,    23,    75,    -1,     1,    73,    23,
      75,    -1,    22,    73,     1,    75,    -1,    -1,    83,    73,
      76,    75,    -1,    -1,    84,    73,    77,    75,    -1,    24,
      73,    25,    75,    -1,    24,    73,     1,    75,    -1,    41,
      19,    75,    -1,    41,     1,    19,    75,    -1,    -1,    80,
      22,    81,    23,    78,    75,    -1,    80,     1,    81,    23,
      75,    -1,    80,    22,    81,     1,    75,    -1,    -1,    80,
      22,    23,    79,    75,    -1,    80,     1,    23,    75,    -1,
      80,    22,     1,    75,    -1,    -1,    41,    85,    -1,    -1,
      73,    82,    42,    81,    -1,    73,    -1,    73,     1,    81,
      -1,    29,    -1,    31,    -1,    30,    -1,    33,    -1,    34,
      -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,    39,
      -1,     3,    -1,     3,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    78,    78,    79,    80,    81,    82,    84,    86,    86,
      86,    87,    88,    90,    90,    90,    90,    92,    93,    94,
      96,    97,    98,    99,   100,   102,   103,   105,   106,   108,
     108,   109,   111,   111,   112,   113,   114,   116,   117,   118,
     120,   121,   122,   123,   125,   125,   125,   126,   127,   128,
     132,   133,   134,   135,   136,   137,   138,   140,   141,   142,
     144,   145,   146,   147,   148,   149,   148,   151,   152,   153,
     157,   157,   157,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   172,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   194,   194,   195,
     195,   196,   197,   198,   199,   200,   200,   201,   202,   203,
     203,   204,   205,   206,   208,   210,   210,   211,   212,   214,
     215,   216,   218,   219,   220,   221,   222,   223,   224,   226,
     228,   230
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
  "BRACE_OPEN", "BRACE_CLOSE", "OP_AFFECT", "OP_ADD", "OP_SUBSTRACT",
  "OP_MULTIPLY", "OP_NOT", "LOG_AND", "LOG_LESS", "LOG_EQLESS", "LOG_MORE",
  "LOG_EQMORE", "LOG_EQ", "LOG_DIF", "SEMI_COLON", "DOT", "COMMA",
  "$accept", "Program", "MainClass", "MainHead", "$@1", "$@2", "MainBody",
  "$@3", "$@4", "$@5", "ClassDeclarationS", "ClassDeclaration",
  "ClassHead", "VarDeclarationS", "VarDeclaration", "$@6", "VariableS",
  "$@7", "Variable", "MethodDeclarationS", "MethodDeclaration", "$@8",
  "$@9", "Type", "StatementS", "Statement", "$@10", "$@11", "$@12", "$@13",
  "Expression", "$@14", "ExpressionComp", "$@15", "$@16", "$@17", "$@18",
  "MethodCall", "ExpressionS", "$@19", "Operator", "Logic", "Identifier",
  "Identifierexp", "Identifieraff", 0
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
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    44,    44,    44,    44,    45,    47,    48,
      46,    46,    46,    50,    51,    52,    49,    53,    53,    53,
      54,    54,    54,    54,    54,    55,    55,    56,    56,    58,
      57,    57,    60,    59,    59,    59,    59,    61,    61,    61,
      62,    62,    62,    62,    64,    65,    63,    63,    63,    63,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      68,    68,    68,    68,    69,    70,    68,    68,    68,    68,
      71,    72,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    74,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    76,    75,    77,
      75,    75,    75,    75,    75,    78,    75,    75,    75,    79,
      75,    75,    75,    75,    80,    82,    81,    81,    81,    83,
      83,    83,    84,    84,    84,    84,    84,    84,    84,    85,
      86,    87
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
       3,     3,     3,     1,     0,     0,    13,     7,     7,     5,
       0,     0,     9,     5,     5,     5,     4,     4,     4,     4,
       7,     7,     7,     7,     7,     0,     3,     2,     2,     2,
       2,     6,     6,     6,     6,     5,     5,     5,     5,     6,
       6,     6,     6,     3,     4,     4,     4,     0,     4,     0,
       4,     4,     4,     3,     4,     0,     6,     5,     5,     0,
       5,     4,     4,     0,     2,     0,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,   139,     0,
       3,     0,     0,    26,    25,     1,     0,     0,     0,    13,
       7,     0,     4,     0,    17,     0,     0,     5,     6,     0,
       0,     0,     0,    19,     0,     0,     0,     0,    51,    53,
       0,     0,     0,     0,     0,    14,     0,     0,     8,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    27,
      31,     0,    39,    37,     0,     0,     0,     0,     0,     0,
      55,    56,    54,    50,     0,     0,    44,     0,    24,    23,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,     0,   141,     0,    70,
       0,     0,    63,     0,     0,     0,     0,     0,     9,    21,
      22,    20,     0,     0,     0,     0,     0,   139,     0,     0,
       0,     0,     0,     0,    15,    57,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,    62,     0,   140,
     123,    85,   123,   123,     0,     0,     0,     0,     0,   123,
       0,   140,     0,     0,     0,    61,    60,     0,     0,     0,
       0,     0,    11,     0,     0,     0,     0,     0,    45,     0,
     140,     0,     0,   129,   131,   130,   132,   133,   134,   135,
     136,   137,   138,     0,    87,     0,     0,     0,   123,    88,
      90,     0,     0,     0,     0,   123,     0,     0,    89,     0,
      64,     0,     0,     0,     0,     0,    79,     0,     0,    78,
      77,    76,    10,     0,    36,     0,     0,     0,     0,   123,
       0,     0,   123,   124,     0,     0,   107,   109,    86,     0,
       0,     0,     0,     0,     0,   123,   123,   103,    69,     0,
       0,     0,    71,    75,    74,    73,    16,     0,     0,     0,
       0,     0,    33,     0,     0,     0,   105,   123,   123,   123,
     113,   123,     0,     0,     0,   119,     0,   123,   123,   123,
       0,     0,     0,     0,   123,     0,     0,   123,     0,   106,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,   111,   114,   121,     0,     0,   123,
     122,   123,   123,   115,   108,   110,    96,   123,   123,   123,
     123,   123,    97,   123,    98,    95,   123,   123,    67,    68,
       0,     0,    81,    82,    83,    84,    80,     0,     0,     0,
       0,   128,     0,   117,   120,   118,   123,   100,    93,    92,
      94,    91,   101,   102,    99,    65,     0,     0,     0,     0,
       0,   126,   116,     0,    72,    47,    48,     0,    49,     0,
      46,     0,     0,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    67,   131,    20,    30,    64,   157,
      10,    11,    18,    40,   102,    61,   132,   166,    42,    57,
      58,    91,   217,    43,   118,   104,   241,   353,   121,   284,
     262,   188,   184,   267,   268,   336,   301,   185,   263,   298,
     186,   187,    13,   149,   105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -206
static const yytype_int16 yypact[] =
{
     230,   327,     3,    12,   290,    23,    47,     3,  -206,   371,
    -206,   407,    99,  -206,  -206,  -206,   327,   224,   102,  -206,
    -206,    73,  -206,   327,  -206,   234,   238,  -206,  -206,   494,
      86,   287,   110,  -206,   103,   131,   247,   123,  -206,  -206,
      21,   494,     1,   283,   137,  -206,   173,   174,  -206,   494,
     494,   152,  -206,   176,    92,   202,   338,    76,    80,  -206,
    -206,   276,  -206,  -206,   210,   219,   319,   311,    21,    21,
    -206,  -206,  -206,  -206,   537,   137,  -206,   284,  -206,  -206,
     105,    96,  -206,   431,   350,   333,   352,   336,   107,   346,
     355,   356,   357,   338,  -206,  -206,   379,  -206,   201,  -206,
     368,   431,  -206,   364,   189,    70,   378,   367,  -206,  -206,
    -206,  -206,   483,   483,   483,   483,   346,    44,   383,   344,
      79,   396,    79,   117,  -206,  -206,    79,    79,   453,   395,
    -206,   398,   405,    22,   406,   408,   410,  -206,   314,    61,
     529,  -206,   529,   529,   166,    79,    79,   414,   419,   529,
      79,  -206,    55,    79,   153,  -206,  -206,    21,   133,   130,
     142,     6,  -206,   430,   417,   483,   402,   433,  -206,   437,
      39,   445,    79,  -206,  -206,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,   165,  -206,   250,    79,    79,   529,  -206,
    -206,   302,    13,   266,   185,   529,   476,   507,  -206,   531,
    -206,   446,   432,    29,   443,   450,  -206,   455,    62,  -206,
    -206,  -206,  -206,   513,  -206,   483,   513,   460,   513,   529,
     155,   452,   529,  -206,   225,   366,  -206,  -206,  -206,   392,
      79,    79,    79,   418,   444,   529,   529,  -206,  -206,   480,
     481,   475,  -206,  -206,  -206,  -206,  -206,    79,    79,    79,
      79,   490,  -206,   493,   513,   495,  -206,   529,   529,   529,
    -206,   529,    24,   492,   272,  -206,   186,   529,   529,   529,
     497,   501,   504,   158,   529,   517,   272,   529,   196,  -206,
    -206,   476,   476,   431,   518,   505,   510,   511,    30,    79,
      79,   533,    79,  -206,  -206,  -206,  -206,    79,   512,   529,
    -206,   529,   529,  -206,  -206,  -206,  -206,   529,   529,   529,
     529,   529,  -206,   529,  -206,  -206,   529,   529,  -206,  -206,
     525,   431,  -206,  -206,  -206,  -206,  -206,   515,   516,    79,
     521,  -206,    79,  -206,  -206,  -206,   529,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,  -206,  -206,   542,   544,   545,   534,
     546,  -206,  -206,   559,  -206,  -206,  -206,   549,  -206,   551,
    -206,   431,   552,  -206
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -206,  -206,   577,  -206,  -206,  -206,  -206,  -206,  -206,  -206,
     400,  -206,   354,   233,   227,  -206,  -110,  -206,   -55,   -15,
    -206,  -206,  -206,   -43,   -83,   381,  -206,  -206,  -206,  -206,
    -111,  -206,   -47,  -206,  -206,  -206,  -206,  -206,  -205,  -206,
    -206,  -206,     8,  -206,  -206
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -142
static const yytype_int16 yytable[] =
{
     103,    76,    60,   134,   135,   136,     8,   210,   148,   152,
      14,   154,    15,    77,   231,   158,   159,   161,   123,    89,
     266,   125,    55,   165,   270,   297,    19,   171,   275,   278,
     244,   325,    56,    35,   194,   195,   147,   232,   116,   171,
    -139,   -29,   201,    81,    52,   -34,   211,  -127,   -41,   171,
      77,    63,    52,    87,    88,   214,   199,   133,   133,   133,
     133,   220,  -141,   249,   -32,    94,  -125,  -141,  -141,   245,
     326,   126,  -141,    21,    31,   226,   227,    78,   200,  -139,
     150,    80,   151,    90,    32,    63,   140,   141,   142,  -141,
     250,    56,   331,    72,   127,   189,   190,    95,   128,   143,
     144,   145,   198,    79,    52,   252,    55,   -41,   110,    45,
     133,   146,    25,   238,   239,    25,    93,    73,   155,   271,
     272,   273,    48,   -40,    53,    26,   -52,   351,    29,    49,
     251,   207,   -41,   253,   111,   255,   285,   286,   287,   288,
       8,   228,   204,   150,   156,   151,    52,    54,   237,   140,
     141,   142,   193,   171,   202,   208,   257,    50,   205,   310,
     133,    51,   143,   144,   145,   171,   221,   191,     8,     8,
     192,   291,   256,   206,   146,   260,   203,    70,   327,   328,
     258,   330,   209,   311,   222,    65,   235,   302,   279,   280,
      96,   223,    97,    37,    38,    39,    66,   316,   318,   319,
     320,    71,   119,   -58,    98,   -58,    99,   100,   236,   303,
     293,   294,   295,    74,   296,   101,   -58,   300,   349,   317,
     304,   305,   306,   120,    -2,    28,   150,   312,   151,   314,
     315,     1,   140,   141,   142,    34,    83,     8,   346,    36,
       2,    84,    37,    38,    39,   143,   144,   145,   261,    32,
       8,   224,   333,    41,   334,   335,    41,   146,    46,    47,
     337,   338,   339,   340,   341,   -28,   342,   233,    41,   343,
     344,    51,   225,   150,    59,   151,    41,    41,   362,   140,
     141,   142,    68,    69,    62,    92,     8,     8,   234,   352,
     -18,    16,   143,   144,   145,  -123,   172,  -123,    46,    47,
       2,   173,   174,   175,   146,   176,   177,   178,   179,   180,
     181,   182,  -123,   183,  -123,   138,    82,   170,    37,    38,
      39,   140,   141,   142,   229,    85,   230,   -18,     7,    98,
       8,    99,   100,    86,   143,   144,   145,     2,    51,    75,
     101,   -59,    37,    38,    39,   138,   146,   139,    37,    38,
      39,   140,   141,   142,     6,    12,   106,   107,   108,    98,
     -59,    99,   100,   109,   143,   144,   145,   264,   112,   151,
     101,   -18,     7,   140,   141,   142,   146,   113,   114,   115,
      96,     2,   117,    37,    38,    39,   143,   144,   145,   265,
     122,   124,   130,   150,    98,   151,    99,   100,   146,   140,
     141,   142,   129,    51,    17,   101,   -59,   -18,    23,    22,
     137,    24,   143,   144,   145,   269,    27,     2,   153,   150,
     162,   151,   163,    33,   146,   140,   141,   142,   164,   167,
     196,   168,    96,   169,    97,    37,    38,    39,   143,   144,
     145,   274,   197,   213,   215,   276,    98,   151,    99,   100,
     146,   140,   141,   142,   160,   212,   151,   101,   -59,   216,
     140,   141,   142,   218,   143,   144,   145,   277,   219,   242,
     246,   259,   243,   143,   144,   145,   146,    96,   247,    97,
      37,    38,    39,   248,    44,   146,   254,    37,    38,    39,
     -59,    98,   -59,    99,   100,    44,   281,   282,    37,    38,
      39,   283,   101,   -59,   289,   -28,   -35,   290,    96,   292,
      97,    37,    38,    39,    96,   299,    97,    37,    38,    39,
     307,   -28,    98,   -59,    99,   100,   308,   -59,    98,   309,
      99,   100,    96,   101,    97,    37,    38,    39,    44,   101,
     313,    37,    38,    39,   321,   322,    98,   329,    99,   100,
     323,   324,   345,   172,   332,   347,   348,   101,   173,   174,
     175,   350,   176,   177,   178,   179,   180,   181,   182,   354,
     183,   355,   356,   358,   357,   359,   360,   361,     9,   363,
     240
};

static const yytype_uint16 yycheck[] =
{
      83,    56,     1,   113,   114,   115,     3,     1,   119,   120,
       2,   122,     0,    56,     1,   126,   127,   128,   101,    74,
     225,   104,     1,     1,   229,     1,     3,   138,   233,   234,
       1,     1,    11,    25,   145,   146,   119,    24,    93,   150,
       1,    40,   153,    58,    36,    23,    40,    23,    27,   160,
      93,    43,    44,    68,    69,   165,     1,   112,   113,   114,
     115,   172,     1,     1,    42,    80,    42,    28,    24,    40,
      40,     1,    28,    26,     1,   186,   187,     1,    23,    40,
       1,     1,     3,    75,    11,    77,     7,     8,     9,    28,
      28,    11,   297,     1,    24,   142,   143,     1,    28,    20,
      21,    22,   149,    27,    96,   215,     1,    27,     1,    23,
     165,    32,    13,   196,   197,    13,    11,    25,     1,   230,
     231,   232,    12,    27,     1,    26,     3,   332,    26,    26,
     213,     1,    27,   216,    27,   218,   247,   248,   249,   250,
       3,   188,   157,     1,    27,     3,   138,    24,   195,     7,
       8,     9,   144,   264,     1,    25,     1,    26,    25,     1,
     215,    24,    20,    21,    22,   276,     1,     1,     3,     3,
       4,   254,   219,    40,    32,   222,    23,    25,   289,   290,
      25,   292,    40,    25,    19,    12,     1,     1,   235,   236,
       1,   183,     3,     4,     5,     6,    22,     1,   281,   282,
     283,    25,     1,    14,    15,    16,    17,    18,    23,    23,
     257,   258,   259,    11,   261,    26,    27,   264,   329,    23,
     267,   268,   269,    22,     0,     1,     1,   274,     3,   276,
     277,     1,     7,     8,     9,     1,    26,     3,   321,     1,
      10,    22,     4,     5,     6,    20,    21,    22,    23,    11,
       3,     1,   299,    26,   301,   302,    29,    32,    11,    12,
     307,   308,   309,   310,   311,    27,   313,     1,    41,   316,
     317,    24,    22,     1,    41,     3,    49,    50,   361,     7,
       8,     9,    49,    50,     1,     1,     3,     3,    22,   336,
       0,     1,    20,    21,    22,    23,    24,    25,    11,    12,
      10,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     1,    40,     3,     4,     5,
       6,     7,     8,     9,    22,     6,    24,     0,     1,    15,
       3,    17,    18,    22,    20,    21,    22,    10,    24,     1,
      26,    27,     4,     5,     6,     1,    32,     3,     4,     5,
       6,     7,     8,     9,     0,     1,     6,    24,     6,    15,
      16,    17,    18,    27,    20,    21,    22,     1,    22,     3,
      26,     0,     1,     7,     8,     9,    32,    22,    22,    22,
       1,    10,     3,     4,     5,     6,    20,    21,    22,    23,
      22,    27,    25,     1,    15,     3,    17,    18,    32,     7,
       8,     9,    24,    24,     4,    26,    27,     0,     1,     9,
      27,    11,    20,    21,    22,    23,    16,    10,    22,     1,
      25,     3,    24,    23,    32,     7,     8,     9,    23,    23,
      16,    23,     1,    23,     3,     4,     5,     6,    20,    21,
      22,    23,    23,    26,    42,     1,    15,     3,    17,    18,
      32,     7,     8,     9,     1,    25,     3,    26,    27,    26,
       7,     8,     9,    26,    20,    21,    22,    23,    23,    23,
      27,    19,    40,    20,    21,    22,    32,     1,    28,     3,
       4,     5,     6,    28,     1,    32,    26,     4,     5,     6,
      14,    15,    16,    17,    18,     1,    16,    16,     4,     5,
       6,    26,    26,    27,    14,    11,    23,    14,     1,    14,
       3,     4,     5,     6,     1,    23,     3,     4,     5,     6,
      23,    27,    15,    16,    17,    18,    25,    14,    15,    25,
      17,    18,     1,    26,     3,     4,     5,     6,     1,    26,
      23,     4,     5,     6,    26,    40,    15,    14,    17,    18,
      40,    40,    27,    24,    42,    40,    40,    26,    29,    30,
      31,    40,    33,    34,    35,    36,    37,    38,    39,    27,
      41,    27,    27,    27,    40,    16,    27,    26,     1,    27,
     199
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    10,    44,    45,    46,    55,     1,     3,    45,
      53,    54,    55,    85,    85,     0,     1,    53,    55,     3,
      49,    26,    53,     1,    53,    13,    26,    53,     1,    26,
      50,     1,    11,    53,     1,    85,     1,     4,     5,     6,
      56,    57,    61,    66,     1,    23,    11,    12,    12,    26,
      26,    24,    85,     1,    24,     1,    11,    62,    63,    56,
       1,    58,     1,    85,    51,    12,    22,    47,    56,    56,
      25,    25,     1,    25,    11,     1,    61,    66,     1,    27,
       1,    62,    40,    26,    22,     6,    22,    62,    62,    61,
      85,    64,     1,    11,    62,     1,     1,     3,    15,    17,
      18,    26,    57,    67,    68,    87,     6,    24,     6,    27,
       1,    27,    22,    22,    22,    22,    61,     3,    67,     1,
      22,    71,    22,    67,    27,    67,     1,    24,    28,    24,
      25,    48,    59,    61,    59,    59,    59,    27,     1,     3,
       7,     8,     9,    20,    21,    22,    32,    67,    73,    86,
       1,     3,    73,    22,    73,     1,    27,    52,    73,    73,
       1,    73,    25,    24,    23,     1,    60,    23,    23,    23,
       3,    73,    24,    29,    30,    31,    33,    34,    35,    36,
      37,    38,    39,    41,    75,    80,    83,    84,    74,    75,
      75,     1,     4,    85,    73,    73,    16,    23,    75,     1,
      23,    73,     1,    23,    62,    25,    40,     1,    25,    40,
       1,    40,    25,    26,    59,    42,    26,    65,    26,    23,
      73,     1,    19,    85,     1,    22,    73,    73,    75,    22,
      24,     1,    24,     1,    22,     1,    23,    75,    67,    67,
      68,    69,    23,    40,     1,    40,    27,    28,    28,     1,
      28,    67,    59,    67,    26,    67,    75,     1,    25,    19,
      75,    23,    73,    81,     1,    23,    81,    76,    77,    23,
      81,    73,    73,    73,    23,    81,     1,    23,    81,    75,
      75,    16,    16,    26,    72,    73,    73,    73,    73,    14,
      14,    67,    14,    75,    75,    75,    75,     1,    82,    23,
      75,    79,     1,    23,    75,    75,    75,    23,    25,    25,
       1,    25,    75,    23,    75,    75,     1,    23,    67,    67,
      67,    26,    40,    40,    40,     1,    40,    73,    73,    14,
      73,    81,    42,    75,    75,    75,    78,    75,    75,    75,
      75,    75,    75,    75,    75,    27,    67,    40,    40,    73,
      40,    81,    75,    70,    27,    27,    27,    40,    27,    16,
      27,    26,    67,    27
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
#line 79 "SyntaxicAnalyser.y"
    {syntaxerror ("main class missing"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 80 "SyntaxicAnalyser.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 81 "SyntaxicAnalyser.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 82 "SyntaxicAnalyser.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 86 "SyntaxicAnalyser.y"
    { g_type = tVoid; verifierFoncID("main"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 86 "SyntaxicAnalyser.y"
    {g_type = tString;;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 87 "SyntaxicAnalyser.y"
    {syntaxerror ("public keyword missing");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 88 "SyntaxicAnalyser.y"
    {syntaxerror ("public keyword missing");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 90 "SyntaxicAnalyser.y"
    { verifierVarID(nom);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 90 "SyntaxicAnalyser.y"
    { foncDecEnd(); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 90 "SyntaxicAnalyser.y"
    {finFonction();;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 90 "SyntaxicAnalyser.y"
    {finClass();tabCodeInt[indextab]=creerCode("SORTIE");indextab++;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 94 "SyntaxicAnalyser.y"
    {syntaxerror ("code out of class"); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 96 "SyntaxicAnalyser.y"
    {finClass();;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 97 "SyntaxicAnalyser.y"
    {syntaxerror ("parent class identifier missing"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 98 "SyntaxicAnalyser.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 99 "SyntaxicAnalyser.y"
    {finClass();;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 100 "SyntaxicAnalyser.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 102 "SyntaxicAnalyser.y"
    {verifierClassID(nom);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 103 "SyntaxicAnalyser.y"
    {syntaxerror ("class keyword missing"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 108 "SyntaxicAnalyser.y"
    {verifierVarID(nom);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 109 "SyntaxicAnalyser.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 111 "SyntaxicAnalyser.y"
    {verifierVarID(nom);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 112 "SyntaxicAnalyser.y"
    {verifierVarID(nom);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 114 "SyntaxicAnalyser.y"
    {syntaxerror ("comma missing"); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 117 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid type"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 118 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid identifier"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 122 "SyntaxicAnalyser.y"
    {syntaxerror ("code out of method"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 123 "SyntaxicAnalyser.y"
    {syntaxerror ("code out of method"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 125 "SyntaxicAnalyser.y"
    { verifierFoncID(nom); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 125 "SyntaxicAnalyser.y"
    {foncDecEnd();;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 125 "SyntaxicAnalyser.y"
    {finFonction();;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 126 "SyntaxicAnalyser.y"
    {syntaxerror ("public keyword missing"); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 127 "SyntaxicAnalyser.y"
    {syntaxerror ("type missing"); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 128 "SyntaxicAnalyser.y"
    {syntaxerror ("method name missing"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 132 "SyntaxicAnalyser.y"
    { g_type = tInt; ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 133 "SyntaxicAnalyser.y"
    { g_type = tBoolean; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 134 "SyntaxicAnalyser.y"
    { g_type = tInt; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 135 "SyntaxicAnalyser.y"
    { g_type = tString; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 136 "SyntaxicAnalyser.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 137 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid array type"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 138 "SyntaxicAnalyser.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 145 "SyntaxicAnalyser.y"
    {syntaxerror ("closing brace missing"); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 146 "SyntaxicAnalyser.y"
    {syntaxerror ("opening brace missing"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 148 "SyntaxicAnalyser.y"
    {tabCodeInt[indextab]=creerCode("SIFAUX");indexIf=indextab;indextab++;;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 149 "SyntaxicAnalyser.y"
    {tabCodeInt[indextab]=creerCode("SAUT");indextab++;tabCodeInt[indexIf].operande=indextab;indexIf=indextab-1;;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 150 "SyntaxicAnalyser.y"
    {tabCodeInt[indexIf].operande=indextab;;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 151 "SyntaxicAnalyser.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 152 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 153 "SyntaxicAnalyser.y"
    {syntaxerror ("if condition missing"); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 157 "SyntaxicAnalyser.y"
    {indexWhile1=indextab;;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 157 "SyntaxicAnalyser.y"
    {tabCodeInt[indextab]=creerCode("TANTQUEFAUX");indexWhile2=indextab;indextab++;;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 158 "SyntaxicAnalyser.y"
    {tabCodeInt[indextab]=creerOp("TANTQUE",indexWhile1);indextab++;tabCodeInt[indexWhile2].operande=indextab;;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 160 "SyntaxicAnalyser.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 161 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 162 "SyntaxicAnalyser.y"
    {tabCodeInt[indextab]=creerOp("STORE",getAddress(nomaff,table_local));indextab++;;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 163 "SyntaxicAnalyser.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 164 "SyntaxicAnalyser.y"
    {syntaxerror ("second expression missing"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 165 "SyntaxicAnalyser.y"
    {syntaxerror ("'=' expected"); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 167 "SyntaxicAnalyser.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 168 "SyntaxicAnalyser.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 169 "SyntaxicAnalyser.y"
    {syntaxerror ("'=' expected"); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 170 "SyntaxicAnalyser.y"
    {syntaxerror ("semicolon missing"); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 172 "SyntaxicAnalyser.y"
    {tabCodeInt[indextab]=creerOp("LDC",numval);indextab++;;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 178 "SyntaxicAnalyser.y"
    {syntaxerror ("opening bracket missing"); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 179 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid array type"); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 180 "SyntaxicAnalyser.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 182 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid identifier"); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 183 "SyntaxicAnalyser.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 184 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 186 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid identifier"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 187 "SyntaxicAnalyser.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 188 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 191 "SyntaxicAnalyser.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 192 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 194 "SyntaxicAnalyser.y"
    {tabCodeInt[indextab]=creerCode(oper);indextab++;;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 195 "SyntaxicAnalyser.y"
    {tabCodeInt[indextab]=creerCode(oper);indextab++;;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 197 "SyntaxicAnalyser.y"
    {syntaxerror ("closing bracket missing"); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 199 "SyntaxicAnalyser.y"
    {syntaxerror ("invalid .length"); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 200 "SyntaxicAnalyser.y"
    {foncCallEnd();;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 201 "SyntaxicAnalyser.y"
    {syntaxerror("opening parentheses missing"); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 202 "SyntaxicAnalyser.y"
    {syntaxerror("closing parentheses missing"); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 203 "SyntaxicAnalyser.y"
    {g_nbParam = 0;foncCallEnd();;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 204 "SyntaxicAnalyser.y"
    {syntaxerror ("opening parentheses missing"); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 205 "SyntaxicAnalyser.y"
    {syntaxerror ("closing parentheses missing"); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 208 "SyntaxicAnalyser.y"
    {verifierFoncIDDeclare(nom);;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 210 "SyntaxicAnalyser.y"
    {g_nbParam ++;;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 211 "SyntaxicAnalyser.y"
    {g_nbParam ++;;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 212 "SyntaxicAnalyser.y"
    {syntaxerror ("comma missing"); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 214 "SyntaxicAnalyser.y"
    {strcpy(oper, "ADD");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 215 "SyntaxicAnalyser.y"
    {strcpy(oper, "MUL");;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 216 "SyntaxicAnalyser.y"
    {strcpy(oper, "SUB");;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 219 "SyntaxicAnalyser.y"
    {strcpy(oper, "INF");;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 220 "SyntaxicAnalyser.y"
    {strcpy(oper, "INFE");;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 221 "SyntaxicAnalyser.y"
    {strcpy(oper, "SUP");;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 222 "SyntaxicAnalyser.y"
    {strcpy(oper, "SUPE");;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 223 "SyntaxicAnalyser.y"
    {strcpy(oper, "EGAL");;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 224 "SyntaxicAnalyser.y"
    {strcpy(oper, "DIF");;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 228 "SyntaxicAnalyser.y"
    {checkID(nom);tabCodeInt[indextab]=creerOp("LDV",getAddress(nom,table_local));indextab++;;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 230 "SyntaxicAnalyser.y"
    {checkIDOnInit(nom); strcpy(nomaff, nom);;}
    break;



/* Line 1455 of yacc.c  */
#line 2433 "SyntaxicAnalyser.tab.c"
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
#line 235 "SyntaxicAnalyser.y"



extern FILE *yyin;

int main(int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    BeginCodeGen();
    BeginSemantique();
    yyparse();
    EndSemantique();
    EndCodeGen();
    return 1;
}

void BeginSemantique()
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

void BeginCodeGen(){
    indextab = 0;
}

void EndCodeGen(){
    genererCode();
}

void EndSemantique()
{
    fclose(yyin);
    char c;
    c=' ';
    if(i>1)
        c='s';
	if(i==0)
        printf("no errors were found\n");
    else
        printf("%d error%c found\n",i,c);
    c=' ';
    if(j>1)
        c='s';
    if(j!=0){
		if(i==0)
        printf("%d warning%c found\n",j,c);
	}


    destructSymbolsTable(table_local);
	destructSymbolsTable(table);
	destructSymbolsTable(table_class);
}

