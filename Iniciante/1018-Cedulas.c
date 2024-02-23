#include <stdio.h>

int main() {
    int N, qtd;
    scanf("%d", &N);
    printf("%d\n", N);

    int nota100 = N / 100;
    N %= 100;
    printf("%d nota(s) de R$ 100,00\n", nota100);

    int nota50 = N / 50;
    N %= 50;
    printf("%d nota(s) de R$ 50,00\n", nota50);

    int nota20 = N / 20;
    N %= 20;
    printf("%d nota(s) de R$ 20,00\n", nota20);

    int nota10 = N / 10;
    N %= 10;
    printf("%d nota(s) de R$ 10,00\n", nota10);

    int nota5 = N / 5;
    N %= 5;
    printf("%d nota(s) de R$ 5,00\n", nota5);

    int nota2 = N / 2;
    N %= 2;
    printf("%d nota(s) de R$ 2,00\n", nota2);

    int nota1 = N / 1;
    N %= 1;
    printf("%d nota(s) de R$ 1,00\n", nota1);
    return 0;
}
