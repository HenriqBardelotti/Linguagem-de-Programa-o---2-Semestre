#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[100], sobrenome[100];
    scanf("%s %[^\n]", nome, sobrenome);
    printf("%s %s", nome, sobrenome);
}


/*typedef struct{
    char nome[100];
    int nomeASCII[100];
}Pessoa;

int main(){
    Pessoa pessoa1[3];
    for (int i = 0; i < 3; i++){
        printf("Nome da pessoa %d: ",i);
        scanf("%[^\n]", pessoa1[i].nome);
        getchar();
    }

    for (int i = 0; i < 3 - 1; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            char aux1[strlen(pessoa1[j].nome)+1];
            char aux2[strlen(pessoa1[j+1].nome)+1];
            strupr(strcpy(aux1,pessoa1[j].nome));
            strupr(strcpy(aux2,pessoa1[j+1].nome));
            if (strcmp(aux1, aux2) > 0) {
                Pessoa auxPessoa = pessoa1[j];
                pessoa1[j] = pessoa1[j+1];
                pessoa1[j+1] = auxPessoa;
            }
        }
    }
    for (int i = 0; i < 3; i++)
        printf("%s\n",pessoa1[i].nome);
    return 0;
    printf("\n\n ")
}


/*            if (strlen(aux1) > strlen(aux2))
                maior = strlen(aux1);
            else
                maior = strlen(aux2);
            for (int x = i; x >= 0; x++){
                if ( (int)aux2[x] < (int)aux2 ){
                    char aux[100] = pessoa1[i-1].nome;
                    pessoa1[i-1].nome = pessoa1[i].nome;
                    pessoa1[i].nome = aux;
                    break;
                }
            }*/


            /*int vetAuxNomeAtual[strlen(pessoa1[i].nome)];
        if (i > 0){
            int maior, menor;
            char aux1[100];
            char aux2[100];
            strupr(strcpy(aux1,pessoa1[i].nome));
            strupr(strcpy(aux2,pessoa1[i-1].nome));
            for (int j = 0; j < strlen(aux1); i++)
                vetAuxNomeAtual[j] = (int)aux1;
            int vetAuxNomeAtual2[strlen(pessoa1[i-1].nome)];
            for (int j = 0; j < strlen(aux2); j++)
                vetAuxNomeAtual2[j] = (int)aux2;
            if (strlen(aux1) > strlen(aux1)){
                maior = strlen(aux1);
                menor = strlen(aux2);
            }

            else{
                maior = strlen(aux2);
                menor = strlen(aux1);
            }
            for (int j = 0; j < maior; j++){
                for (int k = 0; k < menor; k++){
                    if (vetAuxNomeAtual[k] > vetAuxNomeAtual2[k+1]){
                        char auxOrdenacao[100];
                        strcpy(auxOrdenacao, pessoa1)
                    }
                }
            }
        }*/
