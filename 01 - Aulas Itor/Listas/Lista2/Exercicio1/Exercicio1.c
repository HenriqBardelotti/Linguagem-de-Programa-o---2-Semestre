#include <stdio.h>
int main() {
      int vet[8], soma = 0;
      for (int i = 0; i < 8; i++){
             printf("\nInforme valor %d: ",i+1);
             scanf("%d",&vet[i]);
      }
      //Poderia j� incluir a vari�vel soma junto com a leitura e agilizar o c�digo, mas como provavelmente n�o � o prop�sito do exerc�cio, segue resolu��o
      for(int i = 0; i < 8; i++)
            soma += vet[i];
      printf("\nA soma dos elementos = %d", soma);
      return 0;
}
