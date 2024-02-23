#include <stdio.h>

int main() {
    double N;
    scanf("%lf", &N);

    printf("NOTAS:\n");
    int i;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    for(i=0; i < 6; i++){
        int qtdNotas = N / notas[i];
        N -= qtdNotas * notas[i];
        printf("%d nota(s) de R$ %.2lf\n", qtdNotas, (double)notas[i]);
    }

    printf("MOEDAS:\n");
    int moedas[6] = {100, 50, 25, 10, 5, 1};
    for(i=0; i < 6; i++){
        int qtd = N / (moedas[i] / 100.0);
        N -= qtd * (moedas[i] / 100.0);
        printf("%d moeda(s) de R$ %.2lf\n", qtd, (moedas[i] / 100.0));
    }
    return 0;
}
