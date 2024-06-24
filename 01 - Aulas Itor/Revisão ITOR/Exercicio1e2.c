/*Crie um programa em C que leia 10 números inteiros e os armazene em um vetor. Em seguida,exiba os números na ordem inversa à que foram inseridos.
Modifique o programa do exercício 1 para calcular e exibir o maior e o menor número, a soma e amédia dos valores no vetor.*/

#include <stdio.h>

int main(){
    int num[10], maior, menor, soma = 0;
    for (int i = 9, j = 1; i > -1; i--, j++){
        printf("N%d: ",j);
        scanf("%d",&num[i]);
        if (i == 9){
            maior = num[i];
            menor = num[i];
        }
        else if(num[i] > maior)
            maior = num[i];
        else if(num[i] < menor)
            menor = num[i];
        soma += num[i];
    }
    printf("Vetor inverso:");
    for (int i = 0; i < 10; i++)
        printf(" %d",num[i]);
    printf("\nMenor: %d\nMaior: %d\nSoma = %d", menor, maior, soma);
    return 0;
}
