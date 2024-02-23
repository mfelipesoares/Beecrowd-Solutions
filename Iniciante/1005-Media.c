#include <stdio.h>

int main() {
    double A, B, media;
    scanf("%lf%lf", &A, &B);
    media = ((3.50 * A) + (7.50 * B)) / 11.00;
    printf("MEDIA = %.5lf\n", media);
    return 0;
}
