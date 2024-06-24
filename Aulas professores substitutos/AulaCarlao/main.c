#include <stdio.h>
#include <stdlib.h>

void tabuada();
void testanumero();

int main()
{
    int opcao;
    while (opcao != 9){
        opcao = 0;
        system("cls"); //limpa o lixo de palavras
        printf("\n 1 Tabuada");
        printf("\n 2 Testa Numero");
        printf("\n 3 recursos humanos");
        printf("\n 9 para sair\n\nNumero = ");
        scanf("%d",&opcao);
        if (opcao == 1)
            tabuada();
        if (opcao == 2)
            testanumero();
    }
    return (0);
}

void tabuada(){
    system("cls");
    int tabuada, i = 1, finalizar = 1;
    char condicao;
    while (condicao != 'n'){
        i = 0;
        printf("Informe a tabuada desejada = ");
        scanf("%d",&tabuada);
        while (i <= 10){
            printf("%d x %d = %d\n", tabuada, i, i*tabuada);
            i++;
        }
        printf("Deseja fazer uma nova operacao? (s/n)\n");
        scanf("%s",&condicao);
    }
}

void testanumero(){
    system("cls");
    int num, i, y;
    char condicao;
    while (condicao != 'n') {
        i = 1;
        y = 0;
        printf("Digite um numero: ");
        scanf("%d",&num);
        if (num%2 == 0)
            printf("\nE par");
        else
            printf("\nE impar");
        while (i<=num){
            if (num%i == 0)
                y++;
            i++;
        }
        if (y==2)
            printf("\nEh primo");
        else
            printf("\nNao eh primo");
        printf("\nDeseja fazer uma nova operacao? (s/n)\n");
        scanf("%s",&condicao);
    }
}
