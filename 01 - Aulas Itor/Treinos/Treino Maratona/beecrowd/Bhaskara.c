#include <stdio.h>
#include <math.h>

int main() {

    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    double delta = pow(B,2) - 4 * A * C;
    if (delta <= 0 || A == 0)
        printf("Impossivel calcular\n");
    else{
        double R1 = (-B + sqrt(delta))/(2 * A);
        double R2 = (-B - sqrt(delta))/(2 * A);
        if (R1 == 0 && R2 == 0)
            printf("Impossivel calcular\n");
        else
            printf("R1 = %.5lf\nR2 = %.5lf",R1,R2);

    }
    return 0;
}
