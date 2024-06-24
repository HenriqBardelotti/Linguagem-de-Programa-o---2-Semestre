#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[5][5], vetor2[5][5], i, j;
    printf("Matriz 1: \n");
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            printf("Digite a%d%d\n",i,j);
            scanf("%d",&vetor1[i][j]);
        }
    }
    printf("Matriz 2: \n");
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            printf("Digite a%d%d\n",i,j);
            scanf("%d",&vetor2[i][j]);
        }
    }
    printf("Matriz 1 + Matriz 2: \n");
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            printf("%d ",vetor1[i][j]);
        }
        printf("\n");
    }
    printf("\n     +      \n\n");
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            printf("%d ",vetor2[i][j]);
        }
        printf("\n");
    }
    printf("\n     =      \n\n");
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            printf("%d ",vetor1[i][j]+vetor2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
