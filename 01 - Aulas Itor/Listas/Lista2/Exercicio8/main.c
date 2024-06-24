#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[6], x, aux = 0;
    printf("Digite 6 numeros inteirios:\n");
    for (int i = 0; i < 6; i++)
       scanf("%d",&vet[i]);
       printf("Informe x: ");
       scanf("%d",&x);
       for (int i = 0; i < 6 - aux; i++){
           while (vet[i] == x){ //usei while ja que nao tem como saber quantos numeros consecultivos iguais a x possui no vetor
               for (int j = i; j < 6 - aux; j++){ //-aux pq o vetor reduz de tamanho conforme as ocorrencias iguais a x
                    vet[j] = vet[j+1];
               }
               aux++;
               if (aux == 6)//se aux chegar a 6 significa que todos os elementos do vetor são iguais a x e quebra o laço
                break;
           }

       }
       printf("vetor = [ ");
       for (int i = 0; i < 6-aux; i++)
           printf("%d ",vet[i]);
       printf("]");
    return 0;
}
