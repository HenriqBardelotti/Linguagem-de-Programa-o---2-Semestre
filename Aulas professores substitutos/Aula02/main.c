#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Entre com um numero: \n");
    scanf("%d",&numero);
    if( numero%2 == 0)
        printf("%d eh par\n",numero);
    else
        printf("%d eh impar",numero);




    /*float media = 5;
    //Condicional ternário
    printf((media >= 6) ? "Aprovado media = %.2f" : "Reprovado media = %.2f", media);*/
    return 0;
}
