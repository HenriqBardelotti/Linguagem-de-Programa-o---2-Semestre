//Faça um programa em C que exiba na tela os números ímpares entre 100 e 300.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 100; i < 301; i++)
        if(i%2!=0)
            printf(" %d,",i);
    return 0;
}
