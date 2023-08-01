#include <stdio.h>

int main (void) {

    int i, j, matrizA[3][3], matrizB[3][3], matrizC[3][3];

    printf("Digite 9 numeros da matriz A: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite 9 numeros da matriz B: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("\nAqui esta o valor da soma das duas matrizes: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf(" %5d ", matrizC[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}