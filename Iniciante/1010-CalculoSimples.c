#include <stdio.h>

int main() {
    int numeroPeca1, codigoPeca1, numeroPeca2, codigoPeca2;
    double valorUnitario1, valorUnitario2, total;
    scanf("%d%d%lf", &codigoPeca1, &numeroPeca1, &valorUnitario1);
    scanf("%d%d%lf", &codigoPeca2, &numeroPeca2, &valorUnitario2);
    total = (numeroPeca1 * valorUnitario1) + (numeroPeca2 * valorUnitario2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
