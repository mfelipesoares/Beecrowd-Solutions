#include <stdio.h>

int main() {
    int numero, valorHora;
    float recebePorHora;
    scanf("%d%d%f", &numero, &valorHora, &recebePorHora);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, valorHora * recebePorHora);
    return 0;
}
