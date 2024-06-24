#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    int faltas;
    do{
        scanf("%f",&n1);
        scanf("%f",&n2);
        scanf("%d",&faltas);
        if(((n1+n2)/2) > 6 && faltas < 10)
            printf("\nAprovado");
        else if (n1>=0 && n2>=0 && faltas>=0)
            printf("\nReprovado");
    }while(n1>0 && n2>0 && faltas>0);
    return 0;
}
