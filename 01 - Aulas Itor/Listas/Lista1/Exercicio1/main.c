//Criar um programa em C que converta um valor em reais (BRL) para dólares (USD), usando a cotação do dólar informada pelo usuário.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cotacao, real;
    printf("Informe a cotacao atual do dollar: ");
    scanf("%f",&cotacao);
    printf("\nInforme a quantia em real que deseja converter: ");
    scanf("%f",&real);
    printf("R$%.2f convertido para dolar, com a cotacao de US$%.2f = US$%.2f", real, cotacao, real/cotacao);
    return 0;
}
