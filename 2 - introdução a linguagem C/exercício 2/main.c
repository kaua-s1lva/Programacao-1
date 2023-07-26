#include <stdio.h>

int main()
{
    float a, b, c;

    printf("digite o valor de a: \n");
    scanf("%f", &a);

    printf("digite o valor de b: \n");
    scanf("%f", &b);

    printf("digite o valor de c: \n");
    scanf("%f", &c);

    float d = (a + b + c) / 3;

    printf("a media dos valores e: %f \n", d);

    return 0;
}