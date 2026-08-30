#include <stdio.h>

int main() {
    int nasc, atual, idade, em_2050;
    scanf("%d %d", &nasc, &atual);
    idade = atual - nasc;
    em_2050 = 2050 - nasc;
    printf("Idade: %d\nIdade em 2050: %d\n", idade, em_2050);
    return 0;
}