#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num;
    char verificar[11];
    char alfabeto[27] = {'A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char alfabeto2[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',};
    scanf("%d %s",&num,&verificar);
    if (strcmp(verificar, "maiusculas")==0){
        for (int j = 0, x = 0; j<num; j++){
            for (int i = 0; i<27-x-1; i++){
                printf(".");
            }
        for (int i = 0; i<=x; i++){
            printf("%c",alfabeto[i]);
        }
        printf("\n");
        x++;
        }
    }
    else{
        for (int j = 0, x = 0; j<num; j++){
        for (int i = 0; i<27-x-1; i++){
            printf(".");
        }
        for (int i = 0; i<=x; i++){
            printf("%c",alfabeto2[i]);
        }
            printf("\n");
            x++;
        }
    }

    return 0;
}
