//Crie uma estrutura para armazenar o nome e o preço de um produto. Leia os dados de dois produtos,calcule e imprima o preço total.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    float preco;
}Produtos;

void lerProduto(int tamanho, Produtos *cadastro, float *total);
void imprimirProduto(int tamnho, Produtos *cadastro, float precoTotal);

int main(){
    float precoTotal = 0;
    Produtos cadastro[2];
    lerProduto(2, &cadastro, &precoTotal);
    imprimirProduto(2, &cadastro, precoTotal);
    return 0;
}

void lerProduto(int tamanho, Produtos *cadastro, float *total){ //sofri um pouco pra implementar uma estrutura de repeticao que move as posicoes do ponteiro
    for (int i = 0; i < tamanho; i++, cadastro++){
        printf("Informe o nome do produto %d: ",i+1);
        scanf("%[^\n]", cadastro->nome);
        getchar();
        printf("Informe o preco do produto %d: ",i+1);
        scanf("%f", &cadastro->preco);
        getchar();
        *total += cadastro->preco;
    }
}

void imprimirProduto(int tamanho, Produtos *cadastro, float precoTotal){
    system("cls");
    for (int i = 0; i < tamanho; i++, cadastro++){
        printf("Produto %d: %s, preco: %.2f\n",i+1, cadastro->nome, cadastro->preco);
    }

    printf("\nPreco total: %.2f\n", precoTotal);
}
