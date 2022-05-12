#include "semantic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

TABLE_NOUED table, table_local, table_class;

NOEUD g_noeud, g_noeudFonc, g_noeudClass;

TYPE_IDENTIFIER g_type;
int g_IfFonc;
int g_IfFoncParameters;
int g_IfClass;
int g_nbParam;

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

int getAddress (const char* nom, TABLE_NOUED table) {
    if( !table )
        return -1;
    NOEUD noeud = table;
    int pos=0;
    while( noeud ){
        if (strcmp(nom, noeud->nom) == 0){
            return pos;
        }
        pos++;
        noeud = noeud->suivant;
    }
    return -1;
}

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
            semanticerror(concat("variable identifier already defined: ", nom));
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

void verifierClassID (char* nom){
         if( chercher(nom, table_class) ){
                                semanticerror(concat("class identifier already defined: ", nom));
                            }else{
                                g_noeudClass = creer(nom, NODE_TYPE_UNKNOWN, classs, NULL);
                                table_class = insert(g_noeudClass, table_class);
                            }
                            g_IfClass = 1;
}

void foncDecEnd(){
    if(!g_noeudFonc)
        return;
    g_noeudFonc->nbParam = g_nbParam;
    g_nbParam = 0;
    g_IfFoncParameters = 0;
}

void foncCallEnd(){
    if(!g_noeudFonc)
        return;
    if ( g_noeudFonc->nbParam != g_nbParam)
								semanticerror(concat("wrong number of parameters in method call: ", g_noeudFonc->nom));
    g_nbParam = 0;
}

int verifierIDDeclare (char* nom){
    NOEUD noeud;
    if (g_IfFonc){
        noeud = chercher(nom, table_local);
        if ( !noeud ){
            noeud = chercher(nom, table);
            if( !noeud ){
                semanticerror(concat("variable undeclared: ", nom));
                EndSemantique();
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
            EndSemantique();
            return 0;
        }else
        {
            noeud->isUsed = 1;
        }
    }
    return 1;
}

int verifierIDDeclareOnInit (char* nom){

    NOEUD noeud;
    if (g_IfFonc){
        noeud = chercher(nom, table_local);
        if ( !noeud ){
            noeud = chercher(nom, table);
            if( !noeud ){
                semanticerror(concat("variable undeclared: ", nom));
                EndSemantique();
                return 0;
            }
        }
    }else{
        noeud = chercher(nom, table);
        if( !noeud ){
            semanticerror(concat("variable undeclared: ", nom));
            EndSemantique();
            return 0;
        }
    }
    return 1;
}

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

void finClass()
{
    if (g_IfClass == 1){
        g_IfClass = 0;
        table = NULL;
    }
}



void checkID(char* nom){
    if(verifierIDDeclare(nom)) {
        verifierVarInitialise(nom);
    }
}

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



void checkIDOnInit(char* nom){
    if(verifierIDDeclareOnInit(nom)) {
        initVar(nom);
    }
}


char* concat(const char* s1, char* s2){
    char* message;
    message = malloc(strlen(s1)+ strlen(s2)+2);
    strcpy(message, s1);
    strcat(message, s2);
    return message;
}