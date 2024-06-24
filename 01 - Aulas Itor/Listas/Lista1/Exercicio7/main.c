/*Faça um programa em C que receba um número inteiro e positivo, e diga se esse número é primo ou não. Obs: Um número é primo somente quando for divisível por 1 e por ele mesmo.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char verificacao = 's';
    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d",&num);
        if (num <= 0 || num == 1)
            printf("\nNao eh primo");
        else if (num == 2)
            printf("\nEh primo");
        else if (num%2==0 || num%3==0)
            printf("\nNao eh primo");
        else
            printf("\nEh primo");
        printf("\nDeseja continuar? (s/n): ");
        scanf(" %c",&verificacao);
    }while (verificacao !='n' && verificacao != 'N');
    return 0;
}

/*int main()
{
    int num;
    char verificacao = 's';
    do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d",&num);
        if (num <= 0 || num == 1)
            printf("\nNao eh primo");
        else if (num == 2)
            printf("\nEh primo");
        else{
            for(int i=2; i < num; i++){
                if(num%i==0 || num%3==0){
                    printf("\nNao eh primo");
                    break;
                }
                else{
                    printf("\nEh primo");
                    break;
                }
            }
        }
        printf("\nDeseja continuar? (s/n): ");
        scanf(" %c",&verificacao);
    }while (verificacao !='n' && verificacao != 'N');
    return 0;
}*/
