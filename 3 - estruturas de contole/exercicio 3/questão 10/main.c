#include <stdio.h>

int main (void) {

    int i, numero[10], soma=0;

    printf("Digite dez numeros: \n");

    for (i=0; i<10; i++) {
        printf("numero %d: ", i+1);
        scanf("%d", &numero[i]);
        soma += numero[i];
    }

    printf("A soma dos numeros resulta: %d", soma);

    return 0;
}