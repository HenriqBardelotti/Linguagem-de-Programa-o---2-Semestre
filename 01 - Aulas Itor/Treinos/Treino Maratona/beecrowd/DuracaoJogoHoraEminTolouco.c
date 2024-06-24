#include <stdio.h>

int main() {

    int hi,mi,hf,mf,hora,minuto;
    scanf("%d %d %d %d",&hi,&mi,&hf,&mf);
    if(hi>hf)
        hora=(24-hi)+hf;

    if(hi<hf)
        hora=hf-hi;

    if(hi==hf)
        hora=0;

    if(mi<=mf)
        minuto = mf-mi;

    if(mi>mf)
        minuto = (60-mi)+mf;

    if(mi==mf)
        minuto = 0;
    if(hora == 0 && hi > hf)
        hora = 23;
    printf("O JOGO DUROU 1 HORA(S) E 0 MINUTO(S)\n",hora,minuto);
    /*
    if(hi==hf&&mi==mf)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if(hora == 0 && hi > hf)
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",minuto);
    else if(hora == 0 && hf > hi)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hf,minuto);
    else if(hi == 23 && hf == 0){
        if (mi==mf)
            printf("O JOGO DUROU 1 HORA(S) E 0 MINUTO(S)\n");
        else
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",(60-mi)+mf);
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minuto);*/
    return 0;
}
