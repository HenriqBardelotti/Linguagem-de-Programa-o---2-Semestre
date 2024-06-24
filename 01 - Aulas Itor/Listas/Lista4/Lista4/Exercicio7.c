#include <stdio.h>
#include "funcoes.c"

int simetria(int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            if (matriz[i][j] != matriz[j][i])
                return 1;
        }
    }
    return 0;
}

int main(){
    int mat[3][3];
    lerMatriz(3,3,mat);
    if (simetria(3,3,mat) != 1)
        printf("Matriz simetrica");
    else
        printf("Matriz nao simetrica");
    return 0;
}
