//Crie uma função em C que receba um vetor de inteiros e seu tamanho, e retorne o maior elementodo vetor.

#include <stdio.h>

int lerN();
void lerVet(int vetor[], int tamanho);
int maiorElemento(int vetor[], int tamanho);

int main(){
    int n = lerN(), vet[n];
    lerVet(vet, n);
    printf("Maior elemento: %d", maiorElemento(vet, n));
    return 0;
}

int lerN(){
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d",&n);
    return n;
}

void lerVet(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);
}

int maiorElemento(int vetor[], int tamanho){
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++){
        if (vetor[i] > maior)
            maior = vetor[i];
    }
    return maior;
}
