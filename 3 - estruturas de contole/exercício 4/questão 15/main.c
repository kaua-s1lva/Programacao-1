#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i, j, n, m, **matriz;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    printf("Digite o numero de colunas: ");
    scanf("%d", &m);

    matriz = (int**) malloc(n * sizeof(int*));
    for (i=0; i<n; i++) {
        matriz[i] = (int*) malloc (m * sizeof(int));
    }

    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            matriz[i][j] = 0;
            if (i == j) {
                matriz[i][j] = 1;
            }
        }
    }

    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }   

    return 0;
}