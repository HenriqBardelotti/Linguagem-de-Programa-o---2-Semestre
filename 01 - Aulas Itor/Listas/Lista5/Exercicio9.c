#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int tamanho = 1;

typedef struct{
    char rua[100], bairro[100], cidade[100], complemento[100], estado[100], pais[100], CEP[100], numCasa[100];
}Endereco;

typedef struct{
    int DDD;
    char numTelefone[100];
}Telefone;

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    char nome[100], sobrenome[100], email[100], obs[1000];
    Endereco endereco;
    Telefone telefone;
    Data dataNiver;
}Pessoa;

void cadastro(Pessoa *agenda);
void ordenarAgenda(Pessoa agenda[]);
void imprimirAgenda(Pessoa agenda[], int condicao, int auxPrint);
void primeiroNome(Pessoa agenda[]);
void mesNiver(Pessoa agenda[]);
void diaMesNiver(Pessoa agenda[]);
void retirarPessoa(Pessoa agenda[]);

int main(){
    int escolha = 1;
    Pessoa agenda[100];
    do{
        printf("Menu\n\n1. Cadastrar pessoa\n2. Consulta por primeiro nome:\n3. Consulta por mes de aniversario\n4. Consulta por dia e mes de aniversario\n5. Retirar pessoa\n6. Imprimir agenda\n0. para sair\n\n");
        scanf("%d",&escolha);
        switch (escolha){
            case 1: cadastro(&agenda);
            break;
            case 2: primeiroNome(agenda);
            break;
            case 3: mesNiver(agenda);
            break;
            case 4: diaMesNiver(agenda);
            break;
            case 5: retirarPessoa(agenda);
            break;
            case 6: imprimirAgenda(agenda, 1000, 0);
            break;
            case 0:
                system("cls");
                printf("\nUfa");
            break;
            default:
                printf("\nEntrada invalida!");
            }
    }while(escolha != 0);
    return 0;
}

void cadastro(Pessoa *agenda){
    int verificar;
    do{
        system("cls");
        printf("Nome completo: ");
        scanf("%s%[^\n]", agenda[tamanho-1].nome, agenda[tamanho-1].sobrenome);
        getchar();
        agenda[tamanho-1].nome[0] = toupper(agenda[tamanho-1].nome[0]); //passa o primeiro caractere do nome pra maiusculo caso o usuario digite minusculo, para auxiliar na ordenacao, ja que as letras maiusculas vem antes na tabela ascii

        printf("E-mail: ");
        scanf("%[^\n]", agenda[tamanho-1].email);
        getchar();

        printf("\nENDERECO \n");
        printf("Rua: ");
        scanf("%[^\n]", agenda[tamanho-1].endereco.rua);
        getchar();

        printf("Numero da casa: ");
        scanf("%[^\n]", agenda[tamanho-1].endereco.numCasa);
        getchar();

        printf("Complemento: ");
        scanf("%[^\n]", agenda[tamanho-1].endereco.complemento);
        getchar();

        printf("Bairro: ");
        scanf("%[^\n]", agenda[tamanho-1].endereco.bairro);
        getchar();

        printf("CEP: ");
        scanf("%[^\n]", agenda[tamanho-1].endereco.CEP);
        getchar();

        printf("Cidade: ");
        scanf("%[^\n]", agenda[tamanho-1].endereco.cidade);
        getchar();

        printf("Estado: ");
        scanf("%[^\n]", agenda[tamanho-1].endereco.estado);
        getchar();

        printf("Pais: ");
        scanf("%[^\n]", agenda[tamanho-1].endereco.pais);
        getchar();

        printf("\nTelefone: \n");
        printf("DDD: ");
        getchar();
        while(scanf("%d", &agenda[tamanho-1].telefone.DDD) != 1){ //ta com algum bug de buffer ainda se digita errado da primeira vez, nao deu tempo de resolver sorry
            printf("Entrada invalida, informe o DDD novamente: ");
            scanf("%d",&agenda[tamanho-1].telefone.DDD);
             //aqui tive que usar o gepeto pq o buffer tava ficando zoado
        }
        getchar();
        printf("Numero: ");
        scanf("%[^\n]",agenda[tamanho-1].telefone.numTelefone);
        getchar();

        printf("\nAniversario: \n");
        printf("Data dia/mes/ano: ");
        while(scanf("%d/%d/%d", &agenda[tamanho-1].dataNiver.dia, &agenda[tamanho-1].dataNiver.mes, &agenda[tamanho-1].dataNiver.ano) != 3){
            printf("\nFormato invalida, insira dia/mes/ano separados por / : ");
            scanf("%d/%d/%d",&agenda[tamanho-1].dataNiver.dia, &agenda[tamanho-1].dataNiver.mes, &agenda[tamanho-1].dataNiver.ano);
            while (getchar() != '\n');
        }
        getchar();
        printf("\nObservacao: ");
        scanf("%[^\n]", agenda[tamanho-1].obs);
        if (tamanho != 1)
            ordenarAgenda(agenda); //fun��o para colocar em ordem alfabetica
        tamanho++;
        system("cls");
        printf("Deseja fazer novo cadastro? Digite 1 para sim e 0 para voltar ao Menu: ");
        scanf("%d", &verificar);
    }while(verificar!=0);
    system("cls");
}

void ordenarAgenda(Pessoa agenda[]){
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (strcmp(agenda[j+1].nome,agenda[j].nome) < 0) {
                Pessoa auxPessoa = agenda[j];
                agenda[j] = agenda[j+1];
                agenda[j+1] = auxPessoa;
            }
        }
    }
}

void imprimirAgenda(Pessoa agenda[], int condicao, int auxPrint){
    int auxImprimir;
    if (condicao == 1000){
        do {
            system("cls");
            printf("\n1. Nome, telefone e e-mail\n2. Todos os dados\n");
            scanf("%d", &auxPrint);
            if (auxPrint == 1){
                for (int i = 0; i < tamanho-1; i++)
                    printf("\nNome: %s%s\nTelefone: %d %s\nE-mail: %s\n\n", agenda[i].nome, agenda[i].sobrenome, agenda[i].telefone.DDD, agenda[i].telefone.numTelefone, agenda[i].email);
            }
            else{
                for (int i = 0; i < tamanho-1; i++){
                    printf("\nNome: %s%s\nE-mail: %s\nEndereco: %s, Nro:%s, %s, %s, %s, %s, CEP: %s, %s\nTelefone: (%d) %s\nAniversario: %d/%d/%d\nObservacoes: %s ", agenda[i].nome, agenda[i].sobrenome, agenda[i].email, agenda[i].endereco.rua, agenda[i].endereco.numCasa, agenda[i].endereco.complemento, agenda[i].endereco.bairro, agenda[i].endereco.cidade, agenda[i].endereco.estado, agenda[i].endereco.CEP, agenda[i].endereco.pais, agenda[i].telefone.DDD, agenda[i].telefone.numTelefone, agenda[i].dataNiver.dia, agenda[i].dataNiver.mes, agenda[i].dataNiver.ano, agenda[i].obs);
                    printf("\n");
                }
            }
        printf("\nDigite 0 para voltar ao menu: ");
        scanf("%d",&auxImprimir);
        }while(auxImprimir != 0);
        system("cls");
    }
    else{
        if (auxPrint == 1){
            printf("\nNome: %s%s\nTelefone: %d %s\nE-mail: %s\n\n", agenda[condicao].nome, agenda[condicao].sobrenome, agenda[condicao].telefone.DDD, agenda[condicao].telefone.numTelefone, agenda[condicao].email);
        }
        else
            printf("\nNome: %s%s\nE-amil: %s\nEndereco: %s, Nro:%s, %s, %s, %s, %s, CEP: %s, %s\nTelefone: (%d) %s\nAniversario: %d/%d/%d\nObservacoes: %s \n", agenda[condicao].nome, agenda[condicao].sobrenome, agenda[condicao].email, agenda[condicao].endereco.rua, agenda[condicao].endereco.numCasa, agenda[condicao].endereco.complemento, agenda[condicao].endereco.bairro, agenda[condicao].endereco.cidade, agenda[condicao].endereco.estado, agenda[condicao].endereco.CEP, agenda[condicao].endereco.pais, agenda[condicao].telefone.DDD, agenda[condicao].telefone.numTelefone, agenda[condicao].dataNiver.dia, agenda[condicao].dataNiver.mes, agenda[condicao].dataNiver.ano, agenda[condicao].obs);
    }
}

void primeiroNome(Pessoa agenda[]){
    int auxVerificar, contador;
    do{
        contador = 0;
        system("cls");
        int aux = 0, auxPrint;
        char auxNome[100];
        printf("Informe o primeiro nome: ");
        scanf("%s",&auxNome);
        printf("\n1. Nome, telefone e e-mail\n2. Todos os dados\n");
        scanf("%d",&auxPrint);
        for (int i = 0; i < tamanho - 1; i++){
            if (strcmp(auxNome,agenda[i].nome) == 0){
                imprimirAgenda(agenda, i, auxPrint);
                contador++;
            }
        }
        if (contador == 0)
            printf("\nNome nao encontrado\n\n");
        printf("\nDeseja fazer uma nova consulta? 1 para sim e 0 para voltar ao menu: ");
        scanf("%d",&auxVerificar);
    }while (auxVerificar != 0);
    system("cls");
}

void mesNiver(Pessoa agenda[]){
    int auxVerificar, contador;
    do{
        contador = 0;
        system("cls");
        int aux = 0, auxMesNiver, auxPrint;
        printf("Informe o mes de aniversario que deseja consultar: ");
        scanf("%d",&auxMesNiver);
        printf("\n1. Nome, telefone e e-mail\n2. Todos os dados\n");
        scanf("%d",&auxPrint);
        for (int i = 0; i < tamanho - 1; i++){
            if (auxMesNiver == agenda[i].dataNiver.mes){
                imprimirAgenda(agenda, i, auxPrint);
                contador++;
            }
        }
        if (contador == 0)
            printf("\nNao ha aniversariantes no mes solicitado\n\n");
        printf("\nDeseja fazer uma nova consulta? 1 para sim e 0 para voltar ao menu: ");
        scanf("%d",&auxVerificar);
    }while (auxVerificar != 0);
    system("cls");
}

void diaMesNiver(Pessoa agenda[]){
    int auxVerificar, contador;
    do{
        contador = 0;
        system("cls");
        int aux = 0, auxMesNiver, auxDiaNiver, auxPrint;
        printf("Informe o dia/mes de aniversario que deseja consultar: ");
        scanf("%d/%d",&auxDiaNiver, &auxMesNiver);
        printf("\n1. Nome, telefone e e-mail\n2. Todos os dados\n");
        scanf("%d",&auxPrint);
        for (int i = 0; i < tamanho - 1; i++){
            if (auxMesNiver == agenda[i].dataNiver.mes && auxDiaNiver == agenda[i].dataNiver.dia){
                imprimirAgenda(agenda, i, auxPrint);
                contador++;
            }
        }
        if (contador == 0)
            printf("\nNao ha aniversariantes na data solicitado\n\n");
        printf("\nDeseja fazer uma nova consulta? 1 para sim e 0 para voltar ao menu: ");
        scanf("%d",&auxVerificar);
    }while (auxVerificar != 0);
    system("cls");
}

void retirarPessoa(Pessoa agenda[]){
    int auxVerificar;
    do{
        system("cls");
        char nomeCompleto[100];
        getchar();
        printf("Informe o nome completo da pessoa que deseja remover: ");
        scanf("%[^\n]", nomeCompleto);
        getchar();
        for (int i = 0; i < tamanho - 1; i++){
            if (strcmp(nomeCompleto,strcat(agenda[i].nome,agenda[i].sobrenome)) == 0){
                for (int j = i; j < tamanho - 1; j++){
                    agenda[j] = agenda[j+1];
                }
                tamanho--;
            }
        }
        printf("\nDeseja remover outra pessoa? 1 para sim e 0 para voltar ao menu: " );
        scanf("%d",&auxVerificar);
    } while (auxVerificar != 0);
    system("cls");
}
