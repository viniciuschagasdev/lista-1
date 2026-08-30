#include <stdio.h>

int main() {
    float salario, chq1, chq2, saldo;
    scanf("%f %f %f", &salario, &chq1, &chq2);
    saldo = salario - (chq1 + (chq1 * 0.0038)) - (chq2 + (chq2 * 0.0038));
    printf("Saldo atual: %.2f\n", saldo);
    return 0;
}