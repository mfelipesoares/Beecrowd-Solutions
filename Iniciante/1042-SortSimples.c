#include <stdio.h>

int main() {
    int numero[3];
    int sort[3];
    int i,j;
    for(i=0; i<3;i++){
        scanf("%d", &numero[i]);
    }
    for(i=0; i<3;i++) sort[i] = numero[i];
    //ordena:
    int temp;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i; j++) {
            if (sort[j] > sort[j + 1]) {
                // Troca os sort
                temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", sort[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", numero[i]);
    }
    return 0;
}
