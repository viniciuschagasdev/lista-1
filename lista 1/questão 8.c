#include <stdio.h>

int main() {
    float dep, taxa, rend, total;
    scanf("%f %f", &dep, &taxa);
    rend = dep * (taxa / 100);
    total = dep + rend;
    printf("Rendimento: %.2f\nTotal: %.2f\n", rend, total);
    return 0;
}