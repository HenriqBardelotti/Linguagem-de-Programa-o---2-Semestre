#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioBruto, salarioLiquido, INSS;
    printf("Informe o salario bruto: \n");
    scanf("%f",&salarioBruto);
    if (salarioBruto < 1412.00)
        INSS = salarioBruto*0.075;
    else if (salarioBruto <= 2666.63)
        INSS = (salarioBruto-1412)*0.09+105.9;
    else if (salarioBruto <= 4000.03)
        INSS = (salarioBruto-2666.03)*0.12+105.90+112.92;
    else
        INSS = (7786.02-4000,03)*0.14+105.90+112.92+160;
    salarioLiquido = salarioBruto-INSS;
    printf("Salario = R$%.2f", salarioLiquido);
    return 0;
}
