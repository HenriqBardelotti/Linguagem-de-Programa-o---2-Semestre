#include <stdio.h>

void lerMatriz(int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++)
        for (int j = 0; j < coluna; j++)
            scanf("%d",&matriz[i][j]);
}

void imprimirMatriz(int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++)
            printf("%d ",matriz[i][j]);
        printf("\n");
    }

}

void imprimirMatrizChar(int linha, int coluna, char matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++)
            printf("%c ",matriz[i][j]);
        printf("\n");
    }
}

void ordenarMatrizCrescente(int linha, int coluna, int matriz[linha][coluna]){
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

void lerVetor(int tamanho, int vet[tamanho]){
    for (int i = 0; i < tamanho; i++)
        scanf("%d",&vet[i]);
}

void printarVetor(int tamanho, int vet[tamanho]){
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vet[i]);
}

