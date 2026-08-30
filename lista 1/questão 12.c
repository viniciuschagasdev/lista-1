#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2;
    scanf("%f %f", &n1, &n2);
    if (n1 > 0 && n2 > 0) {
        printf("Resultado: %.2f\n", pow(n1, n2));
    }
    return 0;
}