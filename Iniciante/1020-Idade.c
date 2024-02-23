#include <stdio.h>

int main() {
    int dias;
    scanf("%d", &dias);

    int anos = dias / 365;
    dias %= 365;
    int meses = dias / 30;
    dias %= 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
    return 0;
}
