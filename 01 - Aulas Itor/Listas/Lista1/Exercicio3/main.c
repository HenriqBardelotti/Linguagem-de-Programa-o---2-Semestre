//Fa�a um programa em C que mostre a tabuada de qualquer n�mero escolhido pelo usu�rio (considerar tabuada do n�mero 1 ao 10).
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
