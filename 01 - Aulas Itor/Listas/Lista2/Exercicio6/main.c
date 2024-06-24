#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[9], soma = 0;
    float mediaAritmetica;
    printf("Informe 9 numeros inteiros: ");
    for (int i=0; i<9; i++){
        scanf("%d",&vet[i]);
        soma += vet[i];
    }
    printf("Media aritmetica = %d", soma/9);
    return 0;
}
