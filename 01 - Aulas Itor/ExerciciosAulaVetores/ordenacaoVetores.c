#include <stdio.h>
int main()
{
    int vet[15] = {38,3,5,44,15,36,26,27,47,2,46,4,19,50,48};
    for (int i=0; i<15;i++){
        for (int j=0;j<14-i;j++){
            if (vet[j]>vet[j+1]){
                int aux = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = aux;
            }
        }
    }
    for(int k = 0; k < 15; k++)
        printf("%d, ",vet[k]);
    return 0;
}
