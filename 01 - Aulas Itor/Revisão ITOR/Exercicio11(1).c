#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nomeProduto[100];
    int codigo, quantidade;
    float preco;
} Produtos;

typedef struct {
    char nomeCategoria[100];
    Produtos cadastroProduto[100];
    int quantRegistros;
} Categorias;

Categorias categoria[100];
int contadorCategorias = 0;

void registrarProduto();
void novaCategoria();
void novoProduto();
void editarProduto();
void removerProduto();
void editarCategoria();
void removerCategoria();
void listaCategorias();
void listarProdutos();
void calcularEstoque();
void abrirArquivo();
void salvarArquivo();

int main() {
    int opc = 1;
    abrirArquivo();
    do {
        system("cls");
        printf("Menu\n\n1 - Registrar\n2 - Listar produtos\n3 - Calcular estoque\n4 - Editar produto\n5 - Remover produto\n6 - Editar categoria\n7 - Remover categoria\n0 - Fechar programa\n\nInforme: ");
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                registrarProduto();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                calcularEstoque();
                break;
            case 4:
                editarProduto();
                break;
            case 5:
                removerProduto();
                break;
            case 6:
                editarCategoria();
                break;
            case 7:
                removerCategoria();
                break;
            case 0:
                system("cls");
                salvarArquivo();
                printf("FIM\n\n\n");
                break;
        }
    } while (opc != 0);
    return 0;
}

void registrarProduto() {
    int opc = 1;
    do {
        system("cls");
        printf("Menu\n\n1 - Cadastrar categoria\n2 - Cadastrar produto\n0 - Voltar ao menu\n\nInforme: ");
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                novaCategoria();
                break;
            case 2:
                novoProduto();
                break;
            case 0:
                break;
        }
    } while (opc != 0);
}

void novaCategoria() {
    system("cls");
    getchar();
    printf("Nome Categoria: ");
    scanf("%[^\n]", categoria[contadorCategorias].nomeCategoria);
    getchar();
    categoria[contadorCategorias].quantRegistros = 0;
    contadorCategorias++;
}

void novoProduto() {
    system("cls");
    int id;
    listaCategorias();
    printf("\n\nCADASTRO PRODUTO\n\nInforme o ID da categoria: ");
    scanf("%d", &id);
    getchar();
    id--;
    int aux = categoria[id].quantRegistros;
    system("cls");
    printf("%s\n\n", categoria[id].nomeCategoria);
    printf("Nome: ");
    scanf("%[^\n]", categoria[id].cadastroProduto[aux].nomeProduto);
    getchar();
    printf("Codigo: ");
    scanf("%d", &categoria[id].cadastroProduto[aux].codigo);
    getchar();
    printf("Preco: ");
    scanf("%f", &categoria[id].cadastroProduto[aux].preco);
    getchar();
    printf("Quantidade em estoque: ");
    scanf("%d", &categoria[id].cadastroProduto[aux].quantidade);
    getchar();
    categoria[id].quantRegistros++;
}

void editarProduto() {
    system("cls");
    int idCategoria, idProduto;
    listaCategorias();
    printf("\n\nEDITAR PRODUTO\n\nInforme o ID da categoria: ");
    scanf("%d", &idCategoria);
    getchar();
    idCategoria--;
    printf("Informe o ID do produto: ");
    scanf("%d", &idProduto);
    getchar();
    idProduto--;

    system("cls");
    printf("Editando produto: %s\n\n", categoria[idCategoria].cadastroProduto[idProduto].nomeProduto);
    printf("Nome: ");
    scanf("%[^\n]", categoria[idCategoria].cadastroProduto[idProduto].nomeProduto);
    getchar();
    printf("Codigo: ");
    scanf("%d", &categoria[idCategoria].cadastroProduto[idProduto].codigo);
    getchar();
    printf("Preco: ");
    scanf("%f", &categoria[idCategoria].cadastroProduto[idProduto].preco);
    getchar();
    printf("Quantidade em estoque: ");
    scanf("%d", &categoria[idCategoria].cadastroProduto[idProduto].quantidade);
    getchar();
}

void removerProduto() {
    system("cls");
    int idCategoria, idProduto;
    listaCategorias();
    printf("\n\nREMOVER PRODUTO\n\nInforme o ID da categoria: ");
    scanf("%d", &idCategoria);
    getchar();
    idCategoria--;
    printf("Informe o ID do produto: ");
    scanf("%d", &idProduto);
    getchar();
    idProduto--;

    for (int i = idProduto; i < categoria[idCategoria].quantRegistros - 1; i++) {
        categoria[idCategoria].cadastroProduto[i] = categoria[idCategoria].cadastroProduto[i + 1];
    }
    categoria[idCategoria].quantRegistros--;
}

void editarCategoria() {
    system("cls");
    int idCategoria;
    listaCategorias();
    printf("\n\nEDITAR CATEGORIA\n\nInforme o ID da categoria: ");
    scanf("%d", &idCategoria);
    getchar();
    idCategoria--;

    system("cls");
    printf("Editando categoria: %s\n\n", categoria[idCategoria].nomeCategoria);
    printf("Nome: ");
    scanf("%[^\n]", categoria[idCategoria].nomeCategoria);
    getchar();
}

void removerCategoria() {
    system("cls");
    int idCategoria;
    listaCategorias();
    printf("\n\nREMOVER CATEGORIA\n\nInforme o ID da categoria: ");
    scanf("%d", &idCategoria);
    getchar();
    idCategoria--;

    for (int i = idCategoria; i < contadorCategorias - 1; i++) {
        categoria[i] = categoria[i + 1];
    }
    contadorCategorias--;
}

void listaCategorias() {
    printf("LISTA CATEGORIAS\n\n");
    for (int i = 0; i < contadorCategorias; i++)
        printf("[%d] %s\n", i + 1, categoria[i].nomeCategoria);
}

void listarProdutos() {
    system("cls");
    printf("\nLISTA DE PRODUTOS\n");
    for (int i = 0; i < contadorCategorias; i++) {
        printf("\n%s:\n", categoria[i].nomeCategoria);
        for (int j = 0; j < categoria[i].quantRegistros; j++) {
            printf("    [%d] %s\n", j + 1, categoria[i].cadastroProduto[j].nomeProduto);
        }
    }
    printf("\n\nAperte ENTER para continuar");
    char aux;
    getchar();
    scanf("%c", &aux);
}

void calcularEstoque() {
    system("cls");
    printf("\nVALOR TOTAL EM ESTOQUE POR CATEGORIA\n");
    for (int i = 0; i < contadorCategorias; i++) {
        float total = 0;
        for (int j = 0; j < categoria[i].quantRegistros; j++) {
            total += categoria[i].cadastroProduto[j].preco * categoria[i].cadastroProduto[j].quantidade;
        }
        printf("%s: R$ %.2f\n", categoria[i].nomeCategoria, total);
    }
    printf("\n\nAperte ENTER para continuar");
    char aux;
    getchar();
    scanf("%c", &aux);
}

void abrirArquivo() {
    FILE *arquivo = fopen("produtos.txt", "r");
    if (arquivo == NULL) {
        arquivo = fopen("produtos.txt", "w");
        fclose(arquivo);
        return;
    }
    fscanf(arquivo, "%d\n", &contadorCategorias);
    for (int i = 0; i < contadorCategorias; i++) {
        fgets(categoria[i].nomeCategoria, sizeof(categoria[i].nomeCategoria), arquivo);
        categoria[i].nomeCategoria[strcspn(categoria[i].nomeCategoria, "\n")] = 0;
        fscanf(arquivo, "%d\n", &categoria[i].quantRegistros);
        for (int j = 0; j < categoria[i].quantRegistros; j++) {
            fgets(categoria[i].cadastroProduto[j].nomeProduto, sizeof(categoria[i].cadastroProduto[j].nomeProduto), arquivo);
            categoria[i].cadastroProduto[j].nomeProduto[strcspn(categoria[i].cadastroProduto[j].nomeProduto, "\n")] = 0;
            fscanf(arquivo, "%d\n", &categoria[i].cadastroProduto[j].codigo);
            fscanf(arquivo, "%f\n", &categoria[i].cadastroProduto[j].preco);
            fscanf(arquivo, "%d\n", &categoria[i].cadastroProduto[j].quantidade);
        }
    }
    fclose(arquivo);
}

void salvarArquivo() {
    FILE *arquivo = fopen("produtos.txt", "w");
    fprintf(arquivo, "%d\n", contadorCategorias);
    for (int i = 0; i < contadorCategorias; i++) {
        fprintf(arquivo, "%s\n", categoria[i].nomeCategoria);
        fprintf(arquivo, "%d\n", categoria[i].quantRegistros);
        for (int j = 0; j < categoria[i].quantRegistros; j++) {
            fprintf(arquivo, "%s\n", categoria[i].cadastroProduto[j].nomeProduto);
            fprintf(arquivo, "%d\n", categoria[i].cadastroProduto[j].codigo);
            fprintf(arquivo, "%f\n", categoria[i].cadastroProduto[j].preco);
            fprintf(arquivo, "%d\n", categoria[i].cadastroProduto[j].quantidade);
        }
    }
    fclose(arquivo);
}
