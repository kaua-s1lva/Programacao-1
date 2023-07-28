#include <stdio.h>

int main (void) {

    int i, numeros[3];

    printf("Digite 3 numeros inteiros: ");
    for (i=0; i<3; i++) {
        scanf("%d", &numeros[i]);
    }

    if (numeros[0] > numeros[1]) {
        if (numeros[0] > numeros[2]) {
            printf("O maior numero e: %d", numeros[0]);
        } else if (numeros[2] > numeros[0]) {
            printf("O maior numero e: %d", numeros[2]);
        } else {
            printf("O maior numero e: %d", numeros[0]);
        }
    } else if (numeros[1] > numeros[0]) {
        if (numeros[1] > numeros[2]) {
            printf("O maior numero e: %d", numeros[1]);
        } else if (numeros[2] > numeros[1]) {
            printf("O maior numero e: %d", numeros[2]);
        } else {
            printf("O maior numero e: %d", numeros[1]);
        }
    } else {
        printf("O maior numero e: %d", numeros[1]);
    }

    return 0;
}