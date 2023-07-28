#include <stdio.h>

int main (void) {

    int i, numeros[3];

    printf("Digite 3 numeros inteiros: \n\n");
    for (i=0; i<3; i++) {
        printf("numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
/*
    if (numeros[0] > numeros[1]) {
        if (numeros[0] > numeros[2]) {
            if (numeros[1] > numeros[2]) {
                printf("A sequencia e: %d %d %d", numeros[0], numeros[1], numeros[2]);
            } else {
                printf("A sequencia e: %d %d %d", numeros[0], numeros[2], numeros[1]);
            }
        }
    } else if (numeros[1] > numeros[0]) {
        if (numeros[1] > numeros[2]) {
            if (numeros[0] > numeros[2]) {
                printf("A sequencia e: %d %d %d", numeros[1], numeros[0], numeros[2]);
            } else {
                printf("A sequencia e: %d %d %d", numeros[1], numeros[2], numeros[0]);
            }
        }
    }

    for (i=0; i<3; i++) {
        printf("\n%d\n", sequencia[i]);
    }
*/

    if (numeros[0] > numeros[1] && numeros[1] > numeros[2]) {
        printf("A sequencia e: %d %d %d", numeros[2], numeros[1], numeros[0]);
    }

    return 0;
}