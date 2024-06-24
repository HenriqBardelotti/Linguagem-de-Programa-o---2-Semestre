#include <stdio.h>

int contFilmes = 0;

typedef struct{
    char titulo[100], diretor[100];
    int ano, duracao;
}Filme;

Filme filmes[100];
void abrirArquivo();
void listar();
void adicionar();
void salvar();

int main(){
    abrirArquivo();
    int opc;
    do{
        printf("Menu\n\n1 - Lista de filmes\n2 - Adicionar filme\n0 - Fechar e salvar\n\nInforme: ");
        scanf("%d",&opc);
        switch (opc){
            case 1:
                listar();
                break;
            case 2:
                adicionar();
                break;
            case 0:
                salvar();
                printf("FIM");
                break;
            default:
                printf("Opcao invalida\n");
                break;
            }
    }while(opc != 0);
    return 0;
}

void abrirArquivo(){
    FILE *arquivo = fopen("filmes.bin", "rb+");
    if (arquivo == NULL){
        FILE *arquivo = fopen("filmes.bin", "wb+");
    }
    fread(&contFilmes, sizeof(int), 1, arquivo);
    fread(&filmes, sizeof(Filme), contFilmes, arquivo);
    fclose(arquivo);
}

void listar(){
    int opc;
    char aux[100];
    do {
        printf("1 - Lista completa\n2 - Por nome\n0 - Menu\n\nInforme: ");
        scanf("%d", &opc);
        switch (opc){
            case 1:
                for (int i = 0; i < contFilmes; i++){
                    printf("[%d]\n",i+1);
                    printf("   Titulo: %s\n", filmes[i].titulo);
                    printf("   Diretor: %s\n", filmes[i].diretor);
                    printf("   Ano: %d\n", filmes[i].ano);
                    printf("   Duracao: %d\n\n", filmes[i].duracao);
                }
                break;
            case 2:
                getchar();
                printf("Titulo: ");
                scanf("%[^\n]",aux);
                for (int i = 0; i < contFilmes; i++){
                    if (strcmp(aux, filmes[i].titulo) == 0){
                        printf("   Titulo: %s\n", filmes[i].titulo);
                        printf("   Diretor: %s\n", filmes[i].diretor);
                        printf("   Ano: %d\n", filmes[i].ano);
                        printf("   Duracao: %d\n\n", filmes[i].duracao);
                        break;
                    }
                }
                break;
            default:
                printf("Opcao invalida\n");
        }

    }while(opc != 0);
}

void adicionar(){
    getchar();
    printf("Titulo: ");
    scanf("%[^\n]", filmes[contFilmes].titulo);
    getchar();
    printf("Diretor: ");
    scanf("%[^\n]", filmes[contFilmes].diretor);
    printf("Ano: ");
    scanf("%d", &filmes[contFilmes].ano);
    printf("Duracao: ");
    scanf("%d", &filmes[contFilmes].duracao);
    contFilmes++;
}

void salvar(){
    FILE *arquivo = fopen("filmes.bin", "ab+");
    if (arquivo == NULL){
        printf("Error");
        return 1;
    }
    fwrite(&contFilmes, sizeof(int), 1, arquivo);
    fwrite(&filmes, sizeof(Filme), contFilmes, arquivo);
    fclose(arquivo);
}
