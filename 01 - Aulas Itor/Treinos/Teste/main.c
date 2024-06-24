#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int negativo = 0;
    char texto[11], dia[4],mes[3],ano[5];
    scanf("%s",&texto);
    char barra = '/';
    strcat(texto,&barra); //concatena strings
    int aux = 0;
    while(texto[aux]!='/'){
        dia[aux]=texto[aux];
        aux++;
    }
    aux++;
    int a = 0;
    while(texto[aux]!='/'){
        mes[a]=texto[aux];
        a++;
        aux++;
    }
    aux++;
    if (texto[aux] == '-'){
        negativo=1;
        aux++;
    }
    int b = 0;
    while(texto[aux]!='/'){
        ano[b]=texto[aux];
        b++;
        aux++;
    }
    int numDia = atoi(dia), numMes = atoi(mes), numAno = atoi(ano);
    printf("\ndia = %d",numDia);
    printf("\nmes = %d",numMes);
    printf("\nano = %d",numAno);
    int diasTotais = numDia;
    for (int i = 1; i<numDia;i++){
        if (i%2!=0 && i<8 || i)
    }
    return 0;
}
