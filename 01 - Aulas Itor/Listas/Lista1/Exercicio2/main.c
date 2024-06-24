/*Faça um programa em C que leia o salário de um funcionário e calcule o desconto de INSS dada a tabela a seguir:

Salário de contribuição	Alíquota
até R$ 1.212,00	7,5%
R$ 1.212,01 até R$2.427,35	9%
R$ 2.427,36 até R$3.641,03	12%
R$ 3.641,04 até R$7.087,22	14%
acima R$7.087,22	R$828,39*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Infome o salario: ");
    scanf("%f",&salario);
    if (salario <= 1212)
        printf("INSS = R$%.2f, Salario descontado INSS = R$%.f", salario*0.075, salario-salario*0.075);
    else if (salario > 1212 && salario <= 2427.35)
        printf("INSS = R$%.2f, Salario descontado INSS = R$%.f", salario*0.09, salario-salario*0.09);
    else if (salario > 2427.35 && salario <= 3641.03)
        printf("INSS = R$%.2f, Salario descontado INSS = R$%.f", salario*0.12, salario-salario*0.12);
    else if (salario > 3641.03 && salario <= 7087.22)
        printf("INSS = R$%.2f, Salario descontado INSS = R$%.f", salario*0.14, salario-salario*0.14);
    else
        printf("INSS = R$828,39, Salario descontado INSS = R$%.f", salario-828.39);
    return 0;
}
