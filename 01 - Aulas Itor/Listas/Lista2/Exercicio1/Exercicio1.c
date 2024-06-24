#include <stdio.h>
int main() {
      int vet[8], soma = 0;
      for (int i = 0; i < 8; i++){
             printf("\nInforme valor %d: ",i+1);
             scanf("%d",&vet[i]);
      }
      //Poderia já incluir a variável soma junto com a leitura e agilizar o código, mas como provavelmente não é o propósito do exercício, segue resolução
      for(int i = 0; i < 8; i++)
            soma += vet[i];
      printf("\nA soma dos elementos = %d", soma);
      return 0;
}
