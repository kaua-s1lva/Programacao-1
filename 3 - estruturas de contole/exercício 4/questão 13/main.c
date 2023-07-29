#include <stdio.h>

int main(void) {

    int i, num, soma = 0, pa;

    //método tradicional
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (i=1; i<=num; i++) {
        soma += i;
    }

    printf("\nO valor da soma e: %d", soma);

    //utilizando PA
    pa = (1 + num)*num/2;
    printf("\nO valor da PA e: %d", pa);

    return 0;
}