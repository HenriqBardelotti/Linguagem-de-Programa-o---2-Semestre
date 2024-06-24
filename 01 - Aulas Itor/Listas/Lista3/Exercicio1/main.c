/*Escreva um programa em C que receba uma matriz 3x3 como entrada e exiba a soma de todos os
elementos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3], soma = 0;
    for (int i = 0; i<3; i++)
        for (int j = 0; j<3; j++)
            scanf("%d",&mat[i][j]);
    for (int i = 0; i<3; i++)
        for (int j = 0; j<3; j++)
            soma += mat[i][j];
    printf("\nSoma = %d",soma);
    return 0;
}
