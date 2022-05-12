%{
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
%}

%token IDENTIFIER
%token TYPE_INT
%token TYPE_BOOLEAN
%token TYPE_STRING

%token BOOLEAN_LITERAL
%token INTEGER_LITERAL
%token STRING_LITERAL

%token KEYWORD_CLASS
%token KEYWORD_PUBLIC
%token KEYWORD_MAIN
%token KEYWORD_EXTENDS
%token KEYWORD_RETURN
%token KEYWORD_IF
%token KEYWORD_ELSE
%token KEYWORD_WHILE
%token KEYWORD_PRINT
%token KEYWORD_LENGTH
%token KEYWORD_THIS
%token KEYWORD_NEW

%token PARENTHESE_OPEN
%token PARENTHESE_CLOSE
%token BRACKET_OPEN
%token BRACKET_CLOSE
%token BRACE_OPEN
%token BRACE_CLOSE

%token OP_AFFECT
%token OP_ADD
%token OP_SUBSTRACT
%token OP_MULTIPLY
%token OP_NOT

%token LOG_AND
%token LOG_LESS
%token LOG_EQLESS
%token LOG_MORE
%token LOG_EQMORE
%token LOG_EQ
%token LOG_DIF

%token SEMI_COLON
%token DOT
%token COMMA

%start Program

%%

Program		           : MainClass ClassDeclarationS
                       | error ClassDeclarationS {syntaxerror ("main class missing"); }
                       | error MainClass ClassDeclarationS {syntaxerror ("code out of class"); }
                       | MainClass error ClassDeclarationS {syntaxerror ("code out of class"); }
                       | MainClass ClassDeclarationS error {syntaxerror ("code out of class"); }
                       ;
MainClass              : MainHead MainBody
                       ;
MainHead               : ClassHead BRACE_OPEN KEYWORD_PUBLIC KEYWORD_MAIN{ g_type = tVoid; verifierFoncID("main"); } PARENTHESE_OPEN TYPE_STRING {g_type = tString;}BRACKET_OPEN BRACKET_CLOSE
                       | ClassHead BRACE_OPEN error KEYWORD_PUBLIC KEYWORD_MAIN PARENTHESE_OPEN TYPE_STRING BRACKET_OPEN BRACKET_CLOSE {syntaxerror ("public keyword missing");}
                       | ClassHead BRACE_OPEN error KEYWORD_MAIN PARENTHESE_OPEN TYPE_STRING BRACKET_OPEN BRACKET_CLOSE {syntaxerror ("public keyword missing");}
                       ;
MainBody               : IDENTIFIER{ verifierVarID(nom);} PARENTHESE_CLOSE { foncDecEnd(); } BRACE_OPEN StatementS  BRACE_CLOSE {finFonction();} MethodDeclarationS BRACE_CLOSE {finClass();tabCodeInt[indextab]=creerCode("SORTIE");indextab++;}
                       ;
ClassDeclarationS	   : ClassDeclaration ClassDeclarationS
                       |
                       | ClassDeclaration error ClassDeclarationS {syntaxerror ("code out of class"); }
                       ;
ClassDeclaration       : ClassHead KEYWORD_EXTENDS Identifier BRACE_OPEN VarDeclarationS MethodDeclarationS BRACE_CLOSE {finClass();}
                       | ClassHead KEYWORD_EXTENDS error BRACE_OPEN VarDeclarationS MethodDeclarationS BRACE_CLOSE {syntaxerror ("parent class identifier missing"); }
                       | ClassHead KEYWORD_EXTENDS Identifier BRACE_OPEN VarDeclarationS MethodDeclarationS error {syntaxerror ("closing brace missing"); }
                       | ClassHead BRACE_OPEN VarDeclarationS MethodDeclarationS BRACE_CLOSE {finClass();}
                       | ClassHead BRACE_OPEN VarDeclarationS MethodDeclarationS error {syntaxerror ("closing brace missing"); }
                       ;
ClassHead              : KEYWORD_CLASS Identifier {verifierClassID(nom);}
                       | error Identifier {syntaxerror ("class keyword missing"); }
                       ;
VarDeclarationS        : VarDeclaration VarDeclarationS
                       |
                       ;
VarDeclaration         : Variable {verifierVarID(nom);} SEMI_COLON
                       | Variable error {syntaxerror ("semicolon missing"); }
                       ;
VariableS              : Variable {verifierVarID(nom);} COMMA VariableS
                       | Variable {verifierVarID(nom);}
                       |
                       | Variable error VariableS {syntaxerror ("comma missing"); }
                       ;
Variable               : Type Identifier
                       | error Identifier {syntaxerror ("invalid type"); }
                       | Type error {syntaxerror ("invalid identifier"); }
                       ;
MethodDeclarationS     : MethodDeclaration MethodDeclarationS
                       |
                       | MethodDeclaration error MethodDeclarationS {syntaxerror ("code out of method"); }
                       | MethodDeclaration MethodDeclarationS error {syntaxerror ("code out of method"); }
                       ;
MethodDeclaration      : KEYWORD_PUBLIC Variable { verifierFoncID(nom); }PARENTHESE_OPEN VariableS PARENTHESE_CLOSE {foncDecEnd();} BRACE_OPEN StatementS  KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {finFonction();}
                       | error KEYWORD_PUBLIC Variable PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN StatementS  KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("public keyword missing"); }
                       | KEYWORD_PUBLIC error Identifier PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN StatementS  KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("type missing"); }
                       | KEYWORD_PUBLIC Type error PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN StatementS  KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("method name missing"); }
                       //| KEYWORD_PUBLIC Type Identifier PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN StatementS error Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("return keyword missing"); }
                       ;

Type                   : TYPE_INT BRACKET_OPEN BRACKET_CLOSE { g_type = tInt; }
                       | TYPE_BOOLEAN { g_type = tBoolean; }
                       | TYPE_INT { g_type = tInt; }
                       | TYPE_STRING{ g_type = tString; }
                       | TYPE_INT BRACKET_OPEN error {syntaxerror ("closing bracket missing"); }
                       | error BRACKET_OPEN BRACKET_CLOSE {syntaxerror ("invalid array type"); }
                       | TYPE_INT error BRACKET_CLOSE {syntaxerror ("opening bracket missing"); }
                       ;
StatementS             : Statement StatementS
                       | Statement
                       |
                       ;
Statement              : BRACE_OPEN StatementS BRACE_CLOSE
                       | BRACE_OPEN StatementS error {syntaxerror ("closing brace missing"); }
                       | error StatementS BRACE_CLOSE {syntaxerror ("opening brace missing"); }
                       | VarDeclaration
                       | KEYWORD_IF PARENTHESE_OPEN Expression PARENTHESE_CLOSE {tabCodeInt[indextab]=creerCode("SIFAUX");indexIf=indextab;indextab++;}
                            BRACE_OPEN StatementS BRACE_CLOSE {tabCodeInt[indextab]=creerCode("SAUT");indextab++;tabCodeInt[indexIf].operande=indextab;indexIf=indextab-1;}
                            KEYWORD_ELSE BRACE_OPEN StatementS BRACE_CLOSE {tabCodeInt[indexIf].operande=indextab;}
                       | KEYWORD_IF error Expression PARENTHESE_CLOSE StatementS KEYWORD_ELSE StatementS {syntaxerror ("opening parentheses missing"); }
                       | KEYWORD_IF PARENTHESE_OPEN Expression error Statement KEYWORD_ELSE StatementS {syntaxerror ("closing parentheses missing"); }
                       | KEYWORD_IF error StatementS KEYWORD_ELSE StatementS {syntaxerror ("if condition missing"); }
                       /*| KEYWORD_IF PARENTHESE_OPEN Expression PARENTHESE_CLOSE StatementS
                       | KEYWORD_IF PARENTHESE_OPEN Expression error StatementS {syntaxerror ("closing parentheses missing"); }
                       | KEYWORD_IF error StatementS {syntaxerror ("if condition missing"); }*/
                       | KEYWORD_WHILE {indexWhile1=indextab;} PARENTHESE_OPEN Expression PARENTHESE_CLOSE {tabCodeInt[indextab]=creerCode("TANTQUEFAUX");indexWhile2=indextab;indextab++;}
                            BRACE_OPEN StatementS BRACE_CLOSE {tabCodeInt[indextab]=creerOp("TANTQUE",indexWhile1);indextab++;tabCodeInt[indexWhile2].operande=indextab;}
                       | KEYWORD_PRINT PARENTHESE_OPEN Expression PARENTHESE_CLOSE SEMI_COLON
                       | KEYWORD_PRINT PARENTHESE_OPEN Expression PARENTHESE_CLOSE error {syntaxerror ("semicolon missing"); }
                       | KEYWORD_PRINT PARENTHESE_OPEN Expression error SEMI_COLON {syntaxerror ("closing parentheses missing"); }
                       | Identifieraff OP_AFFECT Expression SEMI_COLON {tabCodeInt[indextab]=creerOp("STORE",getAddress(nomaff,table_local));indextab++;}
                       | Identifieraff OP_AFFECT Expression error {syntaxerror ("semicolon missing"); }
                       | Identifieraff OP_AFFECT error SEMI_COLON {syntaxerror ("second expression missing"); }
                       | Identifieraff error Expression SEMI_COLON{syntaxerror ("'=' expected"); }
                       | Identifieraff BRACKET_OPEN Expression BRACKET_CLOSE OP_AFFECT Expression SEMI_COLON
                       | Identifieraff error Expression BRACKET_CLOSE OP_AFFECT Expression SEMI_COLON {syntaxerror ("opening bracket missing"); }
                       | Identifieraff BRACKET_OPEN Expression error OP_AFFECT Expression SEMI_COLON {syntaxerror ("closing bracket missing"); }
                       | Identifieraff BRACKET_OPEN Expression BRACKET_CLOSE error Expression SEMI_COLON {syntaxerror ("'=' expected"); }
                       | Identifieraff BRACKET_OPEN Expression BRACKET_CLOSE OP_AFFECT Expression error {syntaxerror ("semicolon missing"); }
                       ;
Expression             : INTEGER_LITERAL {tabCodeInt[indextab]=creerOp("LDC",numval);indextab++;}ExpressionComp
                       | BOOLEAN_LITERAL ExpressionComp
                       | STRING_LITERAL ExpressionComp
                       | Identifierexp ExpressionComp
                       | KEYWORD_THIS ExpressionComp
                       | KEYWORD_NEW TYPE_INT BRACKET_OPEN Expression BRACKET_CLOSE ExpressionComp
                       | KEYWORD_NEW TYPE_INT error Expression BRACKET_CLOSE ExpressionComp {syntaxerror ("opening bracket missing"); }
                       | KEYWORD_NEW error BRACKET_OPEN Expression BRACKET_CLOSE ExpressionComp {syntaxerror ("invalid array type"); }
                       | KEYWORD_NEW TYPE_INT BRACKET_OPEN Expression error ExpressionComp {syntaxerror ("closing bracket missing"); }
                       | KEYWORD_NEW Identifier PARENTHESE_OPEN PARENTHESE_CLOSE ExpressionComp
                       | KEYWORD_NEW error PARENTHESE_OPEN PARENTHESE_CLOSE ExpressionComp {syntaxerror ("invalid identifier"); }
                       | KEYWORD_NEW Identifier error PARENTHESE_CLOSE ExpressionComp {syntaxerror ("opening parentheses missing"); }
                       | KEYWORD_NEW Identifier PARENTHESE_OPEN error ExpressionComp {syntaxerror ("closing parentheses missing"); }
                       | KEYWORD_NEW Identifier PARENTHESE_OPEN ExpressionS PARENTHESE_CLOSE ExpressionComp
                       | KEYWORD_NEW error PARENTHESE_OPEN ExpressionS PARENTHESE_CLOSE ExpressionComp {syntaxerror ("invalid identifier"); }
                       | KEYWORD_NEW Identifier error ExpressionS PARENTHESE_CLOSE ExpressionComp {syntaxerror ("opening parentheses missing"); }
                       | KEYWORD_NEW Identifier PARENTHESE_OPEN ExpressionS error ExpressionComp {syntaxerror ("closing parentheses missing"); }
                       | OP_NOT Expression ExpressionComp
                       | PARENTHESE_OPEN Expression PARENTHESE_CLOSE ExpressionComp
                       | error Expression PARENTHESE_CLOSE ExpressionComp {syntaxerror ("opening parentheses missing"); }
                       | PARENTHESE_OPEN Expression error ExpressionComp {syntaxerror ("closing parentheses missing"); }
                       ;
ExpressionComp         : Operator Expression {tabCodeInt[indextab]=creerCode(oper);indextab++;} ExpressionComp
                       | Logic Expression {tabCodeInt[indextab]=creerCode(oper);indextab++;} ExpressionComp
                       | BRACKET_OPEN Expression BRACKET_CLOSE ExpressionComp
                       | BRACKET_OPEN Expression error ExpressionComp  {syntaxerror ("closing bracket missing"); }
                       | DOT KEYWORD_LENGTH ExpressionComp
                       | DOT error KEYWORD_LENGTH ExpressionComp {syntaxerror ("invalid .length"); }
                       | MethodCall PARENTHESE_OPEN ExpressionS PARENTHESE_CLOSE{foncCallEnd();} ExpressionComp
                       | MethodCall error ExpressionS PARENTHESE_CLOSE ExpressionComp {syntaxerror("opening parentheses missing"); }
                       | MethodCall PARENTHESE_OPEN ExpressionS error ExpressionComp {syntaxerror("closing parentheses missing"); }
                       | MethodCall PARENTHESE_OPEN PARENTHESE_CLOSE {g_nbParam = 0;foncCallEnd();} ExpressionComp
                       | MethodCall error PARENTHESE_CLOSE ExpressionComp {syntaxerror ("opening parentheses missing"); }
                       | MethodCall PARENTHESE_OPEN error ExpressionComp {syntaxerror ("closing parentheses missing"); }
                       |
                       ;
MethodCall             : DOT Identifier {verifierFoncIDDeclare(nom);}
                       ;
ExpressionS            : Expression {g_nbParam ++;} COMMA ExpressionS
                       | Expression {g_nbParam ++;}
                       | Expression error ExpressionS {syntaxerror ("comma missing"); }
                       ;
Operator               : OP_ADD {strcpy(oper, "ADD");}
                       | OP_MULTIPLY {strcpy(oper, "MUL");}
                       | OP_SUBSTRACT {strcpy(oper, "SUB");}
                       ;
Logic                  : LOG_AND
                       | LOG_LESS {strcpy(oper, "INF");}
                       | LOG_EQLESS {strcpy(oper, "INFE");}
                       | LOG_MORE {strcpy(oper, "SUP");}
                       | LOG_EQMORE {strcpy(oper, "SUPE");}
                       | LOG_EQ {strcpy(oper, "EGAL");}
                       | LOG_DIF {strcpy(oper, "DIF");}
                       ;
Identifier             : IDENTIFIER
                       ;
Identifierexp          : IDENTIFIER {checkID(nom);tabCodeInt[indextab]=creerOp("LDV",getAddress(nom,table_local));indextab++;}
                       ;
Identifieraff          : IDENTIFIER {checkIDOnInit(nom); strcpy(nomaff, nom);}
                       ;



%%


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
