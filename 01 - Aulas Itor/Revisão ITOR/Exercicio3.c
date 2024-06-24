//Escreva um programa em C que leia 20 números inteiros e determine quantos são pares e quantossão ímpares. Armazene os pares em um vetor e os ímpares em outro.

#include <stdio.h>

int main(){
    int par[20], impar[20], auxPar = 0, auxImpar = 0, num;
    for (int i = 0; i < 20; i++){
        printf("N%d: ",i+1);
        scanf("%d",&num);
        if (num%2 == 0){
            par[auxPar] = num;
            auxPar++;
        }
        else{
            impar[auxImpar] = num;
            auxImpar++;
        }
    }
    printf("Quantidade de pares: %d\nQuantidade de impares: %d\nVetor par:",auxPar,auxImpar);
    for(int i = 0; i < auxPar; i++)
        printf(" %d",par[i]);
    printf("\nVetor impar:");
    for (int i = 0; i < auxImpar; i++)
        printf(" %d",impar[i]);

    return 0;
}

