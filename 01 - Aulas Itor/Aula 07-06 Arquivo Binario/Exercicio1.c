//Crie um programa em C que receba 5 n�meros inteiros do usu�rio e os salve em um arquivo bin�rio chamado numeros.bin.

#include <stdio.h>

void escrever();

int num;

int main(){
    escrever();
    return 0;
}

void escrever(){
    FILE *arquivo = fopen("numeros.bin", "wb");
    if (arquivo == NULL){
        printf("Error");
        return;
    }
    for (int i = 0; i < 5; i++){
        setbuf(stdin,NULL);
        scanf("%d",&num);
        fwrite(&num, sizeof(int), 1, arquivo);
    }
    fclose(arquivo);
}

