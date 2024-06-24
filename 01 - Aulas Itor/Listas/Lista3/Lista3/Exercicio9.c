//Escreva um programa em C que ordene os elementos de uma matriz de tamanho NxN em ordem crescente.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas, menor;
    printf("Infome o numero de linhas da matriz: ");
    scanf("%d",&linhas);
    printf("\nInforme o numero de colunas da matriz: ");
    scanf("%d",&colunas);
    int mat[linhas][colunas];
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            scanf("%d",&mat[i][j]);
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            //Ess looping de baixo vem trazendo para esquerda o menor valor enquanto o looping de cima percorre a matriz toda
            for (int a = linhas-1; a >= 0; a--){
                for (int b = colunas-1-j; b >= 0; b--){
                    if (mat[a][b] < mat[a][b-1]){
                        int aux = mat[a][b-1];
                        mat[a][b-1] = mat[a][b];
                        mat[a][b] = aux;
                    }
                }
            }
        }
    }
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
    return 0;
}
