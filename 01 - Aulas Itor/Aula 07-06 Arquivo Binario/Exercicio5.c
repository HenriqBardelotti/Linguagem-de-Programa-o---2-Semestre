/*Desenvolva um sistema em C para gerenciar uma lista de séries. O sistema deve permitir as seguintes operações:

Limpar estado (resetar)
Cadastrar nova série
Buscar série por nome
Ordenar séries por ano
Desativar série (marcar como desativada sem removê-la da lista)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    int ano;
}Series;

Series serie[1000];

void limparDados();
void cadastrarSerie();
void consultarSerie();
void ordenarSeries();
void desativarSerie();
void mostrarRegistros();

int contadorSeries = 0;

int main(){
    int opc;
    do{
        if (contadorSeries == 0)
            printf("Lista vazia\n\n");
        else
            mostrarRegistros();
        printf("MENU: \n\n1 - Limpar estado\n2 - Cadastrar nova serie\n3 - Buscar serie por nome\n4 - Ordenar series por ano\n5 - Desativar serie\n0 - Sair\n\nInforme: ");
        scanf("%d", &opc);
        switch (opc){
            case 1:
                limparDados();
                break;
            case 2:
                cadastrarSerie();
                break;
            case 3:
                consultarSerie();
                break;
            case 4:
                ordenarSeries();
                break;
            case 5:
                desativarSerie();
                break;
            case 0:
                system("cls");
                printf("FIM");
                break;
            default:
                system("cls");
                printf("Eu num entendi o que se falo");
                break;
        }
    }while (opc != 0);
    return 0;
}

void limparDados(){
    contadorSeries = 0;
    FILE *arquivo = fopen("series.bin", "wb");
    if (arquivo == NULL){
        printf("Error");
        return;
    }
    fclose(arquivo);
    system("cls");
}

void mostrarRegistros(){
    FILE *arquivo = fopen("series.bin", "rb");
    if (arquivo == NULL){
        printf("Error");
        return;
    }
    fread(&serie, sizeof(Series), 1, arquivo);
    fclose(arquivo);
    printf("LISTA\n\n");
    for (int i = 0; i < contadorSeries; i++){
        printf("ID[%d]\n  Nome: %s\n  Idade: %d\n",i+1, serie[i].nome, serie[i].ano);
    }
    printf("\n");
}

void cadastrarSerie(){
    FILE *arquivo = fopen("series.bin", "wb+");
    if (arquivo == NULL){
        printf("Error");
        return;
    }
    fread(&serie, sizeof(Series), 1, arquivo);
    int confirm;
    do {
        system("cls");
        if (contadorSeries == 0)
            printf("Lista vazia\n\n");
        else
            mostrarRegistros();
        printf("Cadastro de serie:\n\n");
        printf("Nome: ");
        while (getchar() != '\n');
        scanf("%[^\n]", serie[contadorSeries].nome);
        printf("Ano: ");
        while (getchar() != '\n');
        scanf("%d", &serie[contadorSeries].ano);
        contadorSeries++;
        printf("\nDeseja cadastrar outra serie? \n\n0 - Nao\n1 - Sim\n\nInforme: ");
        scanf("%d", &confirm);
    }while (confirm != 0);
    fwrite(&serie, sizeof(Series), 1, arquivo);
    fclose(arquivo);
    system("cls");
}

void consultarSerie(){
int auxVerificar = 1, contador;
    do{
        contador = 0;
        system("cls");
        int aux = 0, auxPrint;
        char auxNome[100];
        printf("Informe o nome da serie: ");
        while (getchar() != '\n');
        scanf("%[^\n]", auxNome);
        for (int i = 0; i < contadorSeries; i++){
            if (strcmp(auxNome,serie[i].nome) == 0){
                system("cls");
                printf("[%d] Nome: %s\n    Ano: %d", i+1, serie[i].nome, serie[i].ano);
                contador++;
                break;
            }
        }
        if (contador == 0)
            printf("\nSerie nao encontrada\n\n");
        printf("\n\nDeseja fazer uma nova consulta? \n\n0 - Nao\n1 - Sim\n\nInforme: ");
        scanf("%d",&auxVerificar);
    }while (auxVerificar != 0);
    system("cls");
}

void ordenarSeries(){
    for (int i = 0; i < contadorSeries; i++){
        for (int j = 0; j < contadorSeries - i - 1; j++){
            if (serie[j+1].ano < serie[j].ano){
                Series aux = serie[j];
                serie[j] = serie[j+1];
                serie[j+1] = aux;
            }
        }
    }
    FILE *arquivo = fopen("series.bin", "wb");
    if (arquivo == NULL){
        printf("Error");
        return;
    }
    fwrite(&serie, sizeof(Series), 1, arquivo);
    fclose(arquivo);
    system("cls");
}

void desativarSerie(){
    int auxCont = 1;
    do {
        FILE *arquivo = fopen("series.bin", "wb+");
        if (arquivo == NULL){
            printf("Error");
            return;
        }
        fread(&serie, sizeof(Series), 1, arquivo);
        system("cls");
        if (contadorSeries == 0)
            printf("Lista vazia\n\n");
        else
            mostrarRegistros();
        int id;
        printf("\nInforme o ID da serie que deseja desativar: ");
        scanf("%d",&id);
        char aux[50] = "[DESATIVADO] ";
        strcat(aux, serie[id-1].nome);
        strcpy(serie[id-1].nome, aux);
        fwrite(&serie, sizeof(Series), 1, arquivo);
        fclose(arquivo);
        system("cls");
        mostrarRegistros();
        printf("Deseja desativar outro curso?\n\n0 - Nao\n1 - Sim\n\nInforme: ");
        scanf("%d",&auxCont);
    } while(auxCont != 0);
    system("cls");
}
