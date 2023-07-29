#include <stdio.h>

int main(void) {

    float num = 5;

    while (num < 0.0 || num > 1.0) {
        printf("Digite um numero entre 0 e 1: ");
        scanf("%f", &num);
    }

    return 0;
}