#include <stdio.h>

int main(){
    FILE *arquivo;
    char texto[256];
    int num = 10;
    arquivo = fopen("contatos.txt", "a");
    if (arquivo == NULL){
        printf("Error");
        return 1;
    }
    /*while (fgets(texto, 256, arquivo) != NULL){
        printf("%s\n", texto);
    }*/
    fprintf(arquivo, "Sextou %d", num);
    fclose(arquivo);
    return 0;
}
