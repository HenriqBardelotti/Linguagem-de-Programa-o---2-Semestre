#include <stdio.h>
#include "funcoes.c"

void exibirBordas(int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            if (i == j && i != 0 && i != coluna-1)
                printf("  ");
            else
                printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat[3][3];
    lerMatriz(3,3,mat);
    exibirBordas(3,3,mat);
    return 0;
}
