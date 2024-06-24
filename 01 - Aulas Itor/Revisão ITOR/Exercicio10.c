//Crie um programa em C que leia um arquivo de texto contendo uma lista de números inteiros (umnúmero por linha) e exiba a soma de todos os números.

#include <stdio.h>
#include <stdlib.h>

int lerArquivo();

int main(){
    printf("Soma: %d", lerArquivo());
    return 0;
}

int lerArquivo(){
    int num, soma = 0;
    FILE *arquivo = fopen("numeros.txt","r");
    if (arquivo == NULL){
        printf("Error");
        return 1;
    }
    while(fscanf(arquivo, "%d",&num) == 1){
        soma += num;
    }
    return soma;
}
