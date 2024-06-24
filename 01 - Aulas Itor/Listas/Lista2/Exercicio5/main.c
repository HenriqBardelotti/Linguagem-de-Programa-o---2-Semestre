#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[6];
    printf("Digite 6 numeros inteiros: \n");
    for (int i = 0; i<6; i++)
        scanf("%d",&vet[i]);
    for (int i = 0, j=5 ; i<j; i++,j--){
        int aux = vet[j];
        vet[j] = vet[i];
        vet[i] = aux;
    }
    printf("Vetor invertido = ");
    for (int i = 0; i<6; i++)
        printf("%d, ",vet[i]);
    return 0;
}
