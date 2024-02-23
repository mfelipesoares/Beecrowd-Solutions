#include <stdio.h>

int main() {
    double A,B,C;
    scanf("%lf%lf%lf", &A,&B,&C);

    if (A + B > C && A + C > B && B + C > A) {
       printf("Perimetro = %.1lf\n", A+B+C);
    }else{
        double area = ((A+B)*C) / 2.0;
        printf("Area = %.1lf\n", area);
    }
    return 0;
}
