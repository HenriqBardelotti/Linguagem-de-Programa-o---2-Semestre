//Fa�a um programa em C que exiba na tela os n�meros primos entre 0 at� o numero informado pelo usu�rio.*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intervalo = 0, aux;
    printf("Informe o intervalo que deseja saber os numeros primos presente nele: ");
    scanf("%d",&intervalo);
    for (int i=intervalo; i>1; i--){
        aux = 0;
        for (int j = 2; j < i; j++){
            if(i%j == 0){
                aux++;
                break;
            }
        }
        if (aux==0)
            printf(" %d,",i);
    }
    if (intervalo == 1)
        printf("\nNao existem numeros primos no intervalo solicitado");
    return 0;
}
