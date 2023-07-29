#include <stdio.h>

int main (void) {

    int i, j, k, a[3][3], b[3][3], c[3][3];

    printf("\nDigite as coordenadas da matriz A: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDigite as coordenadas da matriz B: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
/*
    c[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0] + a[0][2]*b[2][0];
    c[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1] + a[0][2]*b[2][1];
    c[0][2] = a[0][0]*b[0][2] + a[0][1]*b[1][2] + a[0][2]*b[2][2];

    c[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0] + a[1][2]*b[2][0];
    c[1][1] = a[1][0]*b[0][1] + a[1][1]*b[1][1] + a[1][2]*b[2][1];
    c[1][2] = a[1][0]*b[0][2] + a[1][1]*b[1][2] + a[1][2]*b[2][2];

    c[2][0] = a[2][0]*b[0][0] + a[2][1]*b[1][0] + a[2][2]*b[2][0];
    c[2][1] = a[2][0]*b[0][1] + a[2][1]*b[1][1] + a[2][2]*b[2][1];
    c[2][2] = a[2][0]*b[0][2] + a[2][1]*b[1][2] + a[2][2]*b[2][2];

*/
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            c[i][j] = 0;
            for (k=0; k<3; k++) {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    printf("\nA matriz resultante e: \n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf(" %5d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}