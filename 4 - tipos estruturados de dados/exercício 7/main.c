#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i, j, **matriz, n;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);

    matriz = (int**) malloc ( n * sizeof(int*) );
    for (i=0; i<n; i++) {
        matriz[i] = (int*) malloc ( n * sizeof(int));
    }

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (i == j) {
                printf(" 1 ");
            } else {
                printf(" 0 ");
            }
        }
        printf("\n");
    }
    
    return 0;
}