#include <stdio.h>

int main (void) {

    int i;
    float u[3], v[3], produto = 0;

    printf("Digite as coordenadas do vetor u: ");
    for (i=0; i<3; i++) {
        scanf("%f", &u[i]);
    }

    printf("Digite as coordenadas do vetor v: ");
    for (i=0; i<3; i++) {
        scanf("%f", &v[i]);
    }

    for (i=0; i<3; i++) {
        produto += u[i] * v[i];
    }

    printf("O produto vetorial e: %.1f", produto);

    return 0;
}