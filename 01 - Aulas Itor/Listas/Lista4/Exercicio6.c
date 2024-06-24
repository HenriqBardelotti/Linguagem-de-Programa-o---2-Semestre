#include <stdio.h>
#include "funcoes.c"

int compararMatriz(int linha, int coluna, int matriz1[linha][coluna], int matriz2[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            if (matriz1[i][j] != matriz2[i][j])
                return 1;
        }
    }
    return 0;
}

int main(){
    int mat1[3][3], mat2[3][3];
    lerMatriz(3,3,mat1);
    lerMatriz(3,3,mat2);
    if (compararMatriz(3,3,mat1,mat2) == 0)
        printf("\nAs matrizes sao identicas");
    else
        printf("\nAs matrizes nao sao identicas");
    return 0;
}
