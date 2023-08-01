#include <stdio.h>

int main (void) {

    int i, j, matriz[3][5];

    printf("Digite 15 numeros inteiros: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nAqui esta a matriz 3 X 5: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<5; j++) {
            printf(" %5d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}