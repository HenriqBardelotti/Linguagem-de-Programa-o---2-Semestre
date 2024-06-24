/*Jo�o Pedro adora brincar de "Pe�o Abre-Fecha Porta" durante as f�rias com seus amigos. Eles definem um
n�mero, e o pe�o passa por todos os andares (1 <= A >= 100) verificando os apartamentos m�ltiplos desse
n�mero, alterando o estado das portas (abertas ou fechadas) de cada apartamento. Para garantir sua
vit�ria e receber um doce, Jo�o pediu � turma de ADS que desenvolvesse um programa para determinar o
estado final das portas dos andares. Cada andar cont�m   4 apartamentos     (por exemplo, no andar 1, h� os
apartamentos 11, 12, 13 e 14, no andar 2, h� os apartamentos 21, 22, 23 e 24). O programa recebe como
entrada dois n�meros:    A (n�mero de andares) e N (quantidade de n�meros que ser�o informados pelos
participantes), seguidos pelos n�meros que ser�o especificado pelos participantes. A sa�da exibe o estado
das portas de cada andar do pr�dio, representado por 'O' para aberta e 'C' para fechada.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, N, numInformado;
    scanf("%d %d",&A,&N);
    int vetAux[A][4];
    char andares[A][4];
    for (int i = 0; i<A; i++){
        for(int j = 0; j<4; j++){
            andares[i][j] = 'C';//Cria o estado da porta, como inicial fechado
            vetAux[i][j] = (i+1)*10+j+1;//Armazena o numero do apartamento
        }
    }
    do{
        scanf("%d",&numInformado);
        for (int i = 0; i < A; i++){
            for (int j = 0; j < 4; j++){
                if (vetAux[i][j]%numInformado == 0){//compara se o numero do apartamento � multiplo do numero informado
                    if (andares[i][j] == 'C')
                        andares[i][j] = 'O';
                    else
                        andares[i][j] = 'C';
                }
            }
        }
        N--;//decrementa at� executar o looping o n�mero de vezes que o usu�rio informou como entrada
    }while (N>0);
    for (int i = 0; i<A; i++){
        for(int j = 0; j<4; j++)
            printf("%c",andares[i][j]);
        printf("\n");
    }
    return 0;
}
