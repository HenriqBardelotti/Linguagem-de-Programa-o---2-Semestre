#include <stdio.h>
#include <stdlib.h>

void trocar(int *num1, int *num2){
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
    printf("%d %d",*num1,*num2);
}

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    trocar(&a,&b);
    return 0;
}
