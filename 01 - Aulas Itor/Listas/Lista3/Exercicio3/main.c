//Escreva um programa em C que receba uma matriz de tamanho 3x3 e exiba apenas as bordas da matriz.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d",&mat[i][j]);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == j && i != 0 && j != 2)
                printf("  ");
            else
                printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
