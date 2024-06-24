#include <stdio.h>
#include "funcoes.c"

int fatorial(int n){
    if (n == 0)
        return 1;
    else
        return n = n * fatorial(n - 1);
}

int main(){
    int num;
    scanf("%d",&num);
    printf("Fatorial de %d = %d",num, fatorial(num));
    return 0;
}
