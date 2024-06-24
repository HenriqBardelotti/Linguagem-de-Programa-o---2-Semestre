#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    char placa[100], marca[100], modelo[100];
    Data data[4];
    int numViagens[4], km, contCarros, kmViagem[4], auxViagem;
}Veiculo;

int contadorCarros;

void salvarArquivoBin();
void iniciarArquivo();
void cadastrarVeiculo();
void ListarVeiculos();
void atualizarVeiculo();
void removerVeiculo();
void gerenciarViagem();
void exportarCSV();
void mostrarLista();
void listaViagens();
void mostrarViagens(int id);

Veiculo veiculos[1000];

int main(){
    iniciarArquivo();
    int opc = 1;
    do{
        printf("MENU: \n\n1 - Cadastrar veiculo\n2 - Lista de veiculos cadastrados\n3 - Atualiza dados\n4 - Remover veiculo\n5 - Gerenciar viagens\n6 - Exportar catalogo CSV\n0 - Encerrar programa\n\nInforme: ");
        scanf("%d", &opc);
        switch (opc){
            case 1:
                cadastrarVeiculo();
                break;
            case 2:
                ListarVeiculos();
                break;
            case 3:
                atualizarVeiculo();
                break;
            case 4:
                removerVeiculo();
                break;
            case 5:
                gerenciarViagem();
                break;
            case 6:
                system("cls");
                exportarCSV();
                break;
            case 0:
                salvarArquivoBin();
                system("cls");
                printf("FIM\n\n");
                break;
            default:
                system("cls");
                printf("Eu num entendi o que se falo");
                break;
        }
    } while(opc != 0);
    return 0;
}

void iniciarArquivo(){

    FILE *arquivo = fopen("veiculos.bin", "rb+");
    if (arquivo == NULL){
        FILE *arquivo = fopen("veiculos.bin", "wb+");
    }
    else{
        fread(&contadorCarros, sizeof(int), 1, arquivo);
        fread(&veiculos, sizeof(Veiculo), contadorCarros, arquivo);
    }
    fclose(arquivo);
}

void cadastrarVeiculo(){
    int cadastro = 1;
    do{
        system("cls");
        printf("CADASTRO\n\n");
        printf("Modelo: ");
        while (getchar() != '\n');
        scanf("%[^\n]", veiculos[contadorCarros].modelo);
        printf("Marca: ");
        while (getchar() != '\n');
        scanf("%[^\n]", veiculos[contadorCarros].marca);
        printf("Placa: ");
        while (getchar() != '\n');
        scanf("%[^\n]",veiculos[contadorCarros].placa);
        printf("Quilometragem: ");
        scanf("%d",&veiculos[contadorCarros].km);
        system("cls");
        printf("Escolha: \n\n1 - Novo cadastro\n0 - Menu princial\n\nInforme: ");
        scanf("%d",&cadastro);
        for (int i = 0; i < 4; i++)
            veiculos[contadorCarros].auxViagem = 0; //inicia como zero a contagem de viagens cadastradas
        contadorCarros++;
    }while(cadastro!=0);
    system("cls");
}

void ListarVeiculos(){
    char linuxDaTrabalho[666];
    system("cls");
    if (contadorCarros == 0)
        printf("Nenhum veiculo cadastrado\n\n");
    else
        mostrarLista();
    printf("\nDigite qualquer tecla para continuar: ");
    scanf("%s", &linuxDaTrabalho);
    system("cls");
}

void atualizarVeiculo(){
    int aux = 1, num, opc = 1, verificar = 1;
    do{
        system("cls");
        mostrarLista();
        printf("\n\nALTERACAO CADASTRAL\n\n");
        printf("Informe o codigo veiculo para alteracao: ");
        scanf("%d", &num);
        num--;
        do{
            system("cls");
            printf("[%d] %s, %s, %s, %d\n", num+1, veiculos[num].placa, veiculos[num].marca, veiculos[num].modelo, veiculos[num].km);
            printf("\n1 - Alterar placa\n2 - Alterar marca\n3 - Altear modelo\n4 - Alterar quilometragem\n5 - Alterar todas as informacoes\n0 - Confirmar\n\nInforme: ");
            scanf("%d",&opc);
            switch (opc){
                case 1:
                    printf("Placa: ");
                    while (getchar() != '\n');
                    scanf("%s", veiculos[num].placa);
                    break;
                case 2:
                    printf("Marca: ");
                    while (getchar() != '\n');
                    scanf("%s", veiculos[num].marca);
                    break;
                case 3:
                    printf("Modelo: ");
                    while (getchar() != '\n');
                    scanf("%s", veiculos[num].modelo);
                    break;
                case 4:
                    printf("Quilometragem: ");
                    scanf("%d", &veiculos[num].km);
                    break;
                case 5:
                    printf("Placa: ");
                    while (getchar() != '\n');
                    scanf("%s", veiculos[num].placa);
                    printf("Marca: ");
                    while (getchar() != '\n');
                    scanf("%s", veiculos[num].marca);
                    printf("Modelo: ");
                    while (getchar() != '\n');
                    scanf("%s", veiculos[num].modelo);
                    printf("Quilometragem: ");
                    scanf("%d", &veiculos[num].km);
                    break;
                default:
                    printf("Opcao Invalida");
            }
            system("cls");
            printf("[%d] %s, %s, %s, %d\n", num+1, veiculos[num].placa, veiculos[num].marca, veiculos[num].modelo, veiculos[num].km);
            printf("\n1 - Alterar placa\n2 - Alterar marca\n3 - Altear modelo\n4 - Alterar quilometragem\n5 - Alterar todas as informacoes\n0 - Confirmar\n\n");
            printf("Deseja alterar mais algo no veiculo [%d]?\n\n1 - Sim\n0 - Nao\n\nInforme: ",num+1);
            scanf("%d",&verificar);
        }while(verificar!=0);
        system("cls");
        printf("Deseja fazer uma outra alteracao?\n\n1 - Sim\n0 - Nao\n\nInforme: ");
        scanf("%d",&aux);
    }while(aux!=0);
    system("cls");
}

void mostrarLista(){
    printf("LISTA DE VEICULOS\n\n");
    for (int i = 0; i < contadorCarros; i++){
        printf("[%d] %s, %s, %s, %d\n",i+1, veiculos[i].placa, veiculos[i].marca, veiculos[i].modelo, veiculos[i].km);
    }
}

void removerVeiculo(){
    int id, aux = 1;
    do{
        system("cls");
        mostrarLista();
        printf("\nREMOCAO DE VEICULO");
        printf("\n\nInforme o ID do veiculo: ");
        scanf("%d",&id);
        if (id > contadorCarros){
            printf("ID nao cadastrado");
        }
        else {
            id--;
            for (int i = id; i < contadorCarros; i++)
            veiculos[i] = veiculos[i+1];
            contadorCarros--;
            system("cls");
            mostrarLista();
            printf("\nREMOCAO DE VEICULO");
        }
        printf("\n\nDeseja fazer outra remocao? \n\n1 - Sim\n0 - Nao\n\nInforme: ");
        scanf("%d",&aux);
        system("cls");
    }while(aux!=0);
}

void gerenciarViagem(){
    int opc = 1, carroID;
    do{
        system("cls");
        printf("GERENCIADOR DE VIAGENS");
        printf("\n\n1 - Cadastrar Viagem\n2 - Listar viagens\n3 - Remover Viagem\n0 - Menu princiapl\n\nInforme: ");
        scanf("%d",&opc);
        switch (opc){
            case 1:
                system("cls");
                mostrarLista();
                printf("\nInforme o ID do carro: ");
                scanf("%d",&carroID);
                char linuxDaTrabalho[666];
                if (carroID > contadorCarros){
                    printf("ID nao cadastrado\n");
                    printf("Digite qualquer tecla para continuar: ");
                    scanf("%s", &linuxDaTrabalho);
                }
                else {
                    carroID--;
                    int aux = veiculos[carroID].auxViagem;
                    if (aux == 4){
                        system("cls");
                        printf("\nLIMITE DE VIAGENS ATINGIDO\n\n");
                        printf("Digite qualquer tecla para continuar: ");
                        scanf("%s", &linuxDaTrabalho);
                        break;
                    }
                    system("cls");
                    mostrarViagens(carroID);
                    printf("\n\nData (xx/xx/xx): ");

                    scanf("%d/%d/%d", &veiculos[carroID].data[aux].dia, &veiculos[carroID].data[aux].mes, &veiculos[carroID].data[aux].ano);
                    printf("Quilometragem: ");
                    scanf("%d",&veiculos[carroID].kmViagem[aux]);
                    veiculos[carroID].km += veiculos[carroID].kmViagem[aux]; //altera a quilometragem rodada pelo veiculo
                    veiculos[carroID].auxViagem++;
                }
            break;
            case 2:
                listaViagens();
                printf("\n\nDigite qualquer tecla para continuar: ");
                scanf("%s", &linuxDaTrabalho);
            break;
            case 3:
                system("cls");
                listaViagens();
                printf("\nREMOCAO DE VIAGEM\n\n");
                printf("\nInforme o ID do carro: ");
                scanf("%d",&carroID);
                if (carroID > contadorCarros){
                    printf("ID nao cadastrado\n");
                    printf("Digite qualquer tecla para continuar: ");
                    scanf("%s", &linuxDaTrabalho);
                }
                else{
                    carroID--;
                    int viagem;
                    printf("Informe o numero da viagem para remover: ");
                    scanf("%d",&viagem);
                    for(int i = viagem-1; i < veiculos[carroID].auxViagem - 1; i++){
                        veiculos[carroID].data[i] = veiculos[carroID].data[i+1];
                        veiculos[carroID].kmViagem[i] = veiculos[carroID].kmViagem[i+1];
                    }
                    system("cls");
                    veiculos[carroID].auxViagem--;
                    mostrarViagens(carroID);
                    printf("\nViagem removida... Digite qualquer tecla para prosseguir: ");
                    scanf("%d", &viagem);
                }
            break;
            default:
                    printf("Opcao Invalida");
        }
    }while(opc!=0);
    system("cls");
}

void listaViagens(){
    system("cls");
    printf("LISTA DE VIAGENS\n\n");
    for (int i = 0; i < contadorCarros; i++){
        printf("[%d] %s, %s, %s, %d\n",i+1, veiculos[i].placa, veiculos[i].marca, veiculos[i].modelo, veiculos[i].km);
        if (veiculos[i].kmViagem[0] == 0)
            printf("    Nenhuma viagem cadastrada\n");
        else{
            for (int j = 0; j < veiculos[i].auxViagem; j++){
                printf("    Viagem [%d] data: %d/%d/%d quilometragem: %d\n",j+1, veiculos[i].data[j].dia, veiculos[i].data[j].mes, veiculos[i].data[j].ano, veiculos[i].kmViagem[j]);
            }
        }
    }
}

void mostrarViagens(int id){
    printf("[%d] %s, %s, %s, %d\n",id+1, veiculos[id].placa, veiculos[id].marca, veiculos[id].modelo, veiculos[id].km);
    if (veiculos[id].auxViagem == 0){
            printf("    Nenhuma viagem cadastrada\n");
            return;
    }
    printf("    Viagens: \n");
    for (int i = 0; i < veiculos[id].auxViagem; i++){
        printf("    [%d] Data: %d/%d/%d, Quilometragem: %d\n", i+1, veiculos[id].data[i].dia, veiculos[id].data[i].mes, veiculos[id].data[i].ano, veiculos[id].kmViagem[i]);
    }
}

void salvarArquivoBin(){
    FILE *arquivo = fopen("veiculos.bin", "wb+");
    if (arquivo == NULL){
        printf("Erro ao salvar o arquivo");
        return 1;
    }
    fwrite(&contadorCarros, sizeof(int), 1, arquivo);
    fwrite(&veiculos, sizeof(Veiculo), contadorCarros, arquivo);
    fclose(arquivo);
}

void exportarCSV(){
    FILE *arquivo = fopen("veiculos.csv", "w");
    if (arquivo == NULL){
        printf("Erro ao salvar o arquivo");
        return;
    }
    for (int i = 0; i < contadorCarros; i++){
        fprintf(arquivo, "%s,%s,%s,%dKM", veiculos[i].placa, veiculos[i].marca, veiculos[i].modelo, veiculos[i].km);
        if (veiculos[i].auxViagem == 0){
            fprintf(arquivo, ",Nenhuma viagem cadastrada");
        }
        for (int j = 0; j < veiculos[i].auxViagem; j++)
            fprintf(arquivo,",Viagem[%d]:%d/%d/%d,%dKM",j+1, veiculos[i].data[j].dia, veiculos[i].data[j].mes, veiculos[i].data[j].ano, veiculos[i].kmViagem[j]);
        fprintf(arquivo, "\n");
    }
    fclose(arquivo);
}
