/*Escreva um programa que leia o arquivo blog.txt e armazene os dados dos 5 posts em umaestrutura. Em seguida, apresente seus dados no seguinte formato (Titulo: %s\n Postado em:%d\n) e exiba também os títulos dos artigos com a menor e a maior ano de publicação.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char titutlo[100];
    int anoPubli;
}Blog;

int armazenarDados(Blog posts[]);
void ordenarAno(Blog posts[]);

int main(){
    Blog posts[5];
    armazenarDados(posts);
    ordenarAno(posts);
    for (int i = 0; i < 5; i++){
        printf("Titulo: %s\nPostado em: %d\n\n",posts[i].titutlo, posts[i].anoPubli);
    }
    return 0;
}

int armazenarDados(Blog posts[]){
    FILE *arquivo = fopen("blog.txt", "r");
    if (arquivo == NULL){
        printf("Error");
        return 1;
    }
    for (int i = 0; i < 5; i++){
        fscanf(arquivo, "Titulo: %[^\n]\n", posts[i].titutlo);
        fscanf(arquivo, "Ano publicacao: %d\n\n", &posts[i].anoPubli);
    }
    return fclose(arquivo);
}

void ordenarAno(Blog posts[]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5 - i - 1; j++){
            if (posts[j].anoPubli > posts[j+1].anoPubli){
                Blog aux = posts[j];
                posts[j] = posts[j+1];
                posts[j+1] = aux;
            }
        }
    }
}
