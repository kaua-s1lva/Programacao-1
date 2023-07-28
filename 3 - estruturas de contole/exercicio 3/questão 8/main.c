#include <stdio.h>

int main (void) {

    int a, b;

    printf("Digite o valor a: ");
    scanf("%d", &a);

    printf("Digite o valor b: ");
    scanf("%d", &b);

    if (a > b) {
        printf("a e maior que b");
    } else if (b > a) {
        printf("b e maior que a");
    } else {
        printf("a = b");
    }

    return 0;
}