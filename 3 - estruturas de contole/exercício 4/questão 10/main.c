#include <stdio.h>

int main(void) {

    int i, num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i=1; i<=num; i++) {
        printf("%d ", i);
    }

    return 0;
}