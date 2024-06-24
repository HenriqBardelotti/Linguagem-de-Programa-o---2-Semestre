//Escreva um programa em C que receba uma matriz (3x2) e retorne a transposta (2x3) dessa matriz.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][2];
    for (int i = 0; i<3; i++)
        for (int j = 0; j<2; j++)
            scanf("%d",&mat[i][j]);
    printf("Matriz original\n");
    for (int i = 0; i<3; i++){
        for (int j = 0; j<2; j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
    printf("Matriz Trans\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}
