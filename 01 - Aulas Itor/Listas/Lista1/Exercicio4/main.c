/*Faça um programa em C (com a estrutura do...while) que leia 5 valores inteiros e:
Encontre e mostre o maior valor;
Encontre e mostre o menor valor;
Calcule e mostre a média dos números lidos;*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char verificacao = 's';
    float maior, menor, num, media;
    do {
        maior = 0;
        menor = 0;
        media = 0;
        int i = 1;
        do{
            printf("Digite N%c%d = ",167,i);
            scanf("%f",&num);
            if (i == 1){
                maior = num;
                menor = num;
                media = num;
            }
            else{
                if(num>maior)
                    maior = num;
                if(num<menor)
                    menor = num;
                media += num;
               }
            i++;
        }while(i<6);
        printf("\nO maior valor digitado eh %.2f",maior);
        printf("\nO menor valor digitado eh %.2f",menor);
        printf("\nA media dos numeros eh %.2f",media/5);
        printf("\nDeseja fazer uma nova operacao? (s/n): ");
        scanf(" %c",&verificacao);
    }while(verificacao != 'n');
    return 0;
}
