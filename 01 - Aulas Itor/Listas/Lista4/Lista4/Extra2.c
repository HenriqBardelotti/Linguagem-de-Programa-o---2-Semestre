/*  SomadeD�gitosRecursiva:
    Escreva uma fun��o recursiva para calcular a soma dos d�gitos de um n�mero inteiro dado.
    Por exemplo, asoma dos d�gitos de 123 � 1 + 2 + 3 = 6.*/

#include <stdio.h>
#include <string.h>
#include "funcoes.c"

int somar(int aux, char numero[aux+1]){
    int soma = 0;
    for (int i = 0; i < aux; i++)
        soma += (int)numero[i] - 48;
    return soma;
}


int main(){
    char num[100];
    scanf("%s",&num);
    printf("Soma = %d", somar(strlen(num),num));
    return 0;
}
