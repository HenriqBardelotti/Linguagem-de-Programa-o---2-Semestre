//Fa�a um programa em C que receba a idade de 5 pessoas e mostre quantas s�o maiores que 18 anos.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, contadorIdade;
    for (int i=1; i<6; i++){
        printf("\nInforme a idade da pessoa n%c%d: ",167,i);
        scanf("%d",&idade);
        if (idade>18) // >= se 18 fizer parte do grupo, interpreta��o do enunciada da � entender que 18 n�o faz parte do grupo
            contadorIdade++;
    }
    printf("\nO total de pessoas maiores que 18 anos eh de: %d",contadorIdade);
    return 0;
}
