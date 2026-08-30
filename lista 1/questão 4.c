#include <stdio.h>

int main() {
    float salario, novo;
    scanf("%f", &salario);
    novo = salario * 1.25;
    printf("Novo salario: %.2f\n", novo);
    return 0;
}