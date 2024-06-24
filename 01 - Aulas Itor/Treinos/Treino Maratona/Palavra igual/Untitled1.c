//Palíndromo

#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000];
    gets(frase);
    char aux[strlen(frase)];
    for (int i = 0, j = 0; i < strlen(frase); i++){
        if (frase[i] != ' ' && frase[i] != '.' && frase[i] != ',' && frase[i] != '!' && frase[i] != '?'){
            aux[j] = frase[i];
            j++;
        }
    }
    printf("\n%s",aux);
    return 0;
}
