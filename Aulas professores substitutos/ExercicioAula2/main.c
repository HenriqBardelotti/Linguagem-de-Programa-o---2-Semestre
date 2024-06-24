#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tipo, quantidade/*,valor*/;
    printf("Insira o tipo o numero referente ao lanche: \n1 = Hamburguer\n2 = X-burguer\n3 - X-Bacon\n4 = X-tudo\nTipo = ");
    scanf("%d",&tipo);
    printf("Informe a quantidade: ");
    scanf("%d",&quantidade);
    printf("O valor a ser pago eh = R$%.2f",((tipo == 1) ? 10.0 : (tipo == 2) ? 15.0 : (tipo == 3) ? 18.0 : 15.0)*quantidade);
    return 0;

    /*if (tipo == 1)
        valor = 10;
    else if (tipo == 2)
        valor = 15;
    else if (tipo == 3)
        valor = 18;
    else
        valor = 15;
    printf("O valor a ser pago eh = R$%.2d,00", valor*quantidade);*/
}
