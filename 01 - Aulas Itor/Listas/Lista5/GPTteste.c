#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

typedef struct {
    char rua[100], bairro[100], cidade[100], complemento[100], estado[100], pais[100], CEP[100], numCasa[100];
} Endereco;

typedef struct {
    int DDD;
    char numTelefone[100];
} Telefone;

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    char nome[100], sobrenome[100], email[100], obs[1000];
    Endereco endereco;
    Telefone telefone;
    Data dataNiver;
} Pessoa;

int tamanho = 0;

void cadastro(Pessoa *agenda);
void ordenarAgenda(Pessoa agenda[]);
void imprimirAgenda(Pessoa agenda[], int condicao, int auxPrint);
void primeiroNome(Pessoa agenda[]);
void mesNiver(Pessoa agenda[]);
void diaMesNiver(Pessoa agenda[]);
void retirarPessoa(Pessoa agenda[]);
void clearBuffer();

int main() {
    int escolha;
    Pessoa agenda[MAX];

    do {
        printf("Menu\n\n1. Cadastrar pessoa\n2. Consulta por primeiro nome\n3. Consulta por mes de aniversario\n4. Consulta por dia e mes de aniversario\n5. Retirar pessoa\n6. Imprimir agenda\n0. Sair\n\n");
        scanf("%d", &escolha);
        clearBuffer();

        switch (escolha) {
            case 1: cadastro(agenda); break;
            case 2: primeiroNome(agenda); break;
            case 3: mesNiver(agenda); break;
            case 4: diaMesNiver(agenda); break;
            case 5: retirarPessoa(agenda); break;
            case 6: imprimirAgenda(agenda, 1000, 0); break;
            case 0: printf("\nSaindo...\n"); break;
            default: printf("\nEntrada invalida!\n"); break;
        }
    } while (escolha != 0);

    return 0;
}

void cadastro(Pessoa *agenda) {
    int verificar;
    do {
        system("cls");
        printf("Nome completo: ");
        scanf("%s %[^\n]", agenda[tamanho].nome, agenda[tamanho].sobrenome);
        clearBuffer();

        agenda[tamanho].nome[0] = toupper(agenda[tamanho].nome[0]);

        printf("E-mail: ");
        fgets(agenda[tamanho].email, sizeof(agenda[tamanho].email), stdin);
        agenda[tamanho].email[strcspn(agenda[tamanho].email, "\n")] = '\0';

        printf("\nENDEREÇO\n");
        printf("Rua: ");
        fgets(agenda[tamanho].endereco.rua, sizeof(agenda[tamanho].endereco.rua), stdin);
        agenda[tamanho].endereco.rua[strcspn(agenda[tamanho].endereco.rua, "\n")] = '\0';

        printf("Número da casa: ");
        fgets(agenda[tamanho].endereco.numCasa, sizeof(agenda[tamanho].endereco.numCasa), stdin);
        agenda[tamanho].endereco.numCasa[strcspn(agenda[tamanho].endereco.numCasa, "\n")] = '\0';

        printf("Complemento: ");
        fgets(agenda[tamanho].endereco.complemento, sizeof(agenda[tamanho].endereco.complemento), stdin);
        agenda[tamanho].endereco.complemento[strcspn(agenda[tamanho].endereco.complemento, "\n")] = '\0';

        printf("Bairro: ");
        fgets(agenda[tamanho].endereco.bairro, sizeof(agenda[tamanho].endereco.bairro), stdin);
        agenda[tamanho].endereco.bairro[strcspn(agenda[tamanho].endereco.bairro, "\n")] = '\0';

        printf("CEP: ");
        fgets(agenda[tamanho].endereco.CEP, sizeof(agenda[tamanho].endereco.CEP), stdin);
        agenda[tamanho].endereco.CEP[strcspn(agenda[tamanho].endereco.CEP, "\n")] = '\0';

        printf("Cidade: ");
        fgets(agenda[tamanho].endereco.cidade, sizeof(agenda[tamanho].endereco.cidade), stdin);
        agenda[tamanho].endereco.cidade[strcspn(agenda[tamanho].endereco.cidade, "\n")] = '\0';

        printf("Estado: ");
        fgets(agenda[tamanho].endereco.estado, sizeof(agenda[tamanho].endereco.estado), stdin);
        agenda[tamanho].endereco.estado[strcspn(agenda[tamanho].endereco.estado, "\n")] = '\0';

        printf("Pais: ");
        fgets(agenda[tamanho].endereco.pais, sizeof(agenda[tamanho].endereco.pais), stdin);
        agenda[tamanho].endereco.pais[strcspn(agenda[tamanho].endereco.pais, "\n")] = '\0';

        printf("\nTelefone\n");
        printf("DDD: ");
        while (scanf("%d", &agenda[tamanho].telefone.DDD) != 1) {
            printf("Entrada inválida, informe o DDD novamente: ");
            clearBuffer();
        }
        clearBuffer();

        printf("Número: ");
        fgets(agenda[tamanho].telefone.numTelefone, sizeof(agenda[tamanho].telefone.numTelefone), stdin);
        agenda[tamanho].telefone.numTelefone[strcspn(agenda[tamanho].telefone.numTelefone, "\n")] = '\0';

        printf("\nAniversário\n");
        printf("Data (dia/mes/ano): ");
        while (scanf("%d/%d/%d", &agenda[tamanho].dataNiver.dia, &agenda[tamanho].dataNiver.mes, &agenda[tamanho].dataNiver.ano) != 3) {
            printf("\nFormato inválido, insira dia/mes/ano separados por / : ");
            clearBuffer();
        }
        clearBuffer();

        printf("\nObservação: ");
        fgets(agenda[tamanho].obs, sizeof(agenda[tamanho].obs), stdin);
        agenda[tamanho].obs[strcspn(agenda[tamanho].obs, "\n")] = '\0';

        if (tamanho != 0)
            ordenarAgenda(agenda);

        tamanho++;
        printf("Deseja fazer novo cadastro? Digite 1 para sim e 0 para voltar ao Menu: ");
        scanf("%d", &verificar);
        clearBuffer();
    } while (verificar != 0);

    system("cls");
}

void ordenarAgenda(Pessoa agenda[]) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (strcmp(agenda[j + 1].nome, agenda[j].nome) < 0) {
                Pessoa auxPessoa = agenda[j];
                agenda[j] = agenda[j + 1];
                agenda[j + 1] = auxPessoa;
            }
        }
    }
}

void imprimirAgenda(Pessoa agenda[], int condicao, int auxPrint) {
    int auxImprimir;
    if (condicao == 1000) {
        do {
            system("cls");
            printf("\n1. Nome, telefone e e-mail\n2. Todos os dados\n");
            scanf("%d", &auxPrint);
            clearBuffer();

            if (auxPrint == 1) {
                for (int i = 0; i < tamanho; i++)
                    printf("\nNome: %s %s\nTelefone: (%d) %s\nE-mail: %s\n\n", agenda[i].nome, agenda[i].sobrenome, agenda[i].telefone.DDD, agenda[i].telefone.numTelefone, agenda[i].email);
            } else {
                for (int i = 0; i < tamanho; i++) {
                    printf("\nNome: %s %s\nE-mail: %s\nEndereco: %s, Nro:%s, %s, %s, %s, %s, CEP: %s, %s\nTelefone: (%d) %s\nAniversário: %d/%d/%d\nObservações: %s\n",
                           agenda[i].nome, agenda[i].sobrenome, agenda[i].email, agenda[i].endereco.rua, agenda[i].endereco.numCasa, agenda[i].endereco.complemento,
                           agenda[i].endereco.bairro, agenda[i].endereco.cidade, agenda[i].endereco.estado, agenda[i].endereco.CEP, agenda[i].endereco.pais,
                           agenda[i].telefone.DDD, agenda[i].telefone.numTelefone, agenda[i].dataNiver.dia, agenda[i].dataNiver.mes, agenda[i].dataNiver.ano, agenda[i].obs);
                    printf("\n");
                }
            }

            printf("\nDigite 0 para voltar ao menu: ");
            scanf("%d", &auxImprimir);
            clearBuffer();
        } while (auxImprimir != 0);

        system("cls");
    } else {
        if (auxPrint == 1) {
            printf("\nNome: %s %s\nTelefone: (%d) %s\nE-mail: %s\n\n", agenda[condicao].nome, agenda[condicao].sobrenome, agenda[condicao].telefone.DDD, agenda[condicao].telefone.numTelefone, agenda[condicao].email);
        } else {
            printf("\nNome: %s %s\nE-mail: %s\nEndereco: %s, Nro:%s, %s, %s, %s, %s, CEP: %s, %s\nTelefone: (%d) %s\nAniversário: %d/%d/%d\nObservações: %s\n",
                   agenda[condicao].nome, agenda[condicao].sobrenome, agenda[condicao].email, agenda[condicao].endereco.rua, agenda[condicao].endereco.numCasa, agenda[condicao].endereco.complemento,
                   agenda[condicao].endereco.bairro, agenda[condicao].endereco.cidade, agenda[condicao].endereco.estado, agenda[condicao].endereco.CEP, agenda[condicao].endereco.pais,
                   agenda[condicao].telefone.DDD, agenda[condicao].telefone.numTelefone, agenda[condicao].dataNiver.dia, agenda[condicao].dataNiver.mes, agenda[condicao].dataNiver.ano, agenda[condicao].obs);
        }
    }
}

void primeiroNome(Pessoa agenda[]) {
    int auxVerificar, contador;
    do {
        contador = 0;
        system("cls");
        char auxNome[100];
        int auxPrint;

        printf("Informe o primeiro nome: ");
        scanf("%s", auxNome);
        clearBuffer();

        printf("\n1. Nome, telefone e e-mail\n2. Todos os dados\n");
        scanf("%d", &auxPrint);
        clearBuffer();

        for (int i = 0; i < tamanho; i++) {
            if (strcmp(auxNome, agenda[i].nome) == 0) {
                imprimirAgenda(agenda, i, auxPrint);
                contador++;
            }
        }

        if (contador == 0)
            printf("\nNome não encontrado\n\n");

        printf("\nDeseja fazer uma nova consulta? 1 para sim e 0 para voltar ao menu: ");
        scanf("%d", &auxVerificar);
        clearBuffer();
    } while (auxVerificar != 0);

    system("cls");
}

void mesNiver(Pessoa agenda[]) {
    int auxVerificar, contador;
    do {
        contador = 0;
        system("cls");
        int auxMesNiver, auxPrint;

        printf("Informe o mês de aniversário que deseja consultar: ");
        scanf("%d", &auxMesNiver);
        clearBuffer();

        printf("\n1. Nome, telefone e e-mail\n2. Todos os dados\n");
        scanf("%d", &auxPrint);
        clearBuffer();

        for (int i = 0; i < tamanho; i++) {
            if (auxMesNiver == agenda[i].dataNiver.mes) {
                imprimirAgenda(agenda, i, auxPrint);
                contador++;
            }
        }

        if (contador == 0)
            printf("\nNão há aniversariantes no mês solicitado\n\n");

        printf("\nDeseja fazer uma nova consulta? 1 para sim e 0 para voltar ao menu: ");
        scanf("%d", &auxVerificar);
        clearBuffer();
    } while (auxVerificar != 0);

    system("cls");
}

void diaMesNiver(Pessoa agenda[]) {
    int auxVerificar, contador;
    do {
        contador = 0;
        system("cls");
        int auxMesNiver, auxDiaNiver, auxPrint;

        printf("Informe o dia/mês de aniversário que deseja consultar: ");
        scanf("%d/%d", &auxDiaNiver, &auxMesNiver);
        clearBuffer();

        printf("\n1. Nome, telefone e e-mail\n2. Todos os dados\n");
        scanf("%d", &auxPrint);
        clearBuffer();

        for (int i = 0; i < tamanho; i++) {
            if (auxMesNiver == agenda[i].dataNiver.mes && auxDiaNiver == agenda[i].dataNiver.dia) {
                imprimirAgenda(agenda, i, auxPrint);
                contador++;
            }
        }

        if (contador == 0)
            printf("\nNão há aniversariantes na data solicitada\n\n");

        printf("\nDeseja fazer uma nova consulta? 1 para sim e 0 para voltar ao menu: ");
        scanf("%d", &auxVerificar);
        clearBuffer();
    } while (auxVerificar != 0);

    system("cls");
}

void retirarPessoa(Pessoa agenda[]) {
    int auxVerificar;
    do {
        system("cls");
        char nomeCompleto[100];
        int found = 0;

        printf("Informe o nome completo da pessoa que deseja remover: ");
        fgets(nomeCompleto, sizeof(nomeCompleto), stdin);
        nomeCompleto[strcspn(nomeCompleto, "\n")] = '\0';

        for (int i = 0; i < tamanho; i++) {
            if (strcmp(nomeCompleto, strcat(agenda[i].nome, agenda[i].sobrenome)) == 0) {
                found = 1;
                for (int j = i; j < tamanho - 1; j++) {
                    agenda[j] = agenda[j + 1];
                }
                tamanho--;
                break;
            }
        }

        if (!found) {
            printf("\nPessoa não encontrada\n");
        } else {
            printf("\nPessoa removida com sucesso\n");
        }

        printf("\nDeseja remover outra pessoa? 1 para sim e 0 para voltar ao menu: ");
        scanf("%d", &auxVerificar);
        clearBuffer();
    } while (auxVerificar != 0);

    system("cls");
}

void clearBuffer() {
    while (getchar() != '\n');
}
