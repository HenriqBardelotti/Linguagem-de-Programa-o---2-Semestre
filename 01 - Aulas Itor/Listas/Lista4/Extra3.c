/*FibonacciRecursivo: Escreva uma função recursiva para calcular o ( n )-ésimo termo da sequência de Fibonacci. A sequência deFibonacci é definida como: ( F(0) = 0, F(1) = 1 ) e ( F(n) = F(n-1) + F(n-2) ) para ( n \geq 2 ).*/

#include <stdio.h>
#include "funcoes.c"

int fibonacci(int n){
    if (n == 0)
        return 0;
    else if (n > 1)
        return fibonacci(n-1) + fibonacci(n-2);
    else
        return 1;
}

int main(){
    int num;
    scanf("%d",&num);
    int vet[num];
    for (int i = 1; i <= num; i++)
        printf("%d ",fibonacci(i));
    return 0;
}
