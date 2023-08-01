#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {

    int i, tamanho;
    float *a, modulo, soma;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    a = (float*) malloc(tamanho * sizeof(float));

    printf("Digite as coordenas do vetor: \n");
    for (i=0; i<tamanho; i++) {
        scanf("%f", &a[i]);
    }

    for (i=0; i<tamanho; i++) {
        soma += pow(a[i], 2);
    }
    modulo = sqrt(soma);

    printf("O valor do modulo do vetor e: %.2f \n", modulo);

    return 0;
}