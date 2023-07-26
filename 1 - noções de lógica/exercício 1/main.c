#include <stdio.h>

int main(void)
{
    int num;

    printf("Digite o numero para analisar: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("O numero e par ");
    }
    else
    {
        printf("O numero e impar ");
    }

    if (num > 0)
    {
        printf("e positivo!");
    }
    else if (num < 0)
    {
        printf("e negativo!");
    }
    else
    {
        printf("e nulo!");
    }

    return 0;
}