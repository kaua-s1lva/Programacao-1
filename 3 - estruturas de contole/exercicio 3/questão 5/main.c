#include <stdio.h>

int main (void) {

    float dia, ano;

    printf("Digite o numero de anos: ");
    scanf("%f", &ano);

    dia = ano*365;

    printf("O numero de dias e: %.0f", dia);

    return 0;
}