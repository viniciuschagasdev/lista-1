#include <stdio.h>

int main() {
    int num1, num2, num3, num4, soma;

    // Solicita e l os quatro números inteiros
    printf("Digite quatro numeros inteiros separados por espaco: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Calcule a soma
    soma = num1 + num2 + num3 + num4;

    // Exibe o resultado
    printf("A soma dos numeros e: %d\n", soma);

    return 0;
}