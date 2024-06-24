//Escreva um programa que receba uma estrutura contendo um nome e uma idade, e a salve em um arquivo binário chamado pessoa.bin.

#include <stdio.h>

typedef struct{
    char nome[100];
    int idade;
}Pessoa;

void escreverArquivo();
//void lerArquivo();

Pessoa pessoa;

int main(){
    escreverArquivo();
    //lerArquivo();
    return 0;
}

void escreverArquivo(){
    FILE *arquivo = fopen("pessoa.bin", "wb");
    if (arquivo == NULL){
        printf("Error");
        return;
    }
    printf("Nome: ");
    scanf("%[^\n]", pessoa.nome);
    printf("Idade: ");
    scanf("%d", &pessoa.idade);
    fwrite(&pessoa, sizeof(Pessoa), 1, arquivo);
    fclose(arquivo);
}

/*void lerArquivo(){
    FILE *arquivo = fopen("pessoa.bin", "rb");
    if (arquivo == NULL){
        printf("Error");
        return;
    }
    fread(&pessoa, sizeof(Pessoa), 1, arquivo);
    printf("Nome: %s", pessoa.nome);
    printf("\nIdade: %d", pessoa.idade);
    fclose(arquivo);
}*/
