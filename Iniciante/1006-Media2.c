#include <stdio.h>

int main() {
    double A, B, C, media;
    scanf("%lf%lf%lf", &A,&B,&C);
    media = ((2.0 * A) + (3.0 * B) + (5.0 * C)) / 10.00;
    printf("MEDIA = %.1lf\n", media);
    return 0;
}
