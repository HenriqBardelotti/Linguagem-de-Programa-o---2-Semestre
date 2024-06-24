/*Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.*/
#include <stdio.h>

int main(){
    double n;
    scanf("%lf",&n);
    int notas100 = n/100;
    int notas50 = (n - notas100*100)/50;
    int notas20 = (n - notas100*100 - notas50*50)/20;
    int notas10 = (n - notas100*100 - notas50*50 - notas20*20)/10;
    int notas5 = (n - notas100*100 - notas50*50 - notas20*20 - notas10*10)/5;
    int notas2 = (n - notas100*100 - notas50*50 - notas20*20 - notas10*10 - notas5*5)/2;
    int moeda1 = (n - notas100*100 - notas50*50 - notas20*20 - notas10*10 - notas5*5 - notas2*2)/1;
    double moedas = (n - notas100*100 - notas50*50 - notas20*20 - notas10*10 - notas5*5 - notas2*2 - moeda1*1);
    double moeda50 = 0, moeda25 = 0, moeda10 = 0, moeda5 = 0, moeda01 = 0;
    while (moedas > 0.50){
        moeda50 = 1;
        moedas -= 0.5;
    }
    while (moedas > 0.25){
        moeda25 += 1;
        moedas -= 0.25;
    }
    while (moedas > 0.10){
        moeda10 += 1;
        moedas -= 0.10;
    }
    while (moedas > 0.05){
        moeda5 += 1;
        moedas -= 0.05;
    }
    while (moedas > 0.01){
        moeda01 += 1;
        moedas -= 0.01;
    }
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",notas100);
    printf("%d nota(s) de R$ 50.00\n",notas50);
    printf("%d nota(s) de R$ 20.00\n",notas20);
    printf("%d nota(s) de R$ 10.00\n",notas10);
    printf("%d nota(s) de R$ 5.00\n",notas5);
    printf("%d nota(s) de R$ 2.00\n",notas2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",(int)moeda1);
    printf("%d moeda(s) de R$ 0.50\n",(int)moeda50);
    printf("%d moeda(s) de R$ 0.25\n",(int)moeda25);
    printf("%d moeda(s) de R$ 0.10\n",(int)moeda10);
    printf("%d moeda(s) de R$ 0.05\n",(int)moeda5);
    printf("%d moeda(s) de R$ 0.01\n",(int)moeda01);
    return 0;
}
