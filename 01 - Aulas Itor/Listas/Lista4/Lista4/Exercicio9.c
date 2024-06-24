#include <stdio.h>
#include "funcoes.c"

void ordenarMatriz(int linha, int coluna, int matriz[linha][coluna]);

int main(){
    int linha, coluna;
    printf("Informe numero de linhas e colunas da matriz respectivamente: \n");
    scanf("%d %d",&linha,&coluna);
    int mat[linha][coluna];
    printf("Informe os elementos da matriz: \n");
    lerMatriz(linha,coluna,mat);
    ordenarMatriz(linha, coluna, mat);
    imprimirMatriz(linha, coluna, mat);
    return 0;
}

void ordenarMatriz(int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            for (int x = 0; x < linha; x++){
                for (int y = 0; y < coluna; y++){
                    if (matriz[x][y] > matriz[i][j]){
                        int aux = matriz[i][j];
                        matriz[i][j] = matriz[x][y];
                        matriz[x][y] = aux;
                    }
                }
            }

        }
    }
}
