/*Crie um programa que defina uma estrutura para armazenar nome, idade e altura de uma pessoa. Leia osdados de uma pessoa, verifique se a pessoa é maior de idade (18 anos ou mais) e imprima os dados juntocom a informação se ela é maior de idade.*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[100];
    int idade;
    double altura;
}Pessoa;

void maiorIdade(Pessoa *pessoa1);
void lerPessoa(Pessoa *pessoa1);
void imprimirPessoa(Pessoa pessoa1);

int main(){
    Pessoa pessoa1;
    lerPessoa(&pessoa1);
    maiorIdade(&pessoa1);
    return 0;
}
void maiorIdade(Pessoa *pessoa1){
    if (pessoa1->idade >= 18)
        imprimirPessoa(*pessoa1);
    else
        printf("Menor de idade");
}

void lerPessoa(Pessoa *pessoa1){
    printf("Informe nome: ");
    scanf("%[^\n]", pessoa1->nome);
    printf("Informe idade: ");
    scanf("%d", &pessoa1->idade);
    printf("Informe altura: ");
    scanf("%lf", &pessoa1->altura);
}

void imprimirPessoa(Pessoa pessoa1){
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2lf", pessoa1.altura);
}
