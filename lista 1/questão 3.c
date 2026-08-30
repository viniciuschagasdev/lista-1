#include <stdio.h>

int main() {
    float nu1, n2, n3, p1, p2, p3, media;

    printf("Digite as tres notas separadas por espaco: ");
    scanf("%f %f %f", &nu1, &n2, &n3);

    printf("Digite os pesos das tres notas separadas por espaco: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    media = (nu1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("A media ponderada do aluno e: %.2f\n", media);

    return 0;
}