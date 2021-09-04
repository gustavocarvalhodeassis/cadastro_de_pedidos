#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int selectContent;
    printf("---> Selecione <--- \n (1) Cadastro de pedido \n (2) Consulta pedido \n (3) Emitir relatório \n (4) Sair \n");
    scanf("%d", &selectContent);
    if (selectContent == 1)
    {
        printf("Cadastro de pedido \n");
        system("pause");
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
    
    return(0);
}
