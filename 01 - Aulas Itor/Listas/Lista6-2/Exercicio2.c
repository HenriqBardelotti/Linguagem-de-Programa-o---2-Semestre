#include <stdio.h>

void ler();

int main(){
    ler();
    return 0;
}

void ler(){
    int nums[5];
    FILE *arquivo = fopen("numeros.bin", "rb");
    if (arquivo == NULL){
        printf("Error");
        return;
    }
    fread(&nums, sizeof(int), 5, arquivo);
    for (int i = 0; i < 5; i++){
        printf("%d ", nums[i]);
    }

    fclose(arquivo);
}
