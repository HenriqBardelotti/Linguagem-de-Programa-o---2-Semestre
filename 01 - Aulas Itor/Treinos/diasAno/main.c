#include <stdio.h>
#include <stdlib.h>

int verificacao(int mes){
    if (mes < 8 && mes%2 != 0)
        printf("Tem 31 dias\n");
    else if (mes < 8 && mes%2 == 0)
        printf("Tem 30 dias\n");
    else if (mes > 7 && mes%2 == 0)
        printf("Tem 31 dias\n");
    else
        printf("Tem 30 dias\n");
}

int main()
{
    int mes;
    do{
        scanf("%d",&mes);

    }while(mes!=0);
    return 0;
}
