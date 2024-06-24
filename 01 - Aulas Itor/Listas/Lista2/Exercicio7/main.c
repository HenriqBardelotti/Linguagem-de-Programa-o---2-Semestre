#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[7],x,y;
    printf("Digite 7 numeros inteiros: ");
    for(int i = 0; i<7; i++){
        scanf("%d",&vet[i]);
    }
    printf("Digite X e Y, respectivamente: ");
    scanf("%d%d",&x,&y);
    printf("Vetor original: ");
    for (int i=0; i<7; i++){
        printf("%d ", vet[i]);
        if (vet[i]==x)
            vet[i] = y;
    }
    printf("\nVetor alterado: ");
    for (int i=0; i<7; i++)
        printf("%d ",vet[i]);
    return 0;
}
