//03 - Agora adicione uma estrutura nova para salvar a data nascimento de Pessoa

#include <stdio.h>
#include <string.h>

typedef struct {
    int dia, mes, ano;
}Data;

typedef struct {
    char nome[100];
    char sexo;
    int idade;
    Data dataNascimento;
}Pessoa;

void lerPessoa(Pessoa *pessoa1);
void imprimirPessoa(Pessoa pessoa1);

int main(){
    Pessoa pessoa1;
    lerPessoa(&pessoa1);
    imprimirPessoa(pessoa1);
    return 0;
}

void lerPessoa(Pessoa *pessoa1){
    printf("Informe nome: ");
    scanf("%[^\n]", pessoa1->nome);
    getchar();
    printf("Informe idade: ");
    scanf("%d",&pessoa1->idade);
    printf("Informe sexo (m/f): ");
    scanf(" %c",&pessoa1->sexo);
    printf("Informe a data de nascimento: \n");
    printf("Dia: ");
    scanf("%d", &pessoa1->dataNascimento.dia);
    printf("Mes: ");
    scanf("%d", &pessoa1->dataNascimento.mes);
    printf("Ano: ");
    scanf("%d", &pessoa1->dataNascimento.ano);
}

void imprimirPessoa(Pessoa pessoa1){
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Sexo: %c\n", pessoa1.sexo);
    printf("Nascimento: %d/%d/%d", pessoa1.dataNascimento.dia, pessoa1.dataNascimento.mes, pessoa1.dataNascimento.ano);
}
