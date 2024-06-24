#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa pessoas[2];
    FILE *arquivo = fopen("teste.bin", "wb+");
    if (arquivo == NULL) {
        printf("Error");
        return -1;
    }

    // Inicializa as estruturas
    strcpy(pessoas[0].nome, "Henrique Ribeiro Bardelotti");
    pessoas[0].idade = 25;


    // Imprime o tamanho inicial do arquivo
    printf("Tamanho do arquivo inicial = %ld bytes\n", ftell(arquivo));

    // Escreve as estruturas no arquivo
    fwrite(pessoas, sizeof(Pessoa), 2, arquivo);

    // Move o cursor para o final do arquivo
    fseek(arquivo, 0, SEEK_END);

    // Imprime o tamanho final do arquivo
    printf("Tamanho do arquivo após escrever = %ld bytes\n", ftell(arquivo));

    fclose(arquivo);
    return 0;
}
