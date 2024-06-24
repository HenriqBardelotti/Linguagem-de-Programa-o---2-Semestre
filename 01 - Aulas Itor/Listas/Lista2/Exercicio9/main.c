#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5], menor, aux;
    printf("Digite 5 valores inteiros: \n");
    for (int i = 0; i<5; i++)
        scanf("%d",&vet[i]);
    for (int i = 0; i < 4; i++){
        if (vet[i+1] < vet[i]){
            aux = vet[i];
            vet[i] = vet[i+1];
            vet[i+1] = aux;
            i=-1;
        }
    }
    printf("Vetor ordenado = ");
    for (int i=0; i<5; i++)
        printf("%d ",vet[i]);
    return 0;
}
