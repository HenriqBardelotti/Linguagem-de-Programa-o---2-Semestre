#include <stdio.h>
#include <stdlib.h>

int main()
{
    int npessoas, i, idade, maiorIdade;
    float peso, menorPeso, altura, somaAltura = 0, maiorAltura = 0, m = 0, h = 0;
    char sexo, aux;
    do {
        printf("Informe o numero de pessoas: ");
        scanf("%d",&npessoas);
        for (i = 0; i<npessoas; i++){
            printf("\nDigite a altura da pessoa n%c%d: ",167,i+1);
            scanf("%f",&altura);
            somaAltura += altura;
            printf("\nDigite a idade da pessoa n%c%d: ",167,i+1);
            scanf("%d",&idade);
            if (i == 0)
                maiorIdade = idade;
            else
                if (idade>maiorIdade)
                    maiorIdade = idade;
            printf("\nDigite o peso da pessoa n%c%d: ",167,i+1);
            scanf("%f",&peso);
            if (i == 0)
                menorPeso = peso;
            else
                if (peso<menorPeso)
                    menorPeso = peso;
            printf("\nInforme o sexo da pessoa n%c%d (M/H) :",167,i+1);
            scanf(" %c",&sexo);
            if (sexo == 'M' || sexo == 'm')
                m++;
            else{
                h++;
                if (altura>maiorAltura)
                        maiorAltura = altura;
            }
        }
        printf("\nA soma das alturas = %.2f ",somaAltura);
        printf("\nA maior idade = %.2d", maiorIdade);
        printf("\nO menor peso = %.2f",menorPeso);
        printf("\nPorcentagem de homens = %.2f%\nPorcentagem de mulheres = %.2f%", (h*100)/npessoas, (m*100)/npessoas);
        printf("\nMaior altura entre os homens = %.2f ",maiorAltura);
        printf("\n\nDeseja fazer uma nova operacao? (s/n):    ");
        scanf(" %c",&aux);
        aux = toupper(aux);
    }while (aux != 'N');
    return 0;
}
