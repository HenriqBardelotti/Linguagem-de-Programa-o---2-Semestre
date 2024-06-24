#include <stdio.h>

int main() {

    int vet[3];
    for (int i = 0; i < 3; i++)
        scanf("%d",&vet[i]);
    for (int i = 0; i < 3; i++)
        printf("%d\n",vet[i]);
    int menor = vet[0];
    for (int i = 0; i < 2; i++){
        for (int j = i+1; j < 3; j++){
            if (vet[j] < vet[i]){
                int aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
        printf("%d\n",vet[i]);
    return 0;
}
