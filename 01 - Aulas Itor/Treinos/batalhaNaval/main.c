#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, acertos = 0;
    char mat[5][5];
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++)
            mat[i][j] = '-';
    }
    mat[1][1] = '1';
    mat[3][3] = '1';
    do {
        printf("Digite as coordenadas (x,y) 0 <= x < 5 e 0 <= y < 5: ");
        scanf("%d %d",&x,&y);
        if (mat[x][y] == '1'){
            mat[x][y] = 'X';
            acertos++;
        }
        else
            mat[x][y] = 'O';
        for (int i = 0; i<5; i++){
            for (int j = 0; j<5; j++)
                printf("%c ",mat[i][j]);
            printf("\n");
        }
    }while(acertos!=2);
    printf("\nGAME OVER");
    return 0;
}
