#include <stdio.h>

int main (void) {

    float massa, gordura, carboidrato, proteina, calorias;

    printf("Digite o peso da lasanha: ");
    scanf("%f", &massa);

    gordura = (7.3*massa)/100;
    carboidrato = (11.7*massa)/100;
    proteina = (6*massa)/100;

    calorias = (9*gordura) + (4*carboidrato) + (4*proteina);

    printf("O valor de calorias e: %.2f", calorias);

    return 0;
}