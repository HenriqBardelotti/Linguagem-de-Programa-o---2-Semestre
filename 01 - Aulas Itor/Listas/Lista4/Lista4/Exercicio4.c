#include <stdio.h>
#include "funcoes.c"

void maiorMenor(int linha, int coluna, int matriz[linha][coluna]){
    int menor = matriz[0][0], maior = matriz[0][0];
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            if (matriz[i][j] < menor)
                menor = matriz[i][j];
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
        }
    }
    printf("Elemento minimo: %d\nElemento maximo: %d",menor,maior);
}

int main(){
    int mat[3][3];
    lerMatriz(3,3,mat);
    maiorMenor(3,3,mat);
    return 0;
}
