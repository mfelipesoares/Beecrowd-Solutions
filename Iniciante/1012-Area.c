#include <stdio.h>

int main() {
    double A, B, C;
    const double pi = 3.14159;
    double aTriangulo, aCirculo, aTrapezio, aQuadrado, aRetangulo;
    scanf("%lf%lf%lf", &A, &B, &C);
    aTriangulo = (A * C) / 2.0;
    aCirculo = pi * C * C;
    aTrapezio = ((A + B) / 2.0) * C;
    aQuadrado = B * B;
    aRetangulo = A * B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", aTriangulo, aCirculo, aTrapezio, aQuadrado, aRetangulo);
    return 0;
}
