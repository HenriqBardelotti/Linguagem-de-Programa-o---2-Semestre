#include <stdio.h>
#include <stdlib.h>

int soma(int *vetor, int tamanho){
    int soma=0;
    for (int i=0; i<tamanho; i++){
        soma += *vetor+i;
    }
    return soma;
}

int main()
{
    int vet[5] = {1,2,3,4,5};
    int resultado = soma(&vet,5);
    printf("Soma = %d",resultado);
    return 0;
}
