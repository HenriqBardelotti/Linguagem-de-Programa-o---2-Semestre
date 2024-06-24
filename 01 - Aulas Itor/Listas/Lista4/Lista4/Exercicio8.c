#include <stdio.h>
#include <stdlib.h>
#include "funcoes.c"

//fiz complexo pra treinar conceito de recursividade e ponteiro ^^ , boa sorte para entender hehe

void gerarCampo(int linha, int coluna, char campo[linha][coluna]);
void tabuleiro(int linha, int coluna, int matriz[linha][coluna]);
int lerX(int *x);
int lerY(int *y);
int tiro(int x, int y, int linha, int coluna, char campo[linha][coluna], int tabuleiro[linha][coluna], int *cont, char matReferencia[linha][coluna]);
int verificarEntrada(int *x, int *y, int linha, int coluna, int campo[linha][coluna]);

int main(){
    char campo[5][5], jogarNovamente, limparTela;
    int x, y, matTabuleiro[5][5];
    do{
        system("cls");
        int contador = 0;
        gerarCampo(5,5,campo);           //gera o tabuleiro que iria aparecer na tela do usuario
        tabuleiro(5,5,matTabuleiro);            //gera a matriz que irá auxiliar para verificar as posicoes dos navios
        printf("Digite as coordenadas para esconder o navio 1:\n");
        lerX(&x);    //função com recursividade para garantir que o usuário informe um valor dentro do intervalo
        lerY(&y);
        matTabuleiro[x][y] = 1;   // guarda a posicao do navio na matriz auxiliar
        system("cls");
        printf("Digite as coordenadas para esconder o navio 2:\n");
        lerX(&x);
        lerY(&y);
        verificarEntrada(&x,&y,5,5,matTabuleiro);      //função que verifica se a posição já foi ocupada
        matTabuleiro[x][y] = 1;
        system("cls");
        do {
            imprimirMatrizChar(5,5,campo);
            printf("Digite as coordenadas do palpite de onte esta o navio:\n");
            lerX(&x);
            lerY(&y);
            verificarEntrada(&x,&y,5,5,campo);
            tiro(x,y,5,5,campo,matTabuleiro,&contador,campo);  //função que verifica se o tiro acertou o alvo e faz a alterações
            if (contador != 2){
                printf("Deseja limpar a tela? (S/N): ");
                scanf(" %c",&limparTela);
            }
            if (toupper(limparTela) == 'S')
                system("cls");
        }while(contador != 2);
        system("cls");
        printf("---------------------------------------------------------\n"); //Aula produtiva do Ricardo Ramos
        printf("                       GAME OVER                         \n");
        printf("---------------------------------------------------------\n\n");
        printf("Deseja jogar novamente? (S/N):  ");
        scanf(" %c",&jogarNovamente);
    }while(toupper(jogarNovamente) != 'N');
    return 0;
}

void gerarCampo(int linha, int coluna, char campo[linha][coluna]){
    for (int i = 0; i < linha; i++)
        for (int j = 0; j < coluna; j++)
            campo[i][j] = '-';
}

int lerX(int *x){
    printf("Informe x (x >= 0 e x <= 4): ");
    scanf("%d",x);
    if (*x < 0 || *x > 4){
        printf("Fora do intervalo!");
        lerX(x);
    }
    return *x;
}

int lerY(int *y){
    printf("Informe y (y >= 0 e y <= 4): ");
    scanf("%d",y);
    if (*y < 0 || *y > 4){
        printf("Fora do intervalo!");
        lerY(y);
    }
    return *y;
}

void tabuleiro(int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++)
        for (int j = 0; j < coluna; j++)
            matriz[i][j] = 0;
}

int tiro(int x, int y, int linha, int coluna, char campo[linha][coluna], int tabuleiro[linha][coluna], int *cont, char matReferencia[linha][coluna]){
    if (tabuleiro[x][y] == 1 && matReferencia[x][y] != 'X'){
        campo[x][y] = 'X';
        printf("\nAcertooooou miseravi\n\n");
        return (*cont)++;
    }
    else if (matReferencia[x][y] == 'X' || matReferencia[x][y] == 'O'){
        printf("Posicao ja ocupada\n");
        return *cont;
    }
    else{
        printf("\nErrooooou feio errou rude\n\n");
        campo[x][y] = 'O';
        return *cont;
    }
    return *cont;
}

int verificarEntrada(int *x, int *y, int linha, int coluna, int campo[linha][coluna]){
    if (campo[*x][*y] == 1){
        system("cls");
        printf("Posicao ja ocupada. Infome novamente:\n");
        lerX(&x);
        lerY(&y);
        verificarEntrada(&x,&y,linha,coluna,campo);
    }
    else
        return *x, *y;
}
