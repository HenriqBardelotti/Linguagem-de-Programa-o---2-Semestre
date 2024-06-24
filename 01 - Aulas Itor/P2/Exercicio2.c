#include <stdio.h>

int numPrimos[10], auxPrimo = 0;

void primos(int num);

int main(){
    int num[10], maior, menor, par = 0, impar = 0;
    float media, soma = 0;
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
        primos(num[i]);
        if (num[i]%2 == 0)
            par++;
        else
            impar++;
    }
    media = soma/10;
    printf("Vetor inverso:");
    for (int i = 0; i < 10; i++)
        printf(" %d",num[i]);
    printf("\nPrimos:");
    for (int i = 0; i < auxPrimo; i++)
        printf(" %d", numPrimos[i]);
    printf("\nMenor: %d\nMaior: %d\nMedia = %.2f\nSoma = %.0f", menor, maior, media, soma);
    printf("\nPares = %d\nImpares = %d", par, impar);
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10-1-i; j++ ){
            if (num[i] < num[i+1]){
                int aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;
            }
        }
    }
    printf("\nOrdenado decrescente:");
    for (int i = 0; i < 10; i++)
        printf(" %d", num[i]);
    return 0;
}

void primos(int num){
    if (num == 2 || num == 3){
        numPrimos[auxPrimo] = num;
        auxPrimo++;
    }
    else{
        int aux = 0;
        for (int i = 2; i < num; i++){
            if (num%i == 0){
                aux++;
                break;
            }
        }
        if (aux == 0 && num > 1){
            numPrimos[auxPrimo] = num;
            auxPrimo++;
        }
    }
}
