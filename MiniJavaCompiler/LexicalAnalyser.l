%{	
 
#include <stdio.h>	
#include <stdlib.h>	          
#include <string.h>
#include <math.h>	
#include "SyntaxicAnalyser.tab.h"	

%}

%option yylineno
delim     [ \t]
bl        {delim}+
chiffre   [0-9]
lettre    [a-zA-Z]
id        ({lettre}|_|$)({lettre}|{chiffre}|_|$)*
nb        ("-")?{chiffre}+("."{chiffre}+)?(("E"|"e")"-"?{chiffre}+)?
integer    -?{chiffre}+
boolean    (true|false)
p_ouvrante  (\()
p_fermante  (\))
b_ouvrant   (\{)
b_fermant   (\})
c_ouvrante  (\[)
c_fermante  (\])
point_virgule   (";")
virgule     (",")
point       (".")
COMMENT_LINE        "//"
COMMENT_START        \/\*
COMMENT_END         \*\/
COMMENT_BLOCK       {COMMENT_START}(.|\n)*{COMMENT_END}
string     \"[^\"]*\"
type      (int|int\[\]|boolean|boolean\[\])
COMMENT_BLOCK_ERROR   \/\*([^(\*\/)]|\n)*
STRING_BLOCK_ERROR    \"([^(\")])*
iderrone    {chiffre}({lettre}|{chiffre}|_|$)*



%%

{bl}                                                                                 /* pas d'actions */
"\\n" 			                                                                 ++yylineno;
{p_ouvrante}                                                                         return(P_OUVRANTE);
{p_fermante}                                                                         return(P_FERMANTE);
{c_ouvrante}                                                                         return(C_OUVRANTE);
{c_fermante}                                                                         return(C_FERMANTE);
{b_ouvrant}                                                                          return(BLOCK_START);
{b_fermant}                                                                          return(BLOCK_END);
{virgule}                                                                            return(VIRGULE);
{point_virgule}                                                                      return(POINT_VIRGULE);
{point}                                                                              return(POINT);
{integer}                                                                            return(INTEGER_LITERAL);
{boolean}                                                                            return(BOOLEAN_LITERAL);


"!="                                                                                 return(INEQUALITY); 
"=="                                                                                 return(EQUALITY); 
"-"                                                                                  return(SUBSTRACTION); 
"*"                                                                                  return(MULTIPLICATION);
"="                                                                                  return(AFFECTATION);
"/"                                                                                  return(DIVISION); 
"+"                                                                                  return(ADD); 
"&&"                                                                                 return(ET); 
"||"                                                                                 return(OR);
"<"                                                                                  return(INF);
">"                                                                                  return(SUP);
"!"                                                                                  return(NOT);
{COMMENT_BLOCK}								  										 {printf("block_comment_on_line :%d",yylineno);}
{COMMENT_LINE}								  										 {printf("block_line_on_line :%d",yylineno);}	

"class"                                                                              return(CLASS);
"static"                                                                             return(STATIC);
"extends"                                                                            return(EXTENDS);
"private"                                                                            return(PRIVATE);
"public"                                                                             return(PUBLIC);
"package"                                                                            return(PACKAGE);
"if"                                                                                 return(IF);
"else"                                                                               return(ELSE);
"while"                                                                              return(WHILE);
"this"                                                                               return(THIS);
"new"                                                                                return(NEW);
"return"                                                                             return(RETURN);
"length"                                                                             return(LENGTH);
"void"                                                                               return(VOID);
"main"                                                                               return(MAIN);
"System.out.println"                                                                 return(SYSTEM_OUT_PRINTLN);
"String"                                                                             return(STR);
"int"                                                                                return(INT);
"boolean"                                                                            return(BOOL);
{type}																				 return(TYPE);
{string}                                                                             return(STRING);
{id}                                                                                 return(ID);

{COMMENT_BLOCK_ERROR}                   {fprintf(stderr,"block_comment_not_closed_on_line :%d",yylineno);}
{STRING_BLOCK_ERROR}                    {fprintf(stderr,"block_string_not_closed_on_line :%d",yylineno);}

{iderrone}                              {printf("illegal_identifier \'%s\' on line :%d",yytext,yylineno);}


%%
