//Desenvolva um programa que leia uma matriz 4x4 e troque os elementos da diagonal principal pelos elementos da diagonal secundária.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[4][4], matAux[4][4];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
            matAux[i][j] = mat[i][j];
        }
    }
    for (int i = 0, j = 0, x = 3; i < 4; i++, j++, x--){
        int aux = mat[i][j];
        mat[i][j] = mat[i][x];
        mat[i][x] = aux;
    }
    system("cls");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", matAux[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
