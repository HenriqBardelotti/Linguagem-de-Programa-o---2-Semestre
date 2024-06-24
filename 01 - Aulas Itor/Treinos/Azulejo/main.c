#include <stdio.h>
#include <stdlib.h>

int notas(int vetQuantidade[], int dinheiro){
    int vet[7] = {100,50,20,10,5,2,1};
    for (int i = 0; i<7; i++){
        vetQuantidade[i] = dinheiro/vet[i];
        dinheiro = dinheiro - vetQuantidade[i]*vet[i];
    }
    return 0;
}

int main()
{
    double valor;
    int vet[7], vet2[7] = {100,50,20,10,5,2,1};
    scanf("%lf",&valor);
    printf("%.0lf\n",valor);
    notas(vet, valor);
    for (int i = 0; i<7; i++)
        printf("%d nota(s) de R$%d,00\n",vet[i],vet2[i]);
    return 0;
}
