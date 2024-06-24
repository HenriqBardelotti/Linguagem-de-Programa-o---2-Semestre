/*Crie um programa que leia um arquivo CSV chamado alunos.csv contendo nomes e notas dealunos (utilize estrutura para simplificar). Ordene os dados por média (em ordem decrescente) PMLista de Exercícios sobre Manipulação de Arquivos em C, salve o resultado em um novo arquivo chamado alunos_ordenados.csv*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    float n1,n2,n3,n4,media;
}Alunos;

void calcularMedia(Alunos alunos[], int tamanho);
void ordenarNotas(Alunos alunos[],int tamanho);

int main(){
    FILE *arquivo = fopen("alunos.csv", "r");
    int n;
    fscanf(arquivo, "%d\n", &n);
    Alunos alunos[n];
    for (int i = 0; i < n; i++)
        fscanf(arquivo, "%[^,],%f,%f,%f,%f\n", alunos[i].nome, &alunos[i].n1, &alunos[i].n2, &alunos[i].n3, &alunos[i].n4);
    fclose(arquivo);
    calcularMedia(alunos, n);
    arquivo = fopen("alunos_ordenados.csv", "w");
    for (int i = 0; i < n; i++){
        fprintf(arquivo, "Nome: %s\n", alunos[i].nome);
        fprintf(arquivo, "Media: %.2f\n\n", alunos[i].media);
    }
    fclose(arquivo);
    return 0;
}

void calcularMedia(Alunos alunos[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        alunos[i].media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3 + alunos[i].n4)/4;
    }
    ordenarNotas(alunos, tamanho);
}

void ordenarNotas(Alunos alunos[],int tamanho){
    for (int i = 0; i < tamanho - 1; i++){
        for (int j = 0; j < tamanho - i - 1; j++){
            if(alunos[j].media < alunos[j+1].media){
                Alunos aux = alunos[j];
                alunos[j] = alunos[j+1];
                alunos[j+1] = aux;
            }
        }
    }
}
