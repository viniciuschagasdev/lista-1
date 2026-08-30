#include <stdio.h>

int main() {
    float pes, pol, jardas, milhas;
    scanf("%f", &pes);
    pol = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;
    printf("Polegadas: %.2f\nJardas: %.2f\nMilhas: %.6f\n", pol, jardas, milhas);
    return 0;
}