#include <stdio.h>
#include <stdlib.h>

int fatorial(int numero){
    int resultado;
    if (numero == 0)
        resultado = 1;
    else
        resultado = numero * fatorial(numero - 1);
    return resultado;
}
int main()
{
    int num, resultado;
    printf("Informe um numero: ");
    scanf("%d",&num);
    resultado = fatorial(num);
    printf("\nFatorial de %d = %d",num, resultado);
    return 0;
}
