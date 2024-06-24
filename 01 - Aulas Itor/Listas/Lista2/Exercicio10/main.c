#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[8];
    printf("Digite 8 valores inteiros:\n");
    for (int i = 0; i<8; i++)
        scanf("%d",&vet[i]);
    for (int i = 1; i<8; i++){
        vet[i] += vet[i-1]; //se for para fazer com um vetor resultante, só fazer vetResultante[i] = vet[i] + vet[i-1], atribuir a posição 0 do vetResultante para ser igual do vet, antes de entrar no looping e por fim imprimir o vetor resultante
    }
    printf("Soma comulativa = ");
    for (int i = 0; i<8; i++)
        printf("%d ",vet[i]);
    return 0;
}
