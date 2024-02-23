#include <stdio.h>

int main() {
    double nota1, nota2, nota3, nota4;
    scanf("%lf%lf%lf%lf", &nota1, &nota2, &nota3, &nota4);
    double media = ( (2.0 * nota1) + (3.0 * nota2) + (4.0 *nota3) + (1.0 * nota4) ) / (10.0);
    printf("Media: %.1lf\n", media);
    if(media >= 7.0) printf("Aluno aprovado.\n");
    else if(media >= 5.0 && media <= 6.9){
        printf("Aluno em exame.\n");
        double exame;
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        media = (exame + media) / 2.0;
        if(media >= 5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", media);
    } else{
        printf("Aluno reprovado.\n");
    }

    return 0;
}
