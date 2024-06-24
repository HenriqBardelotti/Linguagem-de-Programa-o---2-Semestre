//Defina uma estrutura em C para armazenar os dados de um estudante (nome, matrícula e notafinal). Escreva um programa que leia os dados de 5 estudantes e exiba o nome do estudante com amaior nota final.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    int matricula;
    float media;
}Alunos;

void lerAlunos(Alunos aluno[]);
void maiorNota(Alunos aluno[]);
void salvarArquivo(Alunos aluno[]);
void lerArquivo(Alunos aluno[]);

int main(){
    Alunos aluno[5];
    lerAlunos(aluno);
    maiorNota(aluno);
    salvarArquivo(aluno);
    lerArquivo(aluno);
    return 0;
}

void lerAlunos(Alunos aluno[]){
    for (int i = 0; i < 5; i++){
        printf("\nAluno: %d\n\n", i+1);
        printf(" Nome: ");
        scanf("%[^\n]", aluno[i].nome);
        printf(" Matricula: ");
        scanf("%d",&aluno[i].matricula);
        printf(" Nota final: ");
        scanf("%f", &aluno[i].media);
        getchar();
    }
}

void maiorNota(Alunos aluno[]){
    int maior = aluno[0].media, aux = 0;
    for (int i = 1; i < 5; i++){
        if (aluno[i].media > maior){
            maior = aluno[i].media;
            aux = i;
        }
    }
    printf("\n\nMaior nota final: %s\nNota: %.2f", aluno[aux].nome, aluno[aux].media);
}

void salvarArquivo(Alunos aluno[]){
    FILE *arquivo = fopen("alunos.txt", "w");
    if (arquivo == NULL){
        printf("Error");
        return 1;
    }
    for (int i = 0; i < 5; i++)
        fprintf(arquivo, "%s, %d, %.2f\n", aluno[i].nome, aluno[i].matricula, aluno[i].media);
    fclose(arquivo);
}

void lerArquivo(Alunos aluno[]){
    FILE *arquivo = fopen("alunos.txt", "r");
    if (arquivo == NULL){
        printf("Error");
        return 1;
    }
    for (int i = 0; i < 5; i++)
        fscanf(arquivo, "%[^,], %d, %f\n",aluno[i].nome, &aluno[i].matricula, &aluno[i].media);
    for (int i = 0; i < 5; i++){
        printf("Aluno %d\n", i+1);
        printf("Nome: %s\nMatricula: %d\nNota final: %.2f\n\n", aluno[i].nome, aluno[i].matricula, aluno[i].media);
    }
    fclose(arquivo);
}
