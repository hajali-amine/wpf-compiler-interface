#ifndef SEMANTIC_H_INCLUDED
#define SEMANTIC_H_INCLUDED
#include "stdio.h"
#include <stdlib.h>
#include <string.h>

typedef enum {
    NODE_TYPE_UNKNOWN,
    tInt,
    tBoolean,
    tString,
    tVoid
} TYPE_IDENTIFIER;

typedef enum {
    CLASSE_UNKNOWN,
    variable,
    fonction,
    parametre,
    attribute,
    classs
} CLASS;

struct NOEUD
{
    char* nom;
    TYPE_IDENTIFIER type;
    CLASS classs;
    int isInit;
    int isUsed;
    int nbParam;

    struct NOEUD * suivant;
};
typedef struct NOEUD * NOEUD;
typedef NOEUD TABLE_NOUED;

NOEUD creer (const char* nom, TYPE_IDENTIFIER type, CLASS classe, NOEUD suivant);
NOEUD insert (NOEUD noeud, TABLE_NOUED table);
NOEUD chercher (const char* nom, TABLE_NOUED table);

void verifierID(char* nom);
void verifierVarID (char* nom);
int verifierIDDeclare(char* nom);
void verifierFoncIDDeclare(char* nom);
void initVar (char* nom);
void verifierVarInitialise(char * nom);
void finFonction();
void finClass();
void destructSymbolsTable( TABLE_NOUED SymbolsTable );
void DisplaySymbolsTable( TABLE_NOUED SymbolsTable );
void verifierFoncID (char* nom);
void verifierClassID (char* nom);
void foncDecEnd();
void foncCallEnd();
void checkID(char* nom);
int verifierIDDeclareOnInit (char* nom);
void checkIDOnInit(char* nom);
char* concat(const char* s1, char* s2);
void semanticwarning (char *str);
void semanticerror (const char *str);
void End();

#endif // SEMANTIC_H_INCLUDED