#include <stdio.h>

int main() {
    float salario, perc, aumento, novo;
    scanf("%f %f", &salario, &perc);
    aumento = salario * (perc / 100);
    novo = salario + aumento;
    printf("Aumento: %.2f\nNovo salario: %.2f\n", aumento, novo);
    return 0;
}