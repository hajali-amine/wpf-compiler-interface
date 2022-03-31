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
type      (int|int\[\]|boolean|boolean\[\]|String|String\[\])
COMMENT_BLOCK_ERROR   \/\*([^(\*\/)]|\n)*
STRING_BLOCK_ERROR    \"([^(\")])*
iderrone    {chiffre}({lettre}|{chiffre}|_|$)*



%%

{bl}                                                                                 /* pas d'actions */
"\\n" 			                                                                 ++yylineno;
{p_ouvrante}                                                                         {printf(" parenthese_ouvrante "); return(P_OUVRANTE);}
{p_fermante}                                                                         {printf(" parenthese_fermante "); return(P_FERMANTE);}
{c_ouvrante}                                                                         {printf(" crochet_ouvrante "); return(C_OUVRANTE);}
{c_fermante}                                                                         {printf(" crochet_fermante "); return(C_FERMANTE);}
{b_ouvrant}                                                                          {printf(" block_start "); return(BLOCK_START);}
{b_fermant}                                                                          {printf(" block_end "); return(BLOCK_END);}
{virgule}                                                                            {printf(" virgule "); return(VIRGULE);}
{point_virgule}                                                                      {printf(" point_virgule "); return(POINT_VIRGULE);}
{point}                                                                              {printf(" point "); return(POINT);}
{integer}                                                                            {printf(" integer "); return(INTEGER_LITERAL);}
{boolean}                                                                            {printf(" boolean "); return(BOOLEAN_LITERAL);}


"!="                                                                                 {printf(" inequalily  "); return(INEQUALITY); }
"=="                                                                                 {printf(" equality "); return(EQUALITY); }
"-"                                                                                  {printf(" sub_op "); return(SUBSTRACTION); }
"*"                                                                                  {printf(" mul_op "); return(MULTIPLICATION);}
"="                                                                                  {printf(" aff_op "); return(AFFECTATION);}
"/"                                                                                  {printf(" divison_op "); return(DIVISION); }
"+"                                                                                  {printf(" add "); return(ADD); }
"&&"                                                                                 {printf(" and "); return(ET); }
"||"                                                                                 {printf(" or "); return(OR);}
"<"                                                                                  {printf(" inf_op "); return(INF);}
">"                                                                                  {printf(" sup_op "); return(SUP);}
"!"                                                                                  {printf(" not_op "); return(NOT);}
{COMMENT_BLOCK}								  										 {fprintf("block_comment_on_line :%d",yylineno);}
{COMMENT_LINE}								  										 {fprintf("block_line_on_line :%d",yylineno);}	

"class"                                                                              {printf(" keyword_class "); return(CLASS);}
"static"                                                                             {printf(" keyword_static "); return(STATIC);}
"extends"                                                                            {printf(" keyword_extend "); return(EXTENDS);}
"private"                                                                            {printf(" keyword_private "); return(PRIVATE);}
"public"                                                                             {printf(" keyword_public "); return(PUBLIC);}
"package"                                                                            {printf(" keyword_package "); return(PACKAGE);}
"if"                                                                                 {printf(" keyword_if "); return(IF);}
"else"                                                                               {printf(" keyword_else "); return(ELSE);}
"while"                                                                              {printf(" keyword_while "); return(WHILE);}
"this"                                                                               {printf(" keyword_this "); return(THIS);}
"new"                                                                                {printf(" keyword_new "); return(NEW);}
"return"                                                                             {printf(" keyword_return "); return(RETURN);}
"length"                                                                             {printf(" keyword_length "); return(LENGTH);}
"void"                                                                               {printf(" keyword_void "); return(VOID);}
"main"                                                                               {printf(" keyword_main "); return(MAIN);}
"System.out.println"                                                                 {printf(" keyword_sysoutprint "); return(SYSTEM_OUT_PRINTLN);}
"String"                                                                             {printf(" keyword_str "); return(STR);}
{string}                                                                             {printf(" string "); return(STRING);}
{id}                                                                                 {printf(" id "); return(ID);}

{COMMENT_BLOCK_ERROR}                   {fprintf(stderr,"block_comment_not_closed_on_line :%d",yylineno);}
{STRING_BLOCK_ERROR}                    {fprintf(stderr,"block_string_not_closed_on_line :%d",yylineno);}}

{iderrone}                              {printf("illegal_identifier \'%s\' on line :%d",yytext,yylineno);}


%%

int yywrap(void)
{
	return(1);
}
