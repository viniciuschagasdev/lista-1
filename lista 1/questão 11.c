#include <stdio.h>
#include <math.h>

int main() {
    float num;
    scanf("%f", &num);
    if (num > 0) {
        printf("Quadrado: %.2f\n", pow(num, 2));
        printf("Cubo: %.2f\n", pow(num, 3));
        printf("Raiz Quadrada: %.2f\n", sqrt(num));
        printf("Raiz Cubica: %.2f\n", cbrt(num));
    }
    return 0;
}