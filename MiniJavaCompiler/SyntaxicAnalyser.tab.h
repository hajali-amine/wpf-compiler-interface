
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
     STR = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


