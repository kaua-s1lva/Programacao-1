#include <stdio.h>

int main (void) {

    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    if (numero%7 == 0) {
        printf("O numero e multiplo de 7");
    } else {
        printf("O numero nao e multiplo de 7");
    }

    return 0;
}