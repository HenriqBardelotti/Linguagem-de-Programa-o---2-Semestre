#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    do {
        scanf("%d",&ano);
        if (ano < 400)
        {
            if (ano%4 == 0 && ano%100 != 0)
                printf("\n%d eh bissexto",ano);
            else
                printf("\n%d nao eh bissexto",ano);
        }
    }while(ano!=0);
    return 0;
}
