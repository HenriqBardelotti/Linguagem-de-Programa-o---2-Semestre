#include <stdio.h>
#include "funcoes.c"

void multiplicacaoMatriz(int linha, int coluna, int matriz1[linha][coluna], int matriz2[linha][coluna]){
    int matAux[linha][coluna];
    for (int i = 0; i < linha; i++){
        for (int x = 0; x < linha; x++){
            int aux = 0;
            for (int y = 0; y < coluna; y++){
                aux += matriz1[i][y] * matriz2[y][x];
            }
            matAux[i][x] = aux;
        }
    }
    imprimirMatriz(linha,coluna,matAux);
}

int main(){
    int mat1[2][2], mat2[2][2];
    lerMatriz(2,2,mat1);
    lerMatriz(2,2,mat2);
    multiplicacaoMatriz(2,2,mat1,mat2);
    return 0;
}

