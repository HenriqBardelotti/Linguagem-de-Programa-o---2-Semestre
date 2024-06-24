#include <stdio.h>
int main() {
      int vet[10], par=0,impar=0;
      for (int i=0; i<10;i++){
            printf("\nInforme valor %d: ",i+1);
            scanf("%d",&vet[i]);
       }
       for (int i=0; i<10; i++){
               if(vet[i]%2 == 0)
                       par++;
               else
                       impar++;
       }
       printf("\nQuantidade numeros pares no vetor = %d\nQuantidade de numeros impares no vetor = %d", par, impar);
    return 0;
}
