#include <stdio.h>

int main (void) {

    int i, a[3], b[3], c[3];

    printf("Digite as coordenas do vetor A: \n");
    for (i=0; i<3; i++) {
        scanf("%d", &a[i]);
    }

    printf("Digite as coordenas do vetor B: \n");
    for (i=0; i<3; i++) {
        scanf("%d", &b[i]);
    }

    for (i=0; i<3; i++) {
        c[i] = a[i] + b[i];
    }

    printf("O vetor resultante e: ( %d ; %d ; %d )", c[0], c[1], c[2]);

    return 0;
}