#include <stdio.h>

int main() {
    double N;
    scanf("%lf", &N);

    if(N >= 0.0 && N <= 25.0){
        printf("Intervalo [0,25]\n");
        return 0;
    } else if(N > 25.0 && N <= 50.0){
        printf("Intervalo (25,50]\n");
        return 0;
    } else if(N > 50 && N <= 75.0){
        printf("Intervalo (50,75]\n");
        return 0;
    } else if(N > 75.0 && N <= 100.0){
        printf("Intervalo (75,100]\n");
        return 0;
    }else{
        printf("Fora de intervalo\n");
        return 0;
    }
    return 0;
}
