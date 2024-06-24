#include <stdio.h>
#include "funcoes.c"

void fecharPortas(int andares,int apartamentos, char matriz[andares][apartamentos]);
void peaoAbreFechaPorta(int num, int linha, int coluna, char mat[linha][coluna], int vet[num], int andares[linha][coluna]);
void predio(int tamamho, int apartamentos, int vetor[tamamho][apartamentos]);

int main(){
    int andares, numeros;
    scanf("%d %d",&andares,&numeros);
    char matriz[andares][4];
    int vetAux[numeros], matAndares[andares][4];
    predio(andares,4,matAndares); // cria os elementos da matriz tipo inteiro, onde armazena em suas posições o número dos apartamentos
    fecharPortas(andares,4,matriz); // inicia a matriz do tipo char com todas as portas fechadas
    lerVetor(numeros,vetAux);  //Recebe os numeros dos usuarios
    peaoAbreFechaPorta(numeros,andares,4,matriz,vetAux,matAndares); //função que abre e fecha a portas
    imprimirMatrizChar(andares,4,matriz);
    return 0;
}

void fecharPortas(int andares,int apartamentos, char matriz[andares][apartamentos]){
    for (int i = 0; i < andares; i++){
        for (int j = 0; j < apartamentos; j++)
            matriz[i][j] = 'C';
    }
}

void predio(int tamanho, int apartamentos, int andares[tamanho][apartamentos]){
    for (int i = 0; i < tamanho; i++)
        for (int j = 0; j < apartamentos; j++)
            andares[i][j] = (i+1)*10+j+1;
}

void peaoAbreFechaPorta(int num, int linha, int coluna, char mat[linha][coluna], int vet[num], int andares[linha][coluna]){
    for (int i = 0; i < num; i++){
        for (int j = 0; j < linha; j++){
            for (int k = 0; k < coluna; k++){
                if(andares[j][k]%vet[i] == 0){
                    if (mat[j][k] == 'C')
                        mat[j][k] = 'O';
                    else
                        mat[j][k] = 'C';
                }
            }
        }
    }
}
