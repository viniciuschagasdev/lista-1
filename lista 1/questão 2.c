#include <stdio.h>

int main() {
    float num1, num2, num3, media;
    printf("Coloque as tres notas do aluno: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    media = (num1 + num2 + num3) / 3;

        printf(" A media final do aluno e: %.2f\n", media);

        return 0;

}   