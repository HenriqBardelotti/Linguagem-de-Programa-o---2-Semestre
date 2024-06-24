#include <stdio.h>
int main(){
    int vet[7], maior, menor;
    printf("Informe 7 valores inteiros\n");
    for (int i = 0; i<7; i++){
        printf("Valor %d: ",i+1);
        scanf("%d",&vet[i]);
    }
    for (int i = 0; i<6; i++){
        if (i == 0){
            maior = vet[i];
            menor = vet[i];
        }
        else if (vet[i] > maior)
            maior = vet[i];
        else if (vet[i] < menor)
            menor = vet[i];
    }
    printf("Maior valor = %d\nMenor valor = %d",maior,menor);
    return 0;
}
