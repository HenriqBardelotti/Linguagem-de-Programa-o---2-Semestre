/*Sistema de Gerenciamento de Inventário de uma LojaVocê foi contratado para desenvolver um sistema de gerenciamento de inventário para uma loja. O sistema deve ser capaz de registrar e gerenciar as informações de diferentes categorias de produtose os produtos dentro de cada categoria.

O objetivo final é listar todos os produtos, organizá-los porcategoria e calcular o valor total de cada categoria em estoque.

Crie um programa que ofereça as seguintes opções ao usuário:
- Registrar categorias (nome) e produtos (nome, código, preço, quantidade em estoque ecategoria)
- Listar produtos por categoria
- Calcular valor total em estoque por categoria
- Sair*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nomeProduto[100];
    int codigo, quantidade;
    float preco;
}Produtos;

typedef struct{
    char nomeCategoria[100];
    Produtos cadastroProduto[100];
    int quantRegistros;
}Categorias;

Categorias categoria[100];
int contadorCategorias = 0;

void registrarProduto();
void novaCategoria();
void novoProduto();
void listaCategorias();
void listarProdutos();
void abrirArquivo();
void salvarArquivo();

int main(){
    int opc = 1;
    abrirArquivo();
    do{
        system("cls");
        printf("Menu\n\n1 - Registrar\n2 - Listar produtos\n3 - Calcular estoque\n0 - Fechar programa\n\nInforme: ");
        scanf("%d", &opc);
        switch (opc){
            case 1:
                registrarProduto();
            break;
            case 2:
                listarProdutos();
            break;
            case 3:
            break;
                system("cls");
                salvarArquivo();
                printf("FIM\n\n\n");
            case 0:
            break;
        }
    }while(opc != 0);
    return 0;
}

void registrarProduto(){
    int opc = 1;
    do{
        system("cls");
        printf("Menu\n\n1 - Cadastrar categoria\n2 - Cadastrar produto\n0 - Voltar ao menu\n\nInforme: ");
        scanf("%d", &opc);
        switch (opc){
            case 1:
                novaCategoria();
            break;
            case 2:
                novoProduto();
            break;
            case 0:
            break;
        }
    }while(opc != 0);
}

void novaCategoria(){
    system("cls");
    getchar();
    printf("Nome Categoria: ");
    scanf("%[^\n]", categoria[contadorCategorias].nomeCategoria);
    getchar();
    categoria[contadorCategorias].quantRegistros = 0;
    contadorCategorias++;
}

void novoProduto(){
    system("cls");
    int id;
    listaCategorias();
    printf("\n\nCADASTRO PRODUTO\n\nInforme o ID da categoria: ");
    scanf("%d", &id);
    getchar();
    id--;
    int aux = categoria[id].quantRegistros;
    system("cls");
    printf("%s\n\n",categoria[id].nomeCategoria);
    printf("Nome: ");
    scanf("%[^\n]", categoria[id].cadastroProduto[aux].nomeProduto);
    printf("Codigo: ");
    scanf("%d", &categoria[id].cadastroProduto[aux].codigo);
    printf("Preco: ");
    scanf("%f", &categoria[id].cadastroProduto[aux].preco);
    printf("Quantidade em estoque: ");
    scanf("%d", &categoria[id].cadastroProduto[aux].quantidade);
    categoria[id].quantRegistros++;
}

void listaCategorias(){
    printf("LISTA CATEGORIAS\n\n");
    for (int i = 0; i < contadorCategorias; i++)
        printf("[%d] %s\n",i+1, categoria[i].nomeCategoria);
}

void listarProdutos(){
    system("cls");
    printf("\nLISTA DE PRODUTOS\n");
    for (int i = 0; i < contadorCategorias; i++){
        printf("\n%s:\n", categoria[i].nomeCategoria);
        for (int j = 0; j < categoria[i].quantRegistros; j++){
            printf("    %s\n", categoria[i].cadastroProduto[j].nomeProduto);

        }
    }
    printf("\n\nAperte ENTER para continuar");
    char aux;
    getchar();
    scanf("%c",&aux);
}

void abrirArquivo(){
    FILE *arquivo = fopen("produtos.txt", "r");
    if (arquivo == NULL){
        FILE *arquivo = fopen("produtos.txt", "w");
    }
    fscanf(arquivo, "%d\n", &contadorCategorias);
    fgets(&categoria, sizeof(contadorCategorias), arquivo);
    fclose(arquivo);
}

void salvarArquivo(){
    FILE *arquivo = fopen("produtos.txt", "a");
    for (int i = 0; i < contadorCategorias; i++)
        fprintf("%s,%d,%.2f,%d\n", );
    fclose(arquivo);
}

//não deu tempo de terminar, to mandando para ter material para a prova de hoje rsrs
