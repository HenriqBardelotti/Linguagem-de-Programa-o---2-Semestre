#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[40][4];
    for (int i = 0; i<40; i++)
        for (int j = 0; j<4; j++)
            scanf("%d",&mat[i][j]);
    for (int i = 0; i<40; i++){
        int soma = 0;
        for (int j = 0; j<4; j++){
            soma += mat[i][j];
        }
        if (soma/4 >= 6)
            printf("\nAluno %d Aprovado com nota = %d",i+1,soma/4);
        else
            printf("\nAluno %d Reprovado com nota = %d",i+1,soma/4);

    }
    return 0;
}
