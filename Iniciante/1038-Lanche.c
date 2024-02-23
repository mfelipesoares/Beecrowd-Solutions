#include <stdio.h>

int main() {
    int codigo, qtd;
    scanf("%d%d", &codigo, &qtd);
    double preco[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    double valor = preco[codigo - 1] * qtd;
    printf("Total: R$ %.2lf\n", valor);
    return 0;
}
