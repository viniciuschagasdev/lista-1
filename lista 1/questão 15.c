#include <stdio.h>

int main() {
    float fabrica, p_lucro, p_imp, v_lucro, v_imp, final;
    scanf("%f %f %f", &fabrica, &p_lucro, &p_imp);
    v_lucro = fabrica * (p_lucro / 100);
    v_imp = fabrica * (p_imp / 100);
    final = fabrica + v_lucro + v_imp;
    printf("Lucro distribuidor: %.2f\nImpostos: %.2f\nPreco final: %.2f\n", v_lucro, v_imp, final);
    return 0;
}