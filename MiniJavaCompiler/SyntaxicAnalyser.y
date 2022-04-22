%{
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
%token TYPE
%token INT
%token BOOL



%start programme

%%

programme 				: MainClass  ClassDeclaration {checkIdDeclaredIsUsed();}
                        | MainClass {checkIdDeclaredIsUsed();}
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
VarDeclaration          : type ID {checkIdExisted(nom);} POINT_VIRGULE
                        | type ID error {yyerror ("declaration invalid : ';' expect but not found"); }
                        ;

afterIdMethodeCode      :{
                            if( chercher(nom, table) ){
                                yyerror("The procedure is Already defined");
                            }else{
                                NODE g_noeudMethod = create(nom, NODE_TYPE_UNKNOWN, procedure, NULL);
                                table = insert(g_noeudMethod, table);
                            }
                            g_IfProcParameters = 1;
                        }
                        ;
afterParentheseFermanteMethodeCode :{ g_IfProc = 1; 
						    g_noeudProc->nbParam = g_nbParam;
                            g_nbParam = 0;
						}
                        ;
MethodDeclaration       : PUBLIC type ID afterIdMethodeCode P_OUVRANTE P_FERMANTE afterParentheseFermanteMethodeCode BLOCK_START VarDeclarations Statements RETURN expression POINT_VIRGULE BLOCK_END{checkIdDeclaredIsUsed();}
						| PUBLIC type ID afterIdMethodeCode P_OUVRANTE argDeclarations P_FERMANTE afterParentheseFermanteMethodeCode BLOCK_START VarDeclarations Statements RETURN expression POINT_VIRGULE BLOCK_END{checkIdDeclaredIsUsed();}
                        | PUBLIC type ID afterIdMethodeCode P_OUVRANTE P_FERMANTE afterParentheseFermanteMethodeCode BLOCK_START Statements RETURN expression POINT_VIRGULE BLOCK_END{checkIdDeclaredIsUsed();}
                        | PUBLIC type ID afterIdMethodeCode P_OUVRANTE argDeclarations P_FERMANTE afterParentheseFermanteMethodeCode BLOCK_START Statements RETURN expression POINT_VIRGULE BLOCK_END{checkIdDeclaredIsUsed();}
                        ;
Statements              : Statement Statements
                        | Statement
                        ;
argDeclarations         : argDeclaration {g_nbParam++;} VIRGULE argDeclarations
                        | argDeclaration
                        ;
argDeclaration          : type ID {checkIdExisted(nom);
                            } 
                        ;
type                    : INT { g_type = tInt; }
                        | BOOL { g_type = tBool; }
                        | INT C_FERMANTE C_FERMANTE
                        | TYPE
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
                        | ID { checkIdDeclared (nom);}
                        | THIS
                        | NEW INTEGER_LITERAL C_OUVRANTE expression C_FERMANTE
                        | NEW ID { checkIdDeclared (nom);} P_OUVRANTE P_FERMANTE
                        | NOT expression
                        | P_OUVRANTE expression P_FERMANTE
                        | STRING
                        ;

expressions             : expression {
							g_nbParam ++;
						}VIRGULE expressions
                        | expression {
							g_nbParam ++;
						}
                        ;                        

                      
%% 



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