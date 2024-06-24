#include <stdio.h>

typedef struct{
    char destino[100];
    float distancia;
    int numVoo;
}Voo;

typedef struct{
    Voo voos[2];
    char id[100];
    float distanciaTotal;
}Aviao;

Aviao aeronave[3];

void cadastrarAviao();
void cadastrarVoo();
void distanciaTotal();
void ordenarAvioes();
void exibirResultados();

int main(){
    int opc;
    do{
        printf("Menu\n\n1 - Cadastrar aviao\n2 - Cadastrar voo\n3 - Calcular distancia\n4 - Ordenar Avioes\n5 - Exibir\n0 - Sair\n\nInforme: ");
        scanf("%d", &opc);
        switch (opc){
            case 1:
                cadastrarAviao();
                break;
            case 2:
                cadastrarVoo();
                break;
            case 3:
                distanciaTotal();
                break;
            case 4:
                ordenarAvioes();
                break;
            case 5:
                exibirResultados();
                break;
            case 0:
                printf("FIM");
                break;
            default:
                printf("Opcao Invalida");
                break;
        }
    }while (opc != 0);
    return 0;
}

void cadastrarAviao(){
    for (int i = 0; i < 3; i++){
        printf("\nCadastro aviao [%d]", i+1);
        printf("\nID: ");
        scanf("%s", aeronave[i].id);
        aeronave[i].distanciaTotal = 0; //inicia distancia em zero para operacao futura
    }
}

void cadastrarVoo(){
    printf("Cadastro de Voos\n\n");
    for (int i = 0; i < 3; i++){
        printf("Aeronave id = %s\n", aeronave[i].id);
        for (int j = 0; j < 2; j++){
            printf("Voo [%d]\n", j+1);
            getchar();
            printf("    Destino: ");
            scanf("%[^\n]", aeronave[i].voos[j].destino);
            printf("    Distancia: ");
            scanf("%f", &aeronave[i].voos[j].distancia);
            printf("    Numero do voo: ");
            scanf("%d", &aeronave[i].voos[j].numVoo);
            aeronave[i].distanciaTotal += aeronave[i].voos[j].distancia; //Aqui já somo a distância no total, para reduzir operações
        }
    }
}

void distanciaTotal(){
    printf("Distancia percorrida: \n\n");
    for (int i = 0; i < 3; i++){
        printf("Aviao %s: %.2f KM\n", aeronave[i].id, aeronave[i].distanciaTotal);
    }
}

void ordenarAvioes(){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            if (aeronave[j].distanciaTotal < aeronave[j + 1].distanciaTotal) {
                Aviao aux = aeronave[j];
                aeronave[j] = aeronave[j + 1];
                aeronave[j + 1] = aux;
            }
        }
    }
}

void exibirResultados(){
    float maior = aeronave[0].voos[0].distancia, menor = aeronave[0].voos[0].distancia;
    int auxMaior[2] = {0,0}, auxMenor[2] = {0,0};
    for (int i = 0; i < 3; i++){
        printf("Aviao: %s\n", aeronave[i].id);
        for (int j = 0; j < 2; j++){
            if (aeronave[i].voos[j].distancia < menor){
                menor = aeronave[i].voos[j].distancia;
                auxMenor[0] = i;
                auxMenor[1] = j;
            }
            if (aeronave[i].voos[j].distancia > maior){
                maior = aeronave[i].voos[j].distancia;
                auxMaior[0] = i;
                auxMaior[1] = j;
            }

            printf("   Voo para %s, Distancia: %.2f km, Numero do voo: %d\n", aeronave[i].voos[j].destino, aeronave[i].voos[j].distancia, aeronave[i].voos[j].numVoo);
        }
        printf("   Distancia total pecorrida: %.2f\n\n", aeronave[i].distanciaTotal);
    }
    printf("Voo com maior distancia: %d\n", aeronave[auxMaior[0]].voos[auxMaior[1]].numVoo);
    printf("Voo com menor distancia: %d\n\n", aeronave[auxMenor[0]].voos[auxMenor[1]].numVoo);
}
