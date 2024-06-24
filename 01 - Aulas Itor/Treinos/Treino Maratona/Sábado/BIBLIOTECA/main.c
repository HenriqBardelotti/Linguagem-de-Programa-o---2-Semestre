#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numLivros;
    char alfabeto[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char livrosNaEstante[27];
    int alfabetoAux[26];
    //converte para ASCII
    for (int i = 0; i < 27; i++){
        alfabetoAux[i] = (int)alfabeto[i]; // Alfabeto em ASCII
    }
    scanf("%d",&numLivros);
    scanf("%s",&livrosNaEstante);

    /*int tamanhoString; //recebe o tamanho da string
    tamanhoString = strlen(livrosNaEstante);
    printf("\nTamanho = %d",tamanhoString);*/

    int livros[numLivros];

    //Converte a entrada para ASCII
    for (int i = 0; i < numLivros; i++){
        livros[i] = (int)livrosNaEstante[i];
    }

    int auxPosicao = 0;
    int comparacao[numLivros], auxComparacao[numLivros];
    for (int i = 0; i < numLivros; i++){
        for (int j = 0; j<27; j++)
            if (livros[i] == alfabetoAux[j]){
                comparacao[auxPosicao] = livros[i];
                auxComparacao[auxPosicao] = livros[i];
                auxPosicao++;

            }
    }
    for (int i = 0; i < numLivros; i++){
        for (int j = i+1; j < numLivros; j++){
            if (comparacao[i] > comparacao[j]){
                int aux = comparacao[i];
                comparacao[i] = comparacao[j];
                comparacao[j] = aux;
            }
        }
    }
    for (int i = numLivros; i>=0; i--){
        if (comparacao[i] != auxComparacao[i]){
            int auxJ = j-1;
            while(comparacao[i] != auxComparacao[i]){
                if (comparacao[i] == auxComparacao[auxJ]){

                }
            }
        }
    }



    return 0;
}
