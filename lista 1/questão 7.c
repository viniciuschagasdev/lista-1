#include <stdio.h>

int main() {
    float base, receber;
    scanf("%f", &base);
    receber = base + 50.00 - (base * 0.10);
    printf("Salario a receber: %.2f\n", receber);
    return 0;
}