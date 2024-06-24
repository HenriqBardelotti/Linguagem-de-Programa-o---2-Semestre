#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2, n3, mediaAritmetica, mediaPonderada, mediaGeometrica;
    printf("Digite N1= ");
    scanf("%f",&n1);
    printf("Digite N2= ");
    scanf("%f",&n2);
    printf("Digite N3= ");
    scanf("%f",&n3);
    mediaAritmetica = (n1+n2+n3)/3;
    mediaPonderada = (n1+n2+2*n3)/4;
    mediaGeometrica = cbrt(n1*n2*n3);
    printf("Media Aritmetica = %.2f\nMedia Ponderada = %.2f\nMedia Geometrica = %.2f",mediaAritmetica,mediaPonderada,mediaGeometrica);
    return 0;
}
