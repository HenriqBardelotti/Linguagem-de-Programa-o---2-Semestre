/*Escreva um programa em C que verifique se uma matriz é simétrica ou não.
Dica:
Uma matriz simétrica é uma matriz quadrada em que a[i][j] == a[j][i] para todo i e todo j.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3], comparador = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d",&mat[i][j]);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++){
            if (mat[i][j] != mat[j][i])
                comparador++;
        }
    if (comparador == 0)
        printf("Matriz simetrica");
    else
        printf("Matriz nao simetrica");
    return 0;
}
