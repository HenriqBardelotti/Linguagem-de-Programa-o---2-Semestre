//Crie um programa em C que leia uma matriz 3x3 de inteiros e exiba a soma de todos os elementosda matriz.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, mat[3][3], soma = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            soma += mat[i][j];
        }
    }
    system("cls");
    printf("Soma = %d\n", soma);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
