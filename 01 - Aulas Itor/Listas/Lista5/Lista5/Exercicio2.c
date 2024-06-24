/*Crie uma estrutura para armazenar o título de um livro, o autor e o ano de publicação. Leia os dados de umlivro, calcule quantos anos se passaram desde a publicação e imprima os dados junto com a idade do livro.*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100], autor[100];
    int ano;
}Livro;

int anosPassados(Livro *livro1);
void imprimirInfos(Livro livro1);
void lerLivro(Livro *livro1);

int main(){
    Livro livro1;
    lerLivro(&livro1);
    imprimirInfos(livro1);
    return 0;
}

int anosPassados(Livro *livro1){
    return 2024-livro1->ano;
}

void imprimirInfos(Livro livro1){
    printf("Titilo: %s\n", livro1.titulo);
    printf("Autor: %s\n", livro1.autor);
    printf("Ano de publicacao: %d\n", livro1.ano);
    printf("Idado do livro: %d anos", anosPassados(&livro1));
}

void lerLivro(Livro *livro1){
    printf("Informe o titulo: ");
    scanf("%[^\n]", livro1->titulo);
    getchar();
    printf("Informe o autor: ");
    scanf("%[^\n]", livro1->autor);
    getchar();
    printf("Informe ano de publicacao: ");
    scanf("%d", &livro1->ano);
}
