#include <stdio.h>

int main (void) {

    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    if (numero%2 == 0) {
        printf("O numero e par");
    } else {
        printf("O numero e impar");
    }

    return 0;
}