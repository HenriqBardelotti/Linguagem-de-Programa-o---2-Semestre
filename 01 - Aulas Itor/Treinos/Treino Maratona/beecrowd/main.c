#include <stdio.h>

int main() {

    int diasInformado, meses = 0, dias = 0;
    scanf("%d",&diasInformado);
    int anos = diasInformado/365;
    if (anos == 0){
        meses = diasInformado/30;
        dias = diasInformado-meses*30;
    }
    else{
        meses = (diasInformado-anos*365)/30;
        dias = (diasInformado-anos*365)-(meses*30);
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,meses,dias);
    return 0;
}
