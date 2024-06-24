/*João Pedro adora brincar de "Peão Abre-Fecha Porta" durante as férias com seus amigos. Eles definem um
número, e o peão passa por todos os andares (1 <= A >= 100) verificando os apartamentos múltiplos desse
número, alterando o estado das portas (abertas ou fechadas) de cada apartamento. Para garantir sua
vitória e receber um doce, João pediu à turma de ADS que desenvolvesse um programa para determinar o
estado final das portas dos andares. Cada andar contém   4 apartamentos     (por exemplo, no andar 1, há os
apartamentos 11, 12, 13 e 14, no andar 2, há os apartamentos 21, 22, 23 e 24). O programa recebe como
entrada dois números:    A (número de andares) e N (quantidade de números que serão informados pelos
participantes), seguidos pelos números que serão especificado pelos participantes. A saída exibe o estado
das portas de cada andar do prédio, representado por 'O' para aberta e 'C' para fechada.*/

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
                if (vetAux[i][j]%numInformado == 0){//compara se o numero do apartamento é multiplo do numero informado
                    if (andares[i][j] == 'C')
                        andares[i][j] = 'O';
                    else
                        andares[i][j] = 'C';
                }
            }
        }
        N--;//decrementa até executar o looping o número de vezes que o usuário informou como entrada
    }while (N>0);
    for (int i = 0; i<A; i++){
        for(int j = 0; j<4; j++)
            printf("%c",andares[i][j]);
        printf("\n");
    }
    return 0;
}
