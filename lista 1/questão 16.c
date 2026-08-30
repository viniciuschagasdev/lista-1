#include <stdio.h>

int main() {
    float horas, min, v_hora, bruto, imp, receber;
    scanf("%f %f", &horas, &min);
    v_hora = min / 2;
    bruto = horas * v_hora;
    imp = bruto * 0.03;
    receber = bruto - imp;
    printf("Salario a receber: %.2f\n", receber);
    return 0;
}