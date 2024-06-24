#include <stdio.h>

int main(){
    FILE *arquivo = fopen("teste.txt", "w");
    if (arquivo == NULL){
        printf("Falha ao abrir o arquivo");
        return 1;
    }
    fclose(arquivo);

    return 0;
}
