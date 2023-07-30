#include <stdio.h>
#include <math.h>

int main (void) {

    int i, a[3], b[3], moduloA, moduloB, soma;

    printf("Digite as coordenas do vetor A: \n");
    for (i=0; i<3; i++) {
        scanf("%d", &a[i]);
    }

    printf("Digite as coordenas do vetor B: \n");
    for (i=0; i<3; i++) {
        scanf("%d", &b[i]);
    }

    for (i=0; i<3; i++) {
        soma += pow(a[i], 2);
    }
    moduloA = sqrt(soma);

    for (i=0; i<3; i++) {
        soma += pow(b[i], 2);
    }
    moduloB = sqrt(soma);

    printf("O valor do modulo do vetor A e: %d \nO valor do modulo de B e: %d", moduloA, moduloB);
    

    return 0;
}