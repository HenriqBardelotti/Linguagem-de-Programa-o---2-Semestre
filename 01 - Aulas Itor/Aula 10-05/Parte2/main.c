#include <stdio.h>
#include <stdlib.h>

int imprimir(int numero){
    if (numero == 0){
        printf("%d ",numero);
        return;
    }
    else{
        imprimir(numero-1);
        printf("%d ",numero);
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    imprimir(num);
    return 0;
}
