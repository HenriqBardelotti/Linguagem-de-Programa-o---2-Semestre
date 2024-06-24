#include <stdio.h>

int main(){
    int mat[3][3], interacao = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d",&mat[i][j]);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int a = 0; a < 3; a++){
                for (int b = 0; b < 3; b++){
                    if (mat[i][j] < mat[a][b]){
                        int aux = mat[a][b];
                        mat[a][b] = mat[i][j];
                        mat[i][j] = aux;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
    printf("\n\nInteracoes = %d",interacao);
    return 0;
}

/*int vet[5];
    for (int i = 0; i < 5; i++)
        scanf("%d",&vet[i]);
    for (int i = 0; i < 5; i++){
        for (int j = i+1; j < 5; j++){
            if (vet[i] > vet[j]){
                int aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    for (int i = 0; i < 5; i++)
        printf("%d ", vet[i]);*/
