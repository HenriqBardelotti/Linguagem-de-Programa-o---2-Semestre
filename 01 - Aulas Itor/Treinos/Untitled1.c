#include <stdio.h>

int main() {
    int valor;
    scanf("%d",&valor);
    int notas100 = valor/100;
        valor -= notas100*100;
    int notas50 = valor/50;
        valor -= notas50*50;
    int notas20 = valor/20;
        valor -= notas20*20;
    int notas10 = valor/10;
        valor -= notas10*10;
    int notas5 = valor/5;
        valor -= notas5*5;
    int notas2 = valor/2;
        valor -= notas2*2;
    int notas1 = valor;


    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",notas100,notas50,notas20,notas10,notas5,notas2,notas1);
    return 0;
}
/*#include <stdio.h>

int main() {
    int valor;
    scanf("%d",&valor);
    int notas100 = valor/100;
    int notas50 = (valor-notas100*100)/50;
    int notas20 = (valor-notas100*100-notas50*50)/20;
    int notas10 = (valor-notas100*100-notas50*50-notas20*20)/10;
    int notas5 = (valor-notas100*100-notas50*50-notas20*20-notas10*10)/5;
    int notas2 = (valor-notas100*100-notas50*50-notas20*20-notas10*10-notas5*5)/2;
    int notas1= (valor-notas100*100-notas50*50-notas20*20-notas10*10-notas5*5-notas2*2);
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",notas100,notas50,notas20,notas10,notas5,notas2,notas1);
    return 0;
}*/
