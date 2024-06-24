//01 - Faça a a leitura de um registro nome, idade e sexo sem utilizar struct
#include <stdio.h>
#include <string.h>

int main(){
    char nome[100], sexo;
    int idade;
    double peso;
    printf("Informe nome: ");
    scanf("%[^\n]",&nome);
    printf("Informe idade: ");
    scanf("%d",&idade);
    printf("Informe sexo (m/f): ");
    scanf(" %c",&sexo);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Sexo: %c", sexo);

}
