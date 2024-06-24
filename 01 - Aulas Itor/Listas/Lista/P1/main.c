#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, aux;
    printf("Informe o primeiro numero do intervalo\nX = ");
    scanf("%d",&x);
    printf("\nInforme o segundo numero do intervalo\nY = ");
    scanf("%d",&y);
    printf("\nNumeros primos dentro do intervalo =");
    for (int i = x; i <= y; i++){
        aux = 0;
        for (int j = 1; j <= i; j++){
            if (i%j == 0){
                aux++;
            }
        }
        if (i == 0);
        else if (aux == 2)
            printf(" %d",i);
    }
    return 0;
}
