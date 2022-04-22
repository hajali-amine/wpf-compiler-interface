#include "semantic.h"

extern int yylineno;

TABLE_NODE table, table_local;

// Variables Globales
NODE g_noeud, g_noeudProc;
NODE g_ListIdentifiers[100];

TYPE_IDENTIFIANT g_type;
int g_index;
int g_IfProc;
int g_IfProcParameters;
int g_nbParam;

// ajout d'un nouveau identifiant
NODE create (const char* name, TYPE_IDENTIFIANT type, CLASSE classe, NODE next){
    NODE noeud = (NODE)malloc(sizeof(struct NODE));
    noeud->name = (char *)malloc(strlen(name)+1);
    strcpy(noeud->name, name);
    noeud->type = type;
    noeud->classe = classe;
    noeud->next = next;
    return noeud;
}

// insertion d'un nouveau identifiant
NODE insert (NODE node, TABLE_NODE table) {
    if( !table ) {
        return node;
    }
    else {
        NODE last = table;
        while( last->next ) {
            last = last->next;
        }
        last->next = node;
        return table;
    }
}

// chercher un identifiant
NODE chercher (const char* nom, TABLE_NODE table) {
    if( !table )
        return NULL;
    NODE node = table;
    while( node && ( strcmp(nom, node->name) != 0 ) )
        node = node->next;
    return node;
}

// Vérifier la redéfinition des variables déjà déclarées

void checkIdExisted (char* nom){
    CLASSE classe;

    if (g_IfProc){
        if (g_IfProcParameters){
            classe = parametre;
            g_nbParam ++;
        }else{
            classe = variable;
        }
        if(chercher(nom, table_local) ){
            print_error(concat("Identificateur deja defini: ", nom));
        }else{
            NODE noeud = create(nom, g_type, classe, NULL);
            table_local = insert(noeud, table_local);
            g_ListIdentifiers[g_index] = noeud;
            g_index++;
        }
    }else{
        if(chercher(nom, table) ){
            print_error(concat("Identificateur deja defini: ", nom));
        }else{
            NODE noeud = create(nom, g_type, variable, NULL);
            table = insert(noeud, table);
            g_ListIdentifiers[g_index] = noeud;
            g_index++;
        }
    }
}

// verifier qu'une variable utilisé est bien declarée

int checkIdDeclared (char* nom){

    NODE noeud;

    if (g_IfProc){
        noeud = chercher(nom, table_local);
        if ( !noeud ){
            noeud = chercher(nom, table);
            if( !noeud ){
                print_error(concat("variable non declare: ", nom));
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
            print_error(concat("variable non declare: ", nom));
            return 0;
        }else
        {
            noeud->isUsed = 1;
        }
    }
    return 1;
}

// verifier une variable utilisée est bien initialisée

void checkIdInitialised (char* nom){

    NODE noeud;

    if (g_IfProc){
        noeud = chercher(nom, table_local);
        if ( !noeud )
            noeud = chercher(nom, table);
    }else{
        noeud = chercher(nom, table);
    }
    if(noeud && noeud->classe == variable && !noeud->isInit)
        print_error("Variable non initialise");
}


// verifier une variable declarée est bien utilisée , cette fonction sert aussi à reinitialiser la table locale une fois on a terminé avec une methode

void checkIdDeclaredIsUsed()
{
    NODE tmp_table;
    if (g_IfProc == 1){
        g_IfProc = 0;
        tmp_table = table_local;
        table_local = NULL;
    }else{
        // printf("*** Table Globale ***\n");
        // DisplaySymbolsTable( table );
        tmp_table = table;
    }
    while( tmp_table ){
        if (tmp_table->classe == variable && !tmp_table->isUsed)
        {
            char* message;
            const char* msg = "Variable declared not used: ";
            message = malloc(strlen(msg)+ strlen(tmp_table->name));
            strcpy(message, msg);
            strcat(message, tmp_table->name);
            print_error(message);
        }

        tmp_table = tmp_table->next;
    }
}



// helpers 
int print_error(char* msg)
{
    printf("erreur semantique ligne %d : %s\n",yylineno , msg);
    return(1);
}

char* concat(const char* s1, char* s2){
    char* message;
    message = malloc(strlen(s1)+ strlen(s2));
    strcpy(message, s1);
    strcat(message, s2);
    return message;
}


void destructSymbolsTable( TABLE_NODE table )
{
    if( !table )
        return;
    NODE noeud = table;
    while( noeud )
    {
        free(noeud->name);
        free(noeud);
        noeud = noeud->next;
    }
}

// initialisation d'une variable dans la table des symboles
void initVar (char* nom){

    NODE noeud;

    if (g_IfProc){
        noeud = chercher(nom, table_local);
        if ( !noeud )
            noeud = chercher(nom, table);
    }else{
        noeud = chercher(nom, table);
    }
    noeud->isInit = 1;
}

void DisplaySymbolsTable( TABLE_NODE SymbolsTable ){
    if( !SymbolsTable )
        return;
    NODE Node = SymbolsTable;
    while( Node )
    {
        switch( Node->type )
        {
            case tInt :
                printf("int ");
                break;
            case tBool :
                printf("Bool ");
                break;
            case NODE_TYPE_UNKNOWN :
                switch (Node->classe)
                {
                    case procedure:
                        printf("procedure ");
                        break;

                    default:
                        break;
                }

            default :
                printf("Unknown ");
        }

        switch (Node->classe)
        {
            case variable:
                printf("variable ");
                break;

            case parametre:
                printf("parametre ");
                break;

            default:
                break;
        }

        printf(" nom var %s", Node->name);
        printf("\n");

        Node = Node->next;
    }
}