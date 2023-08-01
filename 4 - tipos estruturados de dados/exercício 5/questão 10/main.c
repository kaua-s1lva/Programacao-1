#include <stdio.h>

int main (void) {

    int i, j, matriz[3][3], soma=0;

    printf("Digite 9 numeros inteiros: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if (i == j) {
                soma += matriz[i][j];
            }
        }
    }

    printf("\nAqui esta o valor da soma: %d\n", soma);
    
    return 0;
}