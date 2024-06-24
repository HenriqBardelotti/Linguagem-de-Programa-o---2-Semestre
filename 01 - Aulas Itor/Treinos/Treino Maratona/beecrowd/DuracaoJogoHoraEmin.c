#include <stdio.h>

int main() {

    int hi,mi,hf,mf;
    scanf("%d %d %d %d",&hi,&mi,&hf,&mf);
    if (hi == 0 && hf == 0){
        if (mi == mf)
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        else if(mf>mi)
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",mf-mi);
        else
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",(60-mi)+mf);
    }
    else if (hi == 0){
        if (mf>=mi)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",mf,mf-mi);
        else
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",mf,(60-mi)+mf);
    }
    else if(hi==hf){
        if(mi>mf)
            printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",(60-mi)+mf);
        else if (mi==mf)
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        else
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",mf-mi);
    }
    else if (hi>hf){
        if (hi == 23 && hf == 0){
            if (mi<mf)
                printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",mf-mi);
            else if (mi==mf)
                printf("O JOGO DUROU 1 HORA(S) E 0 MINUTO(S)\n",mf-mi);
            else
                printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",(60-mi)+mf);
        }
        else {
            if(mi<=mf){
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-hi)+hf,mf-mi);
            }
            else
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-hi)+hf,(60-mi)+mf);
            }
    }
    else{
         if(mi<=mf)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hf-hi,mf-mi);
         else
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hf-hi,(60-mi)+mf);
    }
    return 0;
}
