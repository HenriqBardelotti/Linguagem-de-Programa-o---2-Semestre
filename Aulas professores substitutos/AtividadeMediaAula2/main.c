#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    printf("Infome a nota: ");
    scanf("%f",&nota);
    if (nota >= 6)
        printf("Aprovado");
    else if (nota < 6 && nota >= 4)
            printf("Exame");
    else
        printf("Reprovado");
    //printf((nota > 6) ? "Aprovado" : (nota >= 4 && nota < 6) ? "Exame" : "Reprovado" );
    return 0;
}
