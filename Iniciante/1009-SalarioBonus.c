#include <stdio.h>

int main() {
    char nome[55];
    double salarioFixo, valorVenda, comissao = 0.15;
    scanf("%s", &nome);
    scanf("%lf%lf", &salarioFixo, &valorVenda);
    salarioFixo += valorVenda * comissao;
    printf("TOTAL = R$ %.2lf\n", salarioFixo);
    return 0;
}
