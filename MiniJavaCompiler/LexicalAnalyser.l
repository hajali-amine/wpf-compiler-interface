%{
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <math.h>
 #include "SyntaxicAnalyser.tab.h"

int i=0;
int j=0;
extern char nom[];
extern int numval;

 void yyerror(char const *msg);
 void lexicerror ( const char *msg);
 void syntaxerror (const char *str);
 void semanticerror (const char *str);
 void semanticwarning ( char *str);
 char* concat(char* s1, char* s2);
%}

%option yylineno

Delimiter                       [ \t]
bl                              {Delimiter}+

Number                          [0-9]
Letter                          [a-zA-Z]
Error_character                 .

Boolean                         True|False
Integer                         {Number}+
String                          \"([^"\n]|\"\")+\"
Error_string                    \"([^"\n]|\"\")+
Identifier                      ({Letter}|"_")({Letter}|{Number}|"_")*
Error_identifier                {Number}({Letter}|{Number}|"_")*

Parenthese_open                 (\()
Parenthese_close                (\))
Bracket_open                    (\[)
Bracket_close                   (\])
Brace_open                      (\{)
Brace_close                     (\})

Comment_block                   "/*"([^*]|\*+[^*/])*\*+"/"
Comment_line                    "//".*\n
Error_comment                   \/\*([^(\*\/)]|\n)*

%%

"class"                               return KEYWORD_CLASS;
"public"                              return KEYWORD_PUBLIC;
"static void main"                    return KEYWORD_MAIN;
"extends"                             return KEYWORD_EXTENDS;
"return"                              return KEYWORD_RETURN;
"if"                                  return KEYWORD_IF;
"else"                                return KEYWORD_ELSE;
"while"                               return KEYWORD_WHILE;
"System.out.println"                  return KEYWORD_PRINT;
"length"                              return KEYWORD_LENGTH;
"this"                                return KEYWORD_THIS;
"new"                                 return KEYWORD_NEW;

"int"                                 return TYPE_INT;
"boolean"                             return TYPE_BOOLEAN;
"String"                              return TYPE_STRING;

{Boolean}							  return BOOLEAN_LITERAL;
{Integer}                             {numval = atoi(yytext);return INTEGER_LITERAL;}
{String}							  return STRING_LITERAL;
{Identifier}                          {strcpy(nom, yytext);return IDENTIFIER;}

{Parenthese_open}                     return PARENTHESE_OPEN;
{Parenthese_close}                    return PARENTHESE_CLOSE;
{Bracket_open}                        return BRACKET_OPEN;
{Bracket_close}                       return BRACKET_CLOSE;
{Brace_open}                          return BRACE_OPEN;
{Brace_close}                         return BRACE_CLOSE;

"="	                                  return OP_AFFECT;
"+"                                   return OP_ADD;
"-"                                   return OP_SUBSTRACT;
"*"                                   return OP_MULTIPLY;
"!"                                   return OP_NOT;

"&&"                                  return LOG_AND;
"<"                                   return LOG_LESS;
"<="                                  return LOG_EQLESS;
">"                                   return LOG_MORE;
">="                                  return LOG_EQMORE;
"=="                                  return LOG_EQ;
"!="                                  return LOG_DIF;

";"                                   return SEMI_COLON;
"."                                   return DOT;
","                                   return COMMA;

{bl}                                  /* no actions */
"\n"			                      /* no actions */

{Comment_line}         				  /* no actions */
{Comment_block}         		      /* no actions */

{Error_identifier}                    {lexicerror(concat("illegal identifier ", yytext));}
{Error_comment}                    	  {lexicerror("unclosed comment");}
{Error_string}                    	  {lexicerror("unclosed string");}
{Error_character}                     {lexicerror(concat("illegal character ", yytext));}
%%

/*
int main(int argc, char *argv[])
{
     yyin = fopen(argv[1], "r");
     yylex();
     fclose(yyin);
}
*/

void yyerror(const char *str)
{

    if(str[0]=='s'){
        return;
    }
    fprintf(stderr,"#  %s\n",str);
}

void lexicerror ( const char *msg ){
    i++;
    char errstr[200];
        sprintf(errstr,"Lexical error on line %d, %s",yylineno,msg);
    yyerror(errstr);
}

void syntaxerror (const char *str){
    i++;
    char errstr[200];
    sprintf(errstr,"Syntax error on line %d, %s",yylineno,str);
    yyerror(errstr);
}

void semanticerror (const char *str){
    i++;
    char errstr[200];
    sprintf(errstr,"Semantic error on line %d, %s",yylineno,str);
    yyerror(errstr);
}

void semanticwarning (char *nom){
    j++;
    char errstr[200];
    sprintf(errstr,"Semantic warning on line %d, declared variable is not used: %s",yylineno,nom);
    yyerror(errstr);
}

int yywrap()
{
}