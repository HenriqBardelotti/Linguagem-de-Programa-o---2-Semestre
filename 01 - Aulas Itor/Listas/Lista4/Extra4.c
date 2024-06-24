//Escreva uma função recursiva para inverter uma string. Por exemplo, a string "hello" deve ser invertida para"olleh".
#include <stdio.h>
#include "funcoes.c"
#include <string.h>

void inverterString(int tamanho, char frase[tamanho]){
    if (tamanho >= 0){
        printf("%c",frase[tamanho]);
        inverterString(tamanho-1, frase);
    }
}

int main(){
    char string[1000];
    gets(string);
    inverterString(strlen(string),string);
    return 0;
}

/*int main(){
    char string[1000];
    scanf("%s",string);
    for (int i = strlen(string); i>=0; i--)
        printf("%c",string[i]);
    return 0;
}*/
