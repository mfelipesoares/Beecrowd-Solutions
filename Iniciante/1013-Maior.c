#include <stdio.h>

int main() {
    int primeiro, segundo, terceiro, maior;
    scanf("%d%d%d", &primeiro, &segundo, &terceiro);
    if(primeiro > segundo){
        maior = primeiro;
        if(terceiro > primeiro) maior = terceiro;
    }else{
        maior = segundo;
        if(terceiro > segundo) maior = terceiro;
    }
    printf("%d eh o maior\n", maior);
    return 0;
}
