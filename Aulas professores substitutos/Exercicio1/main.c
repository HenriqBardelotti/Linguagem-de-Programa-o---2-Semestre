#include <stdio.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, b, soma;
    printf("Entre com o primeiro n�mero: ");
    scanf("%d",&a);
    printf("Entre com o segundo n�mero: ");
    scanf("%d",&b);
    printf("%d + %d = %d",a,b,a+b);
    return 0;
}

