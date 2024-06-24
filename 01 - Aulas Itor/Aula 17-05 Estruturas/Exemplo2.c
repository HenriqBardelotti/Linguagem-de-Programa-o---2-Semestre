#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char sexo;
    int idade;
    float peso;
}Pessoa;

void lerPessoa(Pessoa *pessoa1);
void imprimirPessoa(Pessoa pessoa1);

int main(){
    Pessoa pessoa1;
    lerPessoa(&pessoa1);
    imprimirPessoa(pessoa1);
}

void imprimirPessoa(Pessoa pessoa1){
    printf("\nNome: %s", pessoa1.nome);
    printf("\nIdade: %d",pessoa1.idade);
    printf("\nSexo: %c" , pessoa1.sexo);
    printf("\nPeso: %.2f", pessoa1.peso);
}

void lerPessoa(Pessoa *pessoa1){
    printf("Informe seu nome: ");
    scanf("%[^\n]", pessoa1->nome);
    getchar();
    printf("\nInforme seu sexo (m/f): ");
    scanf("%c",&pessoa1->sexo);
    printf("\nInforme idade: ");
    scanf("%d",&pessoa1->idade);
    printf("\nInforme peso: ");
    scanf("%f",&pessoa1->peso);
}
