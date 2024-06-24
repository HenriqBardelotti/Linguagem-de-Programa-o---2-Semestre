//Escreva uma função em C que receba dois números inteiros e retorne o maior deles. Use essafunção em um programa que leia três pares de números e exiba o maior de cada par.

#include <stdio.h>
int cont = 0;

int maior(int n1, int n2);
void imprimirPares(int vetor[]);

int main(){
    int a, b, vet[3];
    do{
        scanf("%d %d", &a, &b);
        vet[cont] = maior(a, b);
        cont++;
    }while(cont < 3);
    imprimirPares(vet);
    return 0;
}

int maior(int n1, int n2){
    if (n1 > n2)
        return n1;
    else
        return n2;
}

void imprimirPares(int vetor[]){
    for (int i = 0; i < cont; i++)
        printf("\n%d", vetor[i]);
}
