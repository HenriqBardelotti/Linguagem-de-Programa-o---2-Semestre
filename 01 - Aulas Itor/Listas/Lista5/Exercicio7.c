/*Crie uma estrutura para armazenar o nome e as 3 notas de um aluno. Crie um array de N alunos, leia osdados, calcule a média das notas e imprima os alunos e a média.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int quantidadeAlunos;

typedef struct{
    char nome[100];
    float n1, n2, n3, media;
}Aluno;

void registrarAluno(Aluno alunos[]);
void medias(Aluno alunos[]);
void imprimirAlunos(Aluno alunos[]);

int main(){
    int n;
    printf("Informe a quantidade de alunos que ira calcular as medias: ");
    scanf("%d",&n);
    Aluno alunos[n];
    quantidadeAlunos = n;
    registrarAluno(alunos);
    medias(alunos);
    imprimirAlunos(alunos);
    return 0;
}

void registrarAluno(Aluno alunos[]){
    for (int i = 0; i < quantidadeAlunos; i++){
        getchar();
        printf("Nome aluno %d: ", i+1);
        scanf("%[^\n]", alunos[i].nome);
        getchar();
        printf("N1: ");
        scanf("%f", &alunos[i].n1);
        printf("N2: ");
        scanf("%f", &alunos[i].n2);
        printf("N3: ");
        scanf("%f", &alunos[i].n3);
    }
}

void medias(Aluno alunos[]){
    for (int i = 0; i < quantidadeAlunos; i++)
        alunos[i].media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3;
}

void imprimirAlunos(Aluno alunos[]){
    system("cls");
    for (int i = 0; i < quantidadeAlunos; i++)
        printf("%s, Media: %.2f\n", alunos[i].nome, alunos[i].media);
}
