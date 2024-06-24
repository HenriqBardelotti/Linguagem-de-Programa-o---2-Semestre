#include <stdio.h>
#include <string.h>

typedef struct {
    char sexo;
    char nome[100];
    int idade;
    double peso;
}Pessoa; //CameowCase início maiusculo

/*Pode representar também:

struct Pessoa1{
    char sexo;
    char nome[100];
    int idade;
    double peso;
};
*/
int main(){
    //Pessoa pessoa1 = {'M',"Itor Isaias", 27, 110};
    //Pessoa pessoa1;
    //pessoa1.sexo = 'm';
    //strcpy(pessoa1.nome, "Itor Isaias");
    Pessoa pessoa1;
    printf("Informe seu nome: ");
    scanf("%[^\n]", pessoa1.nome); // \n diz que vai ler até achar o enter ( \n )
    //fgets(pessoa1.nome, 100, stdin);
    getchar(); //limpa o buffer
    printf("\nInforme seu sexo (m/f): ");
    scanf("%c",&pessoa1.sexo);
    printf("\nInforme idade: ");
    scanf("%d",&pessoa1.idade);
    printf("\nInforme peso: ");
    scanf("%lf",&pessoa1.peso);

    printf("\nNome: %s", pessoa1.nome);
    printf("\nIdade: %d",pessoa1.idade);
    printf("\nSexo: %c" , pessoa1.sexo);
    printf("\nPeso: %.2lf", pessoa1.peso);
    return 0;
}
