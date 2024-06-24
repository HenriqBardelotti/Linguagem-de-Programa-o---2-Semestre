/*Crie uma estrutura para armazenar o modelo, o ano de fabricação e a quilometragem de um carro. Leia osdados de um carro, calcule a idade do carro e imprima os dados junto com a idade do carro.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char modelo[100];
    int anoFab, km;
}Carro;

void lerCarro(Carro *carro1);
void calculoAno(Carro carro1,int *ano);
void imprimirCarro(Carro carro1,int  ano);

int main(){
    int ano;
    Carro carro1;
    lerCarro(&carro1);
    calculoAno(carro1, &ano);
    imprimirCarro(carro1, ano);
    return 0;
}

void lerCarro(Carro *carro1){
    printf("Informe o modelo: ");
    scanf("%[^\n]", carro1->modelo);
    getchar();
    printf("Informe o ano de fabricacao: ");
    scanf("%d", &carro1->anoFab);
    printf("Informe a quilometragem: ");
    scanf("%d", &carro1->km);
}

void calculoAno(Carro carro1,int *ano){
    *ano = 2024 - (carro1.anoFab);
}

void imprimirCarro(Carro carro1,int  ano){
    system("cls");
    printf("Modelo: %s", carro1.modelo);
    printf("\nFabricado em: %d", carro1.anoFab);
    printf("\nQuilometragem: %d", carro1.km);
    printf("\nIdade: %d anos", ano);
}
