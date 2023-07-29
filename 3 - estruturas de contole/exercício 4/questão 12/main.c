#include <stdio.h>

int main(void) {

    int i, num1, num2, max, min;

    printf("Digite dois numeros inteiros: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2) {
        max = num1;
        min = num2;
    } else if (num1 < num2) {
        max = num2;
        min = num1;
    } else {
        printf("Os valores sao iguais!");
    }

    for (i=min; i<=max; i++) {
        printf("%d ", i);
    }

    return 0;
}