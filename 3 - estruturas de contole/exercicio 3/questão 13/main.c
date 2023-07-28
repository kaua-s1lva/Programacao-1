#include <stdio.h>

int main (void) {

    int i, j, k, numeros[3];

    printf("Digite 3 numeros inteiros: \n\n");
    for (i=0; i<3; i++) {
        printf("numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    if (numeros[0] == numeros[1] || numeros[0] == numeros[2] || numeros[1] == numeros[2]) {

        if (numeros[0] == numeros[1] && numeros[1] > numeros[2]) {
            printf("\n\n\nA sequencia e: %d %d %d", numeros[2], numeros[1], numeros[1]);
        }
        if (numeros[0] == numeros[1] && numeros[2] > numeros[1]) {
            printf("\n\n\nA sequencia e: %d %d %d", numeros[1], numeros[2], numeros[2]);
        }
        if (numeros[0] == numeros[2] && numeros[1] > numeros[2]) {
            printf("\n\n\nA sequencia e: %d %d %d", numeros[2], numeros[2], numeros[1]);
        }
        if (numeros[0] == numeros[2] && numeros[2] > numeros[1]) {
            printf("\n\n\nA sequencia e: %d %d %d", numeros[1], numeros[2], numeros[2]);
        }
        if (numeros[1] == numeros[2] && numeros[2] > numeros[0]) {
            printf("\n\n\nA sequencia e: %d %d %d", numeros[0], numeros[2], numeros[2]);
        }
        if (numeros[1] == numeros[2] && numeros[0] > numeros[2]) {
            printf("\n\n\nA sequencia e: %d %d %d", numeros[2], numeros[2], numeros[0]);
        }   

    } else {
        for (i=0; i<3; i++) {
            for (j=0; j<3; j++) {
                for (k=0; k<3; k++) {
                    if ((i != j) && (j != k) && (i != k)) {
                        if (numeros[i] > numeros[j] && numeros[j] > numeros[k]) {
                            printf("\n\n\nA sequencia e: %d %d %d", numeros[k], numeros[j], numeros[i]);
                        }
                    }
                }
            }
        }
        
    }

    return 0;
}