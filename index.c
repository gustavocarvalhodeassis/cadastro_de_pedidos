#include<stdio.h>
#include<stdlib.h>

int i = 0;
int codigo[100];
char nome[255][100];
char endereco[255][100];
char pedido[255][100];
double valor[100];

// ---------FUNÇÃO CADASTRAR
int cadastrar(){
    printf("\n ---> Cadastrar pedido <---");
    printf("\n");
    codigo[i] = i;
    printf("\n Digite o nome:");
    scanf("%s", nome[i]);
    printf("\n Digite o endereco:");
    scanf("%s", endereco[i]);
    printf("\n Digite o pedido:");
    scanf("%s", pedido[i]);
    printf("\n Digite o valor:");
    scanf("%d", &valor[i]);
    i ++;
    return 0;
}
// ---------FUNÇÃO Emitir relatório
void emitirRelatorio(){
    for (int j = 0; j < i; ++j)
    {
    printf("\n Nome: %s",nome[j]);
    printf("\n Endereco: %s",endereco[j]);
    printf("\n Pedido: %s",pedido[j]);
    printf("\n Valor: %d",valor[j],"\n");
    printf("\n");
    }
}
// ---------FUNÇÃO Consultar
int consultarPedido(int id){
    system("cls");
    printf("\n Nome: %s",nome[id]);
    printf("\n Endereco: %s",endereco[id]);
    printf("\n Pedido: %s",pedido[id]);
    printf("\n Valor: %d",valor[id],"\n");
    
    return 0;
}



int main() {
    int loop = 1;
    int id;
    char option;
    while(loop == 1){
        system("cls");
        printf(
                "     ---> selecione <--- \n"
                "\n"
                "     1 - Cadastrar Pedido\n"
                "     2 - Consultar Pedido\n"
                "     3 - Emitir Relatorio\n"
                "     4 - Sair \n");

//        ler option
        scanf("%c", &option);

        switch (option) {
            case '1':

                cadastrar();

                break;
            case '2':
            printf("\n---> Consulta pedido <---");
            printf("\n");
                printf("\n Digite o id:");
                scanf("%d",&id);
                consultarPedido(id);
                 printf("\n");
                system("\n pause");
                break;
            case '3':
                 printf("\n---> Emitir relatorio <---");
                 printf("\n");
                 emitirRelatorio();
                 printf("\n");
                 system("\n pause");
                break;
            case '4':
                loop = 0;
                break;
            default:
                printf("Comando invalido");
                break;
        }
    }

    printf("fim!");

    return 0;
}