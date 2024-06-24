#include <stdio.h>

int main() {

    double salario, novoSalario, reajuste;
    int percentual;
    scanf("%lf",&salario);
    if (salario<=400){
        novoSalario = salario*1.15;
        reajuste = novoSalario - salario;
        percentual = 15;
    }
    else if (salario>400 && salario <= 800){
        novoSalario = salario*1.12;
        reajuste = novoSalario - salario;
        percentual = 12;
    }
    else if (salario>800 && salario <=1200){
        novoSalario = salario*1.1;
        reajuste = novoSalario - salario;
        percentual = 10;
    }
    else if (salario>1200 && salario < 2000){
        novoSalario = salario*1.07;
        reajuste = novoSalario - salario;
        percentual = 7;
    }
    else{
        novoSalario = salario*1.04;
        reajuste = novoSalario - salario;
        percentual = 4;
    }
    printf("Novo salario: %.2lf\n",novoSalario);
    printf("Reajuste ganho: %.2lf\n",reajuste);
    printf("Em percentual: %d %\n",percentual);
    return 0;
