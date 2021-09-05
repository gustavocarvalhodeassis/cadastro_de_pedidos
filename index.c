#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char varName[200], varLocale[200], varRequest[200];
int varValue;
int selectContent;
int relatorio(void)
{
    
}
int consulta(void)
{
    
}
int cadastro(void)
{
       system("cls");
        printf("---> Cadastro de pedido <--- \n");
        printf("Nome: ");
        scanf("%s", &varName);
        fflush(stdin);
        printf("Endereco: ");
        scanf("%s", &varLocale);
        fflush(stdin);
        printf("Pedido: ");
        scanf("%s", &varRequest);
        fflush(stdin);
        printf("Valor: ");
        scanf("%d", &varValue);
        fflush(stdin);
        printf("\n");
        system("cls");
        printf("---> Resumo do pedido <--- \n");
        printf("\nNome: %s", &varName);
        printf("\nEndereco: %s", &varLocale);
        printf("\nPedido: %s", &varRequest);
        printf("\nValor: %d", varValue);
        printf("\n");
        printf("\n--------------------------\n");
        printf("\nVoltar para o inicio? Digite (1). Sair? Digite(2)");
        int returnToInitState;
        printf("\n");
        scanf("%d", returnToInitState);
        if (returnToInitState == 1)
        {
            selector();
            return 0;
        }
        
        
           
}
int selector(void)
{
     printf("---> Selecione <--- \n (1) Cadastro de pedido \n (2) Consulta pedido \n (3) Emitir relatorio \n (4) Sair \n");
    scanf("%d", &selectContent);
    if (selectContent == 1)
    {
        cadastro();
        return(0);
    }
    if (selectContent == 2)
    {
        printf("Consulta pedido \n");
    }
    if (selectContent == 3)
    {
        printf("Emitir relatório \n");
    }
    if (selectContent == 4)
    {
        return(0);
    }
    else
    {                                                                                                               
        printf("Opção invalida");
    }
}


int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    selector();
    return(0);
}
