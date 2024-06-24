#include <stdio.h>

int main(){
    int A, N, aux;
    char portas[101];
    do {
        //printf("\nInforme A: ");
        scanf("%d",&A); //quantidade de andares
        //printf("\nInforme operacoes: ");
        scanf("%d",&N); //numero de vezes que o programa ira rodar
        for (int i = 1; i<= A; i++){
            portas[i] = 'C';
        }
        if (A == 1){
            int contador = 0;
            while (contador < N){
                scanf("%d",&aux);
                if (portas[1] == 'C')
                    portas[1] = 'O';
                else
                    portas[1] = 'C';
                contador++;
            }
        }
        else{
            for (int i = 1; i<=N; i++){
                scanf("%d",&aux);
                if (aux != 1){
                    for (int j = 1; j<= A; j++){
                        if (j%aux == 0 && j != 1){
                            if (portas[j] == 'C')
                                portas[j] = 'O';
                            else
                                portas[j] = 'C';
                        }
                    }
                }
                else{
                    for (int j = 1; j<= A; j++){
                        if (portas[j] == 'C')
                            portas[j] = 'O';
                        else
                            portas[j] = 'C';
                    }
                }
            }
        }
        for (int i = 1; i <= A; i++){
            printf("%c",portas[i]);
            if (i==A)
                printf("\n");
        }


    }while (A != 0 && N != 0);
}
