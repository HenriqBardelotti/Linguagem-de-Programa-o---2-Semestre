#include <stdio.h>
#include <stdlib.h>

int main()
{
    int npessoas, i;
    float altura, total = 0, aux, maior;
    printf("Infome o numero de pessoas: ");
    scanf("%d",&npessoas);
    for (i = 0; i < npessoas; i++){
        printf("\nInfome a altura da pessoa n%c%d: ",167,i+1);
        scanf("%f",&altura);
        total += altura;
        if (i==0)
            maior = altura;
        else{
            if (altura>maior)
                maior = altura;
        }
    }
    system("cls");
    printf("\nA soma das alturas eh = %.2f m", total);
    printf("\nMedia de alturas = %.2f m", total/npessoas);
    printf("\nAmior altura eh: %.2f m", maior);
    return 0;
}
