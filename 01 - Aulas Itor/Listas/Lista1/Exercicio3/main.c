//Faça um programa em C que mostre a tabuada de qualquer número escolhido pelo usuário (considerar tabuada do número 1 ao 10).
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Informe o numero que deseja saber sua tabuada: ");
    scanf("%d",&num);
    for (int i = 1; i < 11; i++)
        printf("\n%d x %d = %d", num, i, num*i);
    return 0;
}
