%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;

int yyerror(char const * msg);	
int yylex(void);

%}
%error-verbose
%token PROGRAM 
%token P_OUVRANTE
%token P_FERMANTE
%token C_OUVRANTE
%token C_FERMANTE
%token BLOCK_START
%token BLOCK_END
%token VIRGULE
%token POINT_VIRGULE
%token POINT
%token INTEGER_LITERAL
%token BOOLEAN_LITERAL
%token INEQUALITY
%token EQUALITY
%token SUBSTRACTION
%token MULTIPLICATION
%token AFFECTATION
%token DIVISION
%token ADD 
%token ET 
%token OR
%token INF
%token SUP
%token NOT
%token CLASS
%token STATIC
%token EXTENDS
%token PRIVATE
%token PUBLIC
%token PACKAGE
%token IF
%token ELSE
%token WHILE
%token THIS
%token NEW
%token RETURN
%token LENGTH
%token VOID
%token MAIN
%token SYSTEM_OUT_PRINTLN
%token ID
%token STRING
%token STR




%start programme

%%
programme 				: MainClass  ClassDeclaration
                        | MainClass
						| MainClass  ClassDeclaration error  {yyerror ("Detection des declaration invalid"); }	
						;
MainClass               : CLASS ID BLOCK_START PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement BLOCK_END BLOCK_END
                        | CLASS error BLOCK_START PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement BLOCK_END BLOCK_END {yyerror (" invalid declaration : class name not found"); }
                        | CLASS ID error PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement BLOCK_END BLOCK_END {yyerror ("declaration invalid : '{' expected but not found"); }
                        | CLASS ID BLOCK_START PUBLIC STATIC VOID MAIN error STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement BLOCK_END BLOCK_END {yyerror ("declaration invalid : '(' expected but not found"); }
                        | CLASS ID BLOCK_START PUBLIC STATIC VOID error P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement BLOCK_END BLOCK_END {yyerror (" invalid declaration : class main not found"); }
                        | CLASS ID BLOCK_START PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE error ID P_FERMANTE BLOCK_START Statement BLOCK_END BLOCK_END {yyerror (" invalid declaration : ']' expected but not found"); }
                        | CLASS ID BLOCK_START PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID error BLOCK_START Statement BLOCK_END BLOCK_END {yyerror (" invalid declaration : ')' expected but not found"); }
                        | CLASS ID BLOCK_START PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement error BLOCK_END {yyerror (" invalid declaration : '}' expected but not found"); }
                        | CLASS error BLOCK_START PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement BLOCK_END error {yyerror (" invalid declaration :'}' expected but not found"); }
                        ;

ClassDeclaration        : CLASS ID EXTENDS ID BLOCK_START VarDeclarations MethodDeclarations BLOCK_END
                        | CLASS ID EXTENDS ID BLOCK_START VarDeclarations BLOCK_END
                        | CLASS ID EXTENDS ID BLOCK_START MethodDeclarations BLOCK_END
                        | CLASS ID BLOCK_START VarDeclarations MethodDeclarations BLOCK_END
                        | CLASS ID BLOCK_START MethodDeclarations BLOCK_END
                        | CLASS ID BLOCK_START VarDeclarations BLOCK_END
                        | CLASS ID error VarDeclarations MethodDeclarations BLOCK_END {yyerror ("declaration invalid : '{' expect but not found"); }
                        | CLASS ID BLOCK_START VarDeclarations MethodDeclarations error {yyerror ("declaration invalid : '}' expect but not found"); }
                        | error ID BLOCK_START VarDeclarations MethodDeclarations BLOCK_END {yyerror ("declaration invalid : keyword class not found "); }
                        ;

VarDeclarations         : VarDeclaration VarDeclarations
                        | VarDeclaration
                        ;

MethodDeclarations      : MethodDeclaration MethodDeclarations
                        | MethodDeclaration
                        ;

VarDeclaration          : type ID POINT_VIRGULE
                        | type ID error {yyerror ("declaration invalid : ';' expect but not found"); }
                        ;

MethodDeclaration       : PUBLIC type ID P_OUVRANTE P_FERMANTE BLOCK_START VarDeclarations Statements RETURN expression POINT_VIRGULE BLOCK_END
                        | PUBLIC type ID P_OUVRANTE argDeclarations P_FERMANTE BLOCK_START VarDeclarations Statements RETURN expression POINT_VIRGULE BLOCK_END
                        ;

Statements              : Statement Statements
                        | Statement
                        ;

argDeclarations         : argDeclaration VIRGULE argDeclarations
                        | argDeclaration
                        ;

argDeclaration          : type ID 
                        ;

type                    : INTEGER_LITERAL
                        | BOOLEAN_LITERAL
                        | INTEGER_LITERAL C_FERMANTE C_FERMANTE
                        | ID
                        ;

Statement               : BLOCK_START Statements BLOCK_END
                        | IF P_OUVRANTE expression P_FERMANTE Statement ELSE Statement
                        | WHILE P_OUVRANTE expression P_FERMANTE Statement
                        | SYSTEM_OUT_PRINTLN P_OUVRANTE expression P_FERMANTE POINT_VIRGULE
                        | ID AFFECTATION expression POINT_VIRGULE
                        | ID C_OUVRANTE expression C_FERMANTE AFFECTATION expression POINT_VIRGULE
                        ;  

expression              : expression ET expression
                        | expression OR expression
                        | expression SUP expression
                        | expression INF expression
                        | expression ADD expression
                        | expression SUBSTRACTION expression
                        | expression MULTIPLICATION expression
                        | expression C_OUVRANTE expression C_FERMANTE
                        | expression POINT LENGTH
                        | expression POINT ID P_OUVRANTE expressions P_FERMANTE
                        | INTEGER_LITERAL
                        | BOOLEAN_LITERAL
                        | ID
                        | THIS
                        | NEW INTEGER_LITERAL C_OUVRANTE expression C_FERMANTE
                        | NEW ID P_OUVRANTE P_FERMANTE
                        | NOT expression
                        | P_OUVRANTE expression P_FERMANTE
                        | STRING
                        ;

expressions             : expression VIRGULE expressions
                        | expression 
                        ;                        


%% 



int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
	
	
}

extern FILE *yyin;

int main()
{
 yyparse();
 
 
}