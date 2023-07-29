#include <stdio.h>

int main (void) {

    float numero;

    do {
        printf("Digite um numero entre 0.0 e 1.0: ");
        scanf("%f", &numero);
    } while (numero > 1.0 || numero < 0);

    return 0;
}