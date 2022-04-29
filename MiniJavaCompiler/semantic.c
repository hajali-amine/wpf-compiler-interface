#include "semantic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

TABLE_NOUED table, table_local, table_class;

NOEUD g_noeud, g_noeudFonc, g_noeudClass;

// variable helpers , g-type indique le type , giffonc indique qu'il s'agit d'une fonction ,g_IfFoncParameters indique si la fonction contient des parametres ,g_IfClass indique qu'il s'agit d'une classe , g_nbParam indique le nombre de parametres
TYPE_IDENTIFIER g_type;
int g_IfFonc;
int g_IfFoncParameters;
int g_IfClass;
int g_nbParam;


// fonctions principales creation , insertion et recherche
NOEUD creer (const char* nom, TYPE_IDENTIFIER type, CLASS classs, NOEUD suivant){
    NOEUD noeud = (NOEUD)malloc(sizeof(struct NOEUD));
    noeud->nom = (char *)malloc(strlen(nom)+2);
    strcpy(noeud->nom, nom);
    noeud->type = type;
    noeud->isUsed = 0;
    noeud->isInit = 0;
    noeud->classs = classs;
    noeud->suivant = suivant;
    return noeud;
}

NOEUD insert (NOEUD noeud, TABLE_NOUED table) {
    if( !table ) {
        return noeud;
    }
    else {
        NOEUD last = table;
        while( last->suivant ) {
            last = last->suivant;
        }
        last->suivant = noeud;
        return table;
    }
}

NOEUD chercher (const char* nom, TABLE_NOUED table) {
    if( !table )
        return NULL;
    NOEUD noeud = table;
    while( noeud ){
        if (strcmp(nom, noeud->nom) == 0){
            return noeud;
        }
        noeud = noeud->suivant;
    }
    return NULL;
}

//destruction d'une table de noeud 
void destructSymbolsTable( TABLE_NOUED table )
{
    if( !table )
        return;
    NOEUD noeud = table;
    while( noeud )
    {
        free(noeud->nom);
        free(noeud);
        noeud = noeud->suivant;
    }
}

// pour debugger cette fonction affiche les symboles de tableau de symboles
void DisplaySymbolsTable( TABLE_NOUED SymbolsTable ){
    if( !SymbolsTable )
        return;
    NOEUD Node = SymbolsTable;
    while( Node )
    {
        switch( Node->type )
        {
            case tInt :
                printf("int ");
                break;

            case tBoolean :
                printf("boolean ");
                break;

            case tString :
                printf("string ");
                break;

            case tVoid :
                printf("void ");
                break;

            case NODE_TYPE_UNKNOWN :
                switch (Node->classs)
                {
                    case classs:
                        printf("class ");
                        break;

                    default:
                        break;
                }
                break;

            default :
                printf("Unknown ");
        }

        switch (Node->classs)
        {
            case variable:
                printf("variable ");
                break;

            case parametre:
                printf("parametre ");
                break;

            case fonction:
                printf("fonction ");
                break;
            case attribute:
                printf("attribute ");
                break;
            default:
                break;
        }

        printf("%s %d %d", Node->nom, Node->isUsed, Node->isInit);
        printf("\n");

        Node = Node->suivant;
    }
}

// verifiée qu'une identificateur d'une variable est declarée une seul fois , donc ne pas repeter les indentificateurs 
void verifierVarID (char* nom){
    CLASS classs;
    if (g_IfFonc){
        if (g_IfFoncParameters){
            classs = parametre;
            g_nbParam ++;
        }else{
            classs = variable;
        }
        if(chercher(nom, table_local) ){
            semanticerror(concat("variable indentifer is already defined ! :", nom));
        }else{
            NOEUD noeud = creer(nom, g_type, classs, NULL);
            table_local = insert(noeud, table_local);

        }
    }
    else{
        if(chercher(nom, table) ){
            semanticerror(concat("attribute identifier already defined: ", nom));
        }else{
            NOEUD noeud = creer(nom, g_type, attribute, NULL);
            table = insert(noeud, table);
        }
    }
}


// verifiée qu'une identificateur d'une fonction est declarée une seul fois , donc ne pas repeter les indentificateurs 
void verifierFoncID (char* nom){
         if( chercher(nom, table) ){
                                semanticerror(concat("fonction identifier already defined: ", nom));
                            }else{
                                g_noeudFonc = creer(nom, g_type, fonction, NULL);
                                table = insert(g_noeudFonc, table);
                            }
                            g_IfFonc = 1;
                            g_IfFoncParameters = 1;
}

// verifiée qu'une identificateur d'une classe est declarée une seul fois , donc ne pas repeter les indentificateurs 
void verifierClassID (char* nom){
         if( chercher(nom, table_class) ){
                                semanticerror(concat("class identifier already defined: ", nom));
                            }else{
                                g_noeudClass = creer(nom, NODE_TYPE_UNKNOWN, classs, NULL);
                                table_class = insert(g_noeudClass, table_class);
                            }
                            g_IfClass = 1;
}

// fonction indiquant la fin de fonction donc reinitialiser les variables helpers necessaires
void foncDecEnd(){
    if(!g_noeudFonc)
        return;
    g_noeudFonc->nbParam = g_nbParam;
    g_nbParam = 0;
    g_IfFoncParameters = 0;
}

// verifier si le nombre de parametres d'une fonction est correct ainsi que la fin d'appel d'une fonction donc reinitialiser les variables helpers 
void foncCallEnd(){
    if(!g_noeudFonc)
        return;
    if ( g_noeudFonc->nbParam != g_nbParam)
								semanticerror(concat("wrong number of parameters in method call: ", g_noeudFonc->nom));
    g_nbParam = 0;
}

// verifier qu'une variable utilisée est bien declarée 
int verifierIDDeclare (char* nom){
    NOEUD noeud;
    if (g_IfFonc){
        noeud = chercher(nom, table_local);
        if ( !noeud ){
            noeud = chercher(nom, table);
            if( !noeud ){
                semanticerror(concat("variable undeclared: ", nom));
                End();
                return 0;
            }else
            {
                noeud->isUsed = 1;
            }
        }else
        {
            noeud->isUsed = 1;
        }
    }else{
        noeud = chercher(nom, table);
        if( !noeud ){
            semanticerror(concat("variable undeclared: ", nom));
            End();
            return 0;
        }else
        {
            noeud->isUsed = 1;
        }
    }
    return 1;
}


// verifier qu'une variable utilisée est bien declarée 
int verifierIDDeclareOnInit (char* nom){

    NOEUD noeud;
    if (g_IfFonc){
        noeud = chercher(nom, table_local);
        if ( !noeud ){
            noeud = chercher(nom, table);
            if( !noeud ){
                semanticerror(concat("variable undeclared: ", nom));
                End();
                return 0;
            }
        }
    }else{
        noeud = chercher(nom, table);
        if( !noeud ){
            semanticerror(concat("variable undeclared: ", nom));
            End();
            return 0;
        }
    }
    return 1;
}

// initialiser une variable
void initVar (char* nom){
    NOEUD noeud;
    if (g_IfFonc){
        noeud = chercher(nom, table_local);
        if ( !noeud ){
            noeud = chercher(nom, table);
        }
    }else{
        noeud = chercher(nom, table);
    }
    noeud->isInit = 1;
}


// verifier une variable declarée est initialisée 
void verifierVarInitialise (char* nom){

    NOEUD noeud;

    if (g_IfFonc){
        noeud = chercher(nom, table_local);
        if ( !noeud ){
            noeud = chercher(nom, table);}
    }else{
        noeud = chercher(nom, table);
    }
    if(noeud && noeud->classs == variable && !noeud->isInit)
        semanticerror(concat("variable not initialised: ", nom));
    if(noeud && noeud->classs == attribute && !noeud->isInit)
        semanticerror(concat("attribute not initialised: ", nom));
}

// cette fonction indique la fin de fonction donc la reinitialisation du tableau local des variables
void finFonction()
{
    //printf("-------\n");
    //DisplaySymbolsTable(table_local);
    NOEUD tmp_table;
    if (g_IfFonc == 1){
        g_IfFonc = 0;
        tmp_table = table_local;
        table_local = NULL;
    }
    while( tmp_table!=NULL ){
        if (tmp_table->classs == variable && !tmp_table->isUsed)
        {
            //semanticwarning(concat("declared variable is not used: ",tmp_table->nom));
            //printf("%s",tmp_table->nom);
            semanticwarning(tmp_table->nom);
        }
        tmp_table = tmp_table->suivant;
    }
}

// fin de classe et reinitialisation de tableau local
void finClass()
{
    if (g_IfClass == 1){
        g_IfClass = 0;
        table = NULL;
    }
}


// verifier si un id est declaré puis initialisé
void checkID(char* nom){
    if(verifierIDDeclare(nom)) {
        verifierVarInitialise(nom);
    }
}

// verifier si une fonction est declarée 
void verifierFoncIDDeclare(char* nom){
    NOEUD noeud;
        noeud = chercher(nom, table);
        if( !noeud ){
            semanticerror(concat("fonction not declared: ", nom));
            g_noeudFonc=NULL;
        }else
        {
            g_noeudFonc=noeud;
        }
}


// verifier si la variable est declaré avant de l'initialiser 
void checkIDOnInit(char* nom){
    if(verifierIDDeclareOnInit(nom)) {
        initVar(nom);
    }
}










// helpers fonctions
// concatenation
char* concat(const char* s1, char* s2){
    char* message;
    message = malloc(strlen(s1)+ strlen(s2)+2);
    strcpy(message, s1);
    strcat(message, s2);
    return message;
}