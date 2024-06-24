#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[8], num;
    for (int i=0; i<8; i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&vet[i]);
    }
    printf("Digite um numero para saber se ele esta no vetor: ");
    scanf("%d",&num);
    for (int i=0; i<8; i++){
        if (num==vet[i]){
            printf("Sim");
            break;
        }
        else if (i==7 && num!=vet[i])
            printf("Nao");
    }
    return 0;
}
