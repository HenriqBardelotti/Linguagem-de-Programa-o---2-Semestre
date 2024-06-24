/*Crie uma estrutura para armazenar uma data (dia, mês, ano). Crie outra estrutura para armazenar os dadosde uma pessoa (nome, data de nascimento). Leia os dados, calcule a idade da pessoa com base na data denascimento e imprima os dados.*/
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    char nome[100];
    Data dataNascimento;
}Pessoa;

void lerDados(Pessoa *pessoa1);
void imprimirDados(Pessoa pessoa1);
int calcularIdade(Pessoa *pessoa1);

int main(){
    Pessoa pessoa1;
    lerDados(&pessoa1);
    imprimirDados(pessoa1);
    return 0;
}

void lerDados(Pessoa *pessoa1){
    printf("Informe o nome: ");
    scanf("%{^\n]", pessoa1->nome);
    printf("Informe a data de nascimento (dia/mes/ano): ");
    scanf("%d/%d/%d",&pessoa1->dataNascimento.dia, &pessoa1->dataNascimento.mes, &pessoa1->dataNascimento.ano);
}

void imprimirDados(Pessoa pessoa1){
    system("cls");
    printf("Nome: %s", pessoa1.nome);
    printf("\nData de nascimento %d/%d/%d", pessoa1.dataNascimento.dia, pessoa1.dataNascimento.mes, pessoa1.dataNascimento.ano);
    printf("\nIdade: %d",calcularIdade(&pessoa1));
}

int calcularIdade(Pessoa *pessoa1){
    time_t agora;
    struct tm *infoTempo;
    time(&agora);
    infoTempo = localtime(&agora);
    int diaN = infoTempo->tm_mday, mesN = infoTempo->tm_mon + 1, anoN = infoTempo->tm_year + 1900;
    int idade = anoN - pessoa1->dataNascimento.ano;
    if (pessoa1->dataNascimento.mes < mesN || pessoa1->dataNascimento.mes == mesN && pessoa1->dataNascimento.dia <= diaN)
        return idade;
    else
        return idade-1;
}
