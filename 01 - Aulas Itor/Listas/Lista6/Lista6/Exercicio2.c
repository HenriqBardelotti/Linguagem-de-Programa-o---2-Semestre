#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char titutlo[100];
    int anoPubli;
}Blog;

void lerPost(Blog cadastro[]);
int passarArquivo(Blog cadastro[]);

int main(){
    Blog cadastro[3];
    lerPost(cadastro);
    passarArquivo(cadastro);
    return 0;
}

void lerPost(Blog cadastro[]){
    for (int i = 0; i < 3; i++){
        system("cls");
        printf("Informe o nome do titulo %d: ", i+1);
        scanf("%[^\n]", cadastro[i].titutlo);
        while (getchar() != '\n');
        printf("Infore o ano de publicacao: ");
        scanf("%d", &cadastro[i].anoPubli);
        while (getchar() != '\n');
    }
}

int passarArquivo(Blog cadastro[]){
    FILE *arquivo = fopen("blog.txt", "w");
    if (arquivo == NULL){
        printf("Error");
        return 1;
    }
    for (int i = 0; i < 3; i++){
        fprintf(arquivo, "Titulo: %s\n", cadastro[i].titutlo);
        fprintf(arquivo, "Ano publicacao: %d\n\n", cadastro[i].anoPubli);
    }
    return fclose(arquivo);
}
