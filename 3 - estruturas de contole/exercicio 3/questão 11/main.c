#include <stdio.h>
#include <math.h>

int main (void) {

    int i;
    float numeros[10], soma, media, desvio, somatorio;

    printf("Digite os numeros: \n\n");
    for (i=0; i<10; i++) {
        printf("numero %d: ", i+1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    media = soma/10;

    for (i=0; i<10; i++) {
        somatorio += pow((numeros[i] - media), 2);
    }

    desvio = sqrt(somatorio/10);

    printf("\nA media e: %.2f\n", media);
    printf("O valor do desvio padrao e: %.2f", desvio);

    return 0;
}