//Escreva um programa em C que compare duas matrizes de mesma ordem e verifique se são idênticas.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat1[3][3], mat2[3][3], comparador = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d",&mat1[i][j]);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d",&mat2[i][j]);
    for (int i = 0; i < 3; i++)
        for (int j = 0;  j < 3; j++){
            if (mat1[i][j] != mat2[i][j])
                comparador++;
    }
    if (comparador == 0)
        printf("As matrizes sao identicas");
    else
        printf("As matrizes nao sao identicas");
    return 0;
}
