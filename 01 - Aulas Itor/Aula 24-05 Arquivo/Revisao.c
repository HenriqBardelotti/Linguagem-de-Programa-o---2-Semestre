#include <stdio.h>


void lerNotas(int i, int j, float mat[i][j]);

int main(){
    float mat[2][4], maior[2], media[2];
    lerNotas(2,4,mat);
}

void lerNotas(int i, int j, float mat[i][j]){

}

/*int main(){
    float mat[2][4], maior[2], media[2] = {0,0};
    for (int i = 0; i < 2; i++){
        printf("Aluno %d\n\n", i+1);
        for (int j = 0; j < 4; j++ ){
            printf("N%d:",j+1);
            scanf("%f", &mat[i][j]);
            if (j == 0)
                maior[i] = mat[i][j];
            else{
                if(mat[i][j] > maior[i])
                    maior[i] = mat[i][j];
            }
            media[i] += mat[i][j];
        }
        printf("\n");
    }
    media[0] /= 4;
    media[1] /= 4;
    for (int i = 0; i < 2; i++){
        printf("Aluno %d\n\n", i+1);
        if (media[i] < 6)
            printf("Precisa estudar mais");
        else if(media[i] <8)
            printf("Esta na media");
        else
            printf("Parabens");
        printf("\nMedia: %.2f",media[i]);
        printf("\nMaior nota: %.2f\n\n", maior[i]);
    }
    return 0;
}*/

/*int main(){
    float vet[4], maior, media = 0;
    for (int i = 0; i < 4; i++){
        printf("Informe N%d: ",i+1);
        scanf("%f",&vet[i]);
        if (i == 0)
            maior = vet[i];
        else{
            if (vet[i] > maior)
                maior = vet[i];
        }
        media += vet[i];
    }
    media /= 4;
    if (media < 6)
        printf("Precisa estudar mais");
    else if(media <8)
        printf("Esta na media");
    else
        printf("Parabens");
    printf("\nMedia: %.2f",media);
    printf("\nMaior nota: %.2f", maior);
    return 0;
}*/

/*int main(){
    float n1, n2, media;
    scanf("%f %f", &n1, &n2);
    media = (n1+n2)/2;
    if (media < 6)
        printf("Precisa estudar mais");
    else if(media <8)
        printf("Esta na media");
    else
        printf("Parabens");
    if (n1>n2)
        printf("\nMaior nota: %.2f",n1);
    else if(n2>n1)
        printf("\nMaior nota: %.2f",n2);
    else
        printf("\nn1 = n2 = %.2f", n1);
    return 0;
}*/
