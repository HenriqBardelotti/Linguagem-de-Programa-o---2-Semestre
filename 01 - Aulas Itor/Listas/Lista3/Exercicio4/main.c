//Escreva um programa em C que encontre o elemento mínimo e máximo de uma matriz.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3], minimo, maximo;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d",&mat[i][j]);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == 0 && j == 0){
                minimo = mat[i][j];
                maximo = mat[i][j];
            }
            else{
                if (minimo > mat[i][j])
                    minimo = mat[i][j];
                if (maximo < mat[i][j])
                    maximo = mat[i][j];
            }
        }
    }
    printf("Elemento minimo: %d\nElemento maximo: %d", minimo, maximo);
    return 0;
}
