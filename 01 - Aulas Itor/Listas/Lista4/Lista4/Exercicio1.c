#include <stdio.h>
#include "funcoes.c"

int somarElementos(int linha, int coluna, int matriz[linha][coluna]){
    int soma = 0;
    for (int i = 0; i < linha; i++)
            for (int j = 0; j < coluna; j++)
                soma+=matriz[i][j];
    return soma;
}

int main(){
    int mat[3][3];
    lerMatriz(3,3,mat[3][3]);
    printf("Soma = %d",somarElementos(3,3,mat[3][3]));
    return 0;
}
