/*Escreva um programa que leia o arquivo blog.txt e armazene os dados dos 5 posts em umaestrutura. Em seguida, apresente seus dados no seguinte formato (Titulo: %s\n Postado em:%d\n) e exiba também os títulos dos artigos com a menor e a maior ano de publicação.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maior, menor;

typedef struct{
    char titutlo[100];
    int anoPubli;
}Blog;

int armazenarDados(Blog posts[]);
void imprimirPosts(Blog posts[]);

int main(){
    Blog posts[5];
    armazenarDados(posts);
    imprimirPosts(posts);

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
        if (i == 0){
            maior = i;
            menor = i;
        }
        else{
            if (posts[i].anoPubli < posts[menor].anoPubli)
                menor = i;
            else if (posts[i].anoPubli > posts[maior].anoPubli)
                maior = i;
        }
    }
    return fclose(arquivo);
}
void imprimirPosts(Blog posts[]){
    for (int i = 0; i < 5; i++){
        printf("Titulo: %s\n",posts[i].titutlo);
        printf("Postado em: %d\n\n",posts[i].anoPubli);
    }
    printf("Titulo mais antigo: %s\n", posts[menor].titutlo);
    printf("Titulo mais novo: %s\n\n", posts[maior].titutlo);
}
