/*Desenvolva um programa para gerenciar reservas de hotel, criando uma estrutura para armazenar os dadosde cada reserva. A estrutura deve incluir o nome do hóspede, o número do quarto, a data de check-in e adata de check-out. Em seguida, crie um array contendo N reservas, leia os dados de entrada, calcule aduração da estadia em dias para cada reserva e exiba os resultados.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int numReservas;

typedef struct{
    int dia, mes, ano;
}Checkin;

typedef struct{
    int dia, mes, ano;
}Checkout;

typedef struct{
    char nome[100];
    int numeroQuarto;
    Checkin entrada;
    Checkout saida;
    int duracaoEstadia;
}Hospedes;

void cadastrarHospede(Hospedes reserva[]);
void calcularDias(Hospedes reserva[]);
void imprimirDias(Hospedes reserva[]);

int main(){
    printf("Informe o numero de reservas: ");
    scanf("%d",&numReservas);
    Hospedes reserva[numReservas];
    cadastrarHospede(reserva);
    calcularDias(reserva);
    imprimirDias(reserva);
    return 0;
}

void cadastrarHospede(Hospedes reserva[]){
    for (int i = 0; i < numReservas; i++){
        system("cls");
        getchar();
        printf("\nHospede %d:\n\n",i+1);
        printf("Nome: ");
        scanf("%[^\n]", reserva[i].nome);
        while (getchar() != '\n');
        printf("Numero do quarto: ");
        while (scanf("%d", &reserva[i].numeroQuarto) != 1){
            printf("Numero invalido, digite novamente: ");
            scanf("%d", &reserva[i].numeroQuarto);
            while (getchar() != '\n');
        }
        printf("Data do check-in dia/mes/ano: ");
        scanf("%d/%d%/%d", &reserva[i].entrada.dia, &reserva[i].entrada.mes, &reserva[i].entrada.ano);
        printf("Data do check-out dia/mes/ano: ");
        scanf("%d/%d%/%d", &reserva[i].saida.dia, &reserva[i].saida.mes, &reserva[i].saida.ano);
    }
}

void calcularDias(Hospedes reserva[]){
    int auxDia, auxMes, auxAno;
    for (int i = 0; i < numReservas; i++){
        auxDia = reserva[i].saida.dia - reserva[i].entrada.dia;
        auxMes = reserva[i].saida.mes - reserva[i].entrada.mes;
        auxAno = reserva[i].saida.ano - reserva[i].entrada.ano;
        if (auxDia < 0)
            auxDia += 31;
        if (auxMes < 0)
            auxMes += 12;
        if (auxMes == 0){
            reserva[i].duracaoEstadia = auxDia;
            if (auxAno > 1)
                reserva[i].duracaoEstadia += auxAno*365;
            else if (auxAno == 1){
                if (auxDia == 0 && auxMes == 0)
                    reserva[i].duracaoEstadia = 365;
                else
                    reserva[i].duracaoEstadia = 365 + reserva[i].saida.dia - reserva[i].entrada.dia;
            }
        }
        else if (auxMes == 1){
            if (reserva[i].entrada.dia > reserva[i].saida.dia)
                reserva[i].duracaoEstadia = auxDia;
            else
                reserva[i].duracaoEstadia = auxDia+31;
            if (auxAno > 1)
                reserva[i].duracaoEstadia += auxAno*365;
            else if (auxAno == 1)
                reserva[i].duracaoEstadia += 365;
        }
        else if (auxMes > 1){
            if (reserva[i].entrada.dia > reserva[i].saida.dia)
                reserva[i].duracaoEstadia = (auxMes-1)*31 + auxDia;
            else
                reserva[i].duracaoEstadia = auxMes*31 + auxDia;
            if (auxAno > 1)
                reserva[i].duracaoEstadia += auxAno*365;
            else if (auxAno == 1)
                reserva[i].duracaoEstadia += 365;
        }
    }
}

void imprimirDias(Hospedes reserva[]){
    system("cls");
    for (int i = 0; i < numReservas; i++){
        printf("Hospede %d\n\n", i+1);
        printf("Nome: %s\n", reserva[i].nome);
        printf("Quarto: %d\n", reserva[i].numeroQuarto);
        printf("Data de check-in: %d/%d/%d\n", reserva[i].entrada.dia, reserva[i].entrada.mes, reserva[i].entrada.ano);
        printf("Data de check-out: %d/%d/%d\n", reserva[i].saida.dia, reserva[i].saida.mes, reserva[i].saida.ano);
        printf("Dias hospedado: %d dias\n\n", reserva[i].duracaoEstadia);
    }
}
