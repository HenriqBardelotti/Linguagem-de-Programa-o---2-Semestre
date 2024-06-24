//02 - Refaça o programa utilizando struct (Pessoa)

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int idade;
    char sexo;
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
}

void imprimirPessoa(Pessoa pessoa1){
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Sexo: %c", pessoa1.sexo);
}
