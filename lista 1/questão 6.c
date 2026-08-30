#include <stdio.h>

int main() {
    float base, receber;
    scanf("%f", &base);
    receber = base + (base * 0.05) - (base * 0.07);
    printf("Salario a receber: %.2f\n", receber);
    return 0;
}