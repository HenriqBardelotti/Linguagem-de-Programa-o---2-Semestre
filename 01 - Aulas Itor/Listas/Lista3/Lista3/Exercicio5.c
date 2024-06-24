//Escreva um programa em C que multiplique duas matrizes quadradas de ordem 2 e retorne o resultado.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat1[2][2], mat2[2][2], matResultado[2][2];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d",&mat1[i][j]);
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d",&mat2[i][j]);
    for (int i=0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            int soma = 0;
            for (int k = 0; k < 2; k++){
                soma += mat1[i][k] * mat2[k][j];
            }
            matResultado[i][j] = soma;
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
            printf("%d ",matResultado[i][j]);
        printf("\n");
    }
    return 0;
}
