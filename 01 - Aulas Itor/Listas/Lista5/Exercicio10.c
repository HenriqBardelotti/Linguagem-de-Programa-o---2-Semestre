//Crie uma estrutura para armazenar os dados de um livro (título, autor, ano de publicação). Crie um array de3 livros, leia os dados, e imprima-os em ordem alfabética pelo título.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int quantidadeLivros = 3;

typedef struct{
    char nome[100], autor[100];
    int anoPublicacao;
}Biblioteca;

void lerDados(Biblioteca livro[]);
void ordenarTitulos(Biblioteca livro[]);
void imprimirLivros(Biblioteca livro[]);

int main(){
    Biblioteca livro[quantidadeLivros];
    lerDados(livro);
    ordenarTitulos(livro);
    imprimirLivros(livro);
    return 0;
}

void lerDados(Biblioteca livro[]){
    for (int i = 0; i < quantidadeLivros; i++){
        system("cls");
        printf("Livro %d\n\n",i+1);
        printf("Titulo: ");
        scanf("%[^\n]", livro[i].nome);
        getchar();
        printf("Autor: ");
        scanf("%[^\n]", livro[i].autor);
        getchar();
        printf("Ano da publicacao: ");
        scanf("%d", &livro[i].anoPublicacao);
        getchar();

    }
}

void ordenarTitulos(Biblioteca livro[]){
    for (int i = 0; i < quantidadeLivros - 1; i++){
        for (int j = 0; j < quantidadeLivros - i - 1; j++){
            if (strcmp(livro[j+1].nome,livro[j].nome) < 0){
                Biblioteca auxLivro = livro[j];
                livro[j] = livro[j+1];
                livro[j+1] = auxLivro;
            }
        }
    }
}

void imprimirLivros(Biblioteca livro[]){
    system("cls");
    for (int i = 0; i < quantidadeLivros; i++){
        printf("Livro %d\n\n",i+1);
        printf("Titulo: %s\n",livro[i].nome);
        printf("Autor: %s\n",livro[i].autor);
        printf("Puclicado em: %d\n\n",livro[i].anoPublicacao);
    }
}
