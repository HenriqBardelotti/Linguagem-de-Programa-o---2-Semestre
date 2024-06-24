#include <stdio.h>
#include <locale.h>

int main(){
    FILE *arquivo;
    setlocale(LC_ALL,"Portuguese.UTF-8");
    char texto[256];
    arquivo = fopen("contatos.txt", "r");
    if (arquivo == NULL){
        printf("Error");
        return 1;
    }
    while (fgets(texto, 256, arquivo) != NULL){
        printf("%s\n", texto);
    }
    fclose(arquivo);
    return 0;
}
