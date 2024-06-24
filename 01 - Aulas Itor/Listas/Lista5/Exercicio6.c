//Crie uma estrutura para armazenar o nome e o preço de um produto. Crie um array de 5 produtos, leia osdados, calcule o preço total e imprima os produtos e o total.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float totalGlobal = 0;

typedef struct{
    char nome[100];
    float preco;

}Produto;

void lerProdutos(Produto produtos[]);
void imprimirProdutos(Produto produtos[]);

int main(){
    Produto produtos[5];
    lerProdutos(&produtos);
    imprimirProdutos(&produtos);
    return 0;
}

void lerProdutos(Produto produtos[]){
    for (int i = 0; i < 5; i++){
        system("cls");
        printf("Informe o nome do produto %d: ", i+1);
        scanf("%[^\n]", produtos[i].nome);
        getchar();
        printf("Infomre o preco do produto %d: ", i+1);
        scanf("%f", &produtos[i].preco);
        getchar();
        totalGlobal += produtos[i].preco;
    }
}

void imprimirProdutos(Produto produtos[]){
    system("cls");
    for (int i = 0; i < 5; i++){
        printf("Produto %d: %s - Preco: %.2f\n", i+1, produtos[i].nome, produtos[i].preco);
    }
    printf("\nValor total: R$%.2f\n\n", totalGlobal);
}
