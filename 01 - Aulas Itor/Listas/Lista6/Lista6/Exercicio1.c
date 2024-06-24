#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("mensagem.txt","r");
    char texto[250];
    if (arquivo == NULL){
        printf("Error");
        return 1;
    }
    while (fgets(texto, 2, arquivo)!= NULL)
        printf("%s", texto);
    fclose(arquivo);
    return 0;
}
