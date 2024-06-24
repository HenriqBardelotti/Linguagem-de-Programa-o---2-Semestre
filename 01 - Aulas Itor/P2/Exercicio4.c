#include <stdio.h>

int main(){
    int numLampadas, numJogadores;
    printf("Numero lampadas: ");
    scanf("%d", &numLampadas);
    printf("\nNumero jogadores: ");
    scanf("%d", &numJogadores);
    char lampadas[numLampadas];
    for (int i = 0; i < numLampadas; i++){
        lampadas[i] = 'D';
    }
    for (int i = 0; i < numJogadores; i++){
        int num;
        printf("Numero: ");
        scanf("%d",&num);
        for (int j = 1; j <= numLampadas; j++){
            if (j%num == 0){
                if (lampadas[j-1] == 'D')
                    lampadas[j-1] = 'L';
                else if (lampadas[j-1] == 'L')
                    lampadas[j-1] = 'P';
                else
                    lampadas[j-1] = 'D';
            }
        }
    }
    for (int i = 0; i < numLampadas; i++)
        printf("%c ", lampadas[i]);
    return 0;
}
