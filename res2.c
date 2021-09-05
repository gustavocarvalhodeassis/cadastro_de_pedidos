#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct aluno {
    int ru;
    char nome[45];
    char email[60];
    struct aluno * proximo;
} t_cad;

t_cad *ini_cad = NULL; // declara essa variavel global que ira armazenar o inicio da lista encadeada

void cadastro() {

    int cont;
    t_cad* prox_cad;
    
    if ( ini_cad == NULL ) {
        ini_cad = ( t_cad* ) malloc ( sizeof ( t_cad ) );
        ini_cad ->proximo = NULL;
        
        if ( ini_cad == NULL ) exit ( 1 );
    }
    
    prox_cad = ini_cad;
    
    while ( 1 ) {
        printf ( "Digite o RU:" );
        scanf ( "%d", &prox_cad->ru );
        printf ( "Digite o Nome:" );
        scanf ( "%45[^\n]", prox_cad->nome );
        printf ( "Digite o email:" );
        scanf ( "%60s", prox_cad->email ); //email tem no máximo 60 caracteres
        printf ( "Deseja continuar??? (1)SIM e (0)NAO" );
        //( "\n %d", &cont );
        
        //if ( cont == 0 ) break; //o que FAZ ISSO?
        
        prox_cad->proximo = ( t_cad * ) malloc ( sizeof ( t_cad ) );
        prox_cad = prox_cad->proximo;
        prox_cad->proximo = NULL;
    }
    
    printf ( "\n" );
}
void pesquisa() {
    int ru_aux, op;
    char nome_aux[60];
    t_cad* prox_cad;
    
    do {
        printf ( "\n Digite parametro da pesquisa: \n1 RU \n2 Nome :\n0 para sair\n" );
        scanf ( "%d", &op );
        
        if ( op == 0 ) break;
        
        prox_cad = ini_cad;
        
        switch ( op ) {
            case 1:
                printf ( "\n Digite o RU do Aluno:" );
                scanf ( "%d", &ru_aux );
                
                while ( prox_cad != NULL ) {
                    if ( prox_cad-> ru == ru_aux ) {
                        printf ( "ru: %d\n nome:%s\n email:%s", prox_cad->ru, prox_cad->nome, prox_cad->email );
                        break;
                    }
                    
                    prox_cad = prox_cad->proximo;
                }
                
                break;
                
            case 2:
                printf ( "\n Digite o nome do Aluno:" );
                scanf ( "%s", nome_aux ); //não precisa de & para string
                
                while ( prox_cad != NULL ) {
                    if ( strcmp ( prox_cad->nome, nome_aux ) == 0 ) {
                        printf ( "ru: %d\n nome:%s\n email:%s", prox_cad->ru, prox_cad->nome, prox_cad->email );
                        break;
                    }
                    
                    prox_cad = prox_cad->proximo;
                }
                
                break;
                
            default:
                printf ( "\n****opcao invalida*****" );
                break;
        }
    } while ( 1 );
}
void liberarmem() {
    t_cad *prox_cad;
    
    while ( ini_cad != NULL ) {
        prox_cad = ini_cad;
        ini_cad  = prox_cad->proximo;
        free ( prox_cad );
    }
}