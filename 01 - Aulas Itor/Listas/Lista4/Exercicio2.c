#include <stdio.h>
#include "funcoes.c"

void matrizTransLGBTQmais(int linha, int coluna, int matriz[linha][coluna]){
    lerMatriz(linha,coluna,matriz);
    for (int i = 0; i < coluna; i++){
        for (int j = 0; j < linha; j++)
            printf("%d ",matriz[j][i]);
        printf("\n");
    }
}

int main(){
    int mat[3][2];
    matrizTransLGBTQmais(3,2,mat);
    return 0;
}
