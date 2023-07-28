#include <stdio.h>

int main (void) {

    int a, b, c;

    printf("Digite o valor do primeiro inteiro: ");
    scanf("%d", &a);

    printf("\nDigite o valor do segundo inteiro: ");
    scanf("%d", &b);

    c = a*b;

    printf("O produto dos inteiros e: %d", c);

    return 0;
}