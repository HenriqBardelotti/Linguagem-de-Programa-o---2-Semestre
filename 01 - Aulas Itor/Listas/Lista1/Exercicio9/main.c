/*A prefeitura de uma cidade fez uma pesquisa com 5 pessoas, coletando dados sobre o sal�rio e o n�mero de filhos. A prefeitura deseja saber:
A m�dia do sal�rio dessas pessoas
A m�dia do n�mero de filhos
O maior sal�rio
A percentagem de pessoas com sal�rios at� R$ 150,00*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, maiorSalario, mediaSalario = 0, mediaFilhos = 0, salarioAte150 = 0;
    int numFilhos = 0;
    for (int i=1; i<6; i++){
        printf("\nSalario pessoa N%c%d: ",167,i);
        scanf("%f",&salario);
        printf("\nNumero de filhos pessoa N%c%d: ",167,i);
        scanf("%d",&numFilhos);
        if (i==1){
            maiorSalario = salario;
            if (salario <= 150)
                salarioAte150++;
        }
        else {
            if (salario>maiorSalario)
                maiorSalario = salario;
            if (salario <= 150)
                salarioAte150++;
        }
        mediaSalario += salario;
        mediaFilhos += numFilhos;
    }
    printf("\nMedia de salarios = R$%.2f",mediaSalario/5);
    printf("\nMedia numero de filhos = %.2f", mediaFilhos/5); //como � m�dia, presumi que pode ser numero fracionado
    printf("\nMaior salario = R$%.2f",maiorSalario);
    printf("\nPercentagem de pessoas com salario ate R$150,00 = %.2f%c",salarioAte150/5*100,37);
    return 0;
}
