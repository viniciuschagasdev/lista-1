#include <stdio.h>

int main() {
    float saco_kg, racao_g, resto;
    scanf("%f %f", &saco_kg, &racao_g);
    resto = (saco_kg * 1000) - (2 * racao_g * 5);
    printf("Restarao %.2f gramas no saco\n", resto);
    return 0;
}