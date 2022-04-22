#include "stdio.h"
#include <stdlib.h>
#include <string.h>

typedef enum {
    NODE_TYPE_UNKNOWN,
    tInt,
    tBool,
} TYPE_IDENTIFIANT;

typedef enum {
    CLASSE_UNKNOWN,
    variable,
    procedure,
    parametre
} CLASSE;

struct NODE
{
    char* name;
    TYPE_IDENTIFIANT type;
    CLASSE classe;
    int isInit;
    int isUsed;
    int nbParam;
    struct NODE * next;

};
typedef struct NODE * NODE;
typedef NODE TABLE_NODE;

NODE create (const char* name, TYPE_IDENTIFIANT type, CLASSE classe, NODE suivant);
NODE insert (NODE node, TABLE_NODE table);
NODE chercher (const char* name, TABLE_NODE table);

void checkIdExisted (char* name);
void checkProcedureArgs (char* name);
int checkIdDeclared (char* name);
void checkIdInitialised (char* name);
void checkIdDeclaredIsUsed();
char* concat(const char* s1, char* s2);
int print_error(char* msg);
// contrainted added 

