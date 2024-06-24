#include <stdio.h>
#include <stdlib.h>

int verrificar(int numero){
    char parImpar;
    if (numero%2==0)
        printf("Sim\n");
    else
        printf("Nao\n");
    imprimir(numero);
}

int imprimir(int tabuada){
    for (int i = 1; i < 11; i++)
        printf("%d x %d = %d\n",tabuada,i,tabuada*i);
    return tabuada;
}

int main()
{
    int num;
    scanf("%d",&num);
    verrificar(num);

    return 0;
}
