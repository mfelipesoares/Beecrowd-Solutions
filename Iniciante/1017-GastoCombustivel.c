#include <stdio.h>

int main() {
    int tempo, velocidadeMedia;
    scanf("%d%d", &tempo, &velocidadeMedia);
    double litros = ((tempo * velocidadeMedia)/(12.0));
    printf("%.3lf\n", litros);
    return 0;
}
