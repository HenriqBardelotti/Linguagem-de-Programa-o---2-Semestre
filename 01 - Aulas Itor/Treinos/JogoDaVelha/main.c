#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mat[4][4];
    int jogadores = 1;
    printf("Use coordenadas entre (1,1) e (3,3)");
    do{
        int x, y;
        printf("\nDigite coordenada x: ");
        scanf("%d",&x);
        printf("Digite coordenada y: ");
        scanf("%d",&y);
        if (jogadores%2 != 0)
            mat[x-1][y-1] = 'X';
        else
            mat[x-1][y-1] = 'O';
        jogadores++;
    }while(jogadores!=10);
    printf("\n");
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            printf("%c ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*        for (int i = 0; i<3; i++){
            printf("\n");
            for (int j=0; j<3; j++){
                if (jogadores%2 == 1){
                    mat[x][y] = " X ";
                    printf(" %s ",mat[x][y]);
                }
                else {
                    mat[x][y] = " O ";
                    printf(" %s ",mat[x][y]);
                }

                if (j!= 2)
                    printf("|");
            }
            if (i!=2)
                printf("\n-----------");
        }*/
