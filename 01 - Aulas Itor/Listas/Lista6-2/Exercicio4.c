//Escreva um programa que leia o arquivo pessoa.bin, modifique a idade da pessoa, e salve novamente no arquivo.

#include <stdio.h>

typedef struct{
    char nome[100];
    int idade;
}Pessoa;

Pessoa pessoa;

void lerArquivo();
void alterarArquivo();
void mostrarArquivo();

int main(){
    lerArquivo();
    alterarArquivo();
    mostrarArquivo();
    return 0;
}

void lerArquivo(){
    FILE *arquivo = fopen("pessoa.bin", "rb");
    if (arquivo == NULL){
        printf("Error");
        return;
    }
    fread(&pessoa, sizeof(Pessoa), 1, arquivo);
    fclose(arquivo);
}

void alterarArquivo(){
    FILE *arquivo = fopen("pessoa.bin", "wb");
    if (arquivo == NULL){
        printf("Error");
        return;
    }
    printf("Informe a nova idade: ");
    scanf("%d", &pessoa.idade);
    fwrite(&pessoa, sizeof(Pessoa), 1, arquivo);
    fclose(arquivo);
}

void mostrarArquivo(){
    FILE *arquivo = fopen("pessoa.bin", "rb");
    if (arquivo == NULL){
        printf("Error");
        return;
    }
    fread(&pessoa, sizeof(Pessoa), 1, arquivo);
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d", pessoa.idade);
    fclose(arquivo);
}
