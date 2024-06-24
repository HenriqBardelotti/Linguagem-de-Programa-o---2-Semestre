/*Implemente uma versão simplificada do clássico jogo de tabuleiro Batalha Naval. Use uma matriz (5x5) para
representar o tabuleiro, onde cada célula pode conter um navio ou ser vazia. Os jogadores devem tentar
adivinhar a localização de 2 navios (Solicite que usuário informa a posição) do oponente até que todos
sejam encontrados.

O tiro na aguá.
X tiro acertou o navio.
- area que ainda não foi escolhida.
Verificar se o palpite não vai sair fora do tabuleiro

Solicite que o usuário informe onde estão os 2 navios (X Y).
Após isso se desejar limpar a tela utilize o comando system("clear") para Linux ou
system("cls") para Windows, não esqueça de importar a biblioteca <stdlib.h>*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fimDeJogo = 0, n1x, n1y, n2x, n2y;
    char tabuleiro[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            tabuleiro[i][j] = '-';
    do {
        printf("\nInforme as coordenadas onde quer posicionar o navio 1 (X,Y) > 0 e < 5 : ");
        scanf("%d %d",&n1x,&n1y);
        if (n1x < 0 || n1x > 4 || n1y < 0 || n1y > 4)
            printf("\nCoordenadas inexistentes no tabuleiro!\n");
    }while (n1x < 0 || n1x > 4 || n1y < 0 || n1y > 4);
    do {
        printf("\nInforme as coordenadas onde quer posicionar o navio 2 (X,Y) > 0 e < 5 : ");
        scanf("%d %d",&n2x,&n2y);
        if (n2x < 0 || n2x > 4 || n2y < 0 || n2y > 4)
            printf("\nCoordenadas inexistentes no tabuleiro!\n");
        if (n2x == n1x && n2y == n1y)
            printf("\nJa existe um navio posicionado nessas coordenadas!\n");
    }while (n2x < 0 || n2x > 4 || n2y < 0 || n2y > 4 || n1x == n2x && n1y == n2y);
    system("cls");
    do{
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++)
                printf("%c ",tabuleiro[i][j]);
            printf("\n");
        }
        int x, y;
        do{
            printf("\nInforme a coordenada 0 < X < 5: ");
            scanf("%d",&x);
            if (x < 0 || x > 4)
                printf("\nPalpite fora do tabuleiro!");
        } while (x < 0 || x > 4);
        do{
            printf("\nInforme a coordenada 0 < Y < 5: ");
            scanf("%d",&y);
            if (y < 0 || y > 4)
                printf("\nPalpite fora do tabuleiro!");
        } while (y < 0 || y > 4);

        if (tabuleiro[x][y] == 'O' || tabuleiro[x][y] == 'X')
            printf("\nPossicao ja jogada anteriormente!\n");
        else if (x == n1x && y == n1y || x == n2x && y == n2y){
            tabuleiro[x][y] = 'X';
            fimDeJogo++;
        }
        else
            tabuleiro[x][y] = 'O';
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++)
                printf("%c ",tabuleiro[i][j]);
            printf("\n");
        }
        printf("\nDeseja limpar a tela e manter so o tabuleiro? (S/N): ");
        char limparTela;
        scanf(" %c",&limparTela);
        limparTela = toupper(limparTela);
        if (limparTela == 'S')
            system("cls");
    }while (fimDeJogo != 2);
    printf("\nGAME OVER");
    return 0;
}
