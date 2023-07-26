#include <stdio.h>
int main(void)
{
    int x;
    printf("Digite o valor para saque: ");
    scanf("%d", &x);
    int n200, n100, n50, n20, n10, n5, n2, total;
    n200 = x / 200;
    n100 = (x % 200) / 100;
    n50 = ((x % 200) % 100) / 50;
    n20 = (((x % 200) % 100) % 50) / 20;
    n10 = ((((x % 200) % 100) % 50) % 20) / 10;
    n5 = (((((x % 200) % 100) % 50) % 20) % 10) / 5;
    n2 = ((((((x % 200) % 100) % 50) % 20) % 10) % 5) / 2;
    // valor caso seja um número que termine com 1 ou 3
    int y;
    y = x - 10;
    int y200, y100, y50, y20, y10, y5, y2;
    y200 = y / 200;
    y100 = (y % 200) / 100;
    y50 = ((y % 200) % 100) / 50;
    y20 = (((y % 200) % 100) % 50) / 20;
    y10 = ((((y % 200) % 100) % 50) % 20) / 10;
    y5 = (((((y % 200) % 100) % 50) % 20) % 10) / 5;
    y2 = ((((((y % 200) % 100) % 50) % 20) % 10) % 5) / 2;

    total = n200 * 200 + n100 * 100 + n50 * 50 + n20 * 20 + n10 * 10 + n5 * 5 + n2 * 2;
    // teste se o valor é válido
    if (x != 3 && x > 1)
    {
        // teste se o valor não termina em 1, 3, 6, 8
        if (x == total)
        {
            printf("Numero de cedulas de 200 reais: %d \n", n200);
            printf("Numero de cedulas de 100 reais: %d \n", n100);
            printf("Numero de cedulas de 50 reais: %d \n", n50);
            printf("Numero de cedulas de 20 reais: %d \n", n20);
            printf("Numero de cedulas de 10 reais: %d \n", n10);
            printf("Numero de cedulas de 5 reais: %d \n", n5);
            printf("Numero de cedulas de 2 reais: %d \n", n2);
        }
        else if (x == 6)
        {
            printf("Numero de cedulas de 200 reais: 0 \n");
            printf("Numero de cedulas de 100 reais: 0 \n");
            printf("Numero de cedulas de 50 reais: 0 \n");
            printf("Numero de cedulas de 20 reais: 0 \n");
            printf("Numero de cedulas de 10 reais: 0 \n");
            printf("Numero de cedulas de 5 reais: 0 \n");
            printf("Numero de cedulas de 2 reais: 3 \n");
        }
        else if (x == 8)
        {
            printf("Numero de cedulas de 200 reais: 0 \n");
            printf("Numero de cedulas de 100 reais: 0 \n");
            printf("Numero de cedulas de 50 reais: 0 \n");
            printf("Numero de cedulas de 20 reais: 0 \n");
            printf("Numero de cedulas de 10 reais: 0 \n");
            printf("Numero de cedulas de 5 reais: 0 \n");
            printf("Numero de cedulas de 2 reais: 4 \n");
        }
        else if (x == 11)
        {
            printf("Numero de cedulas de 200 reais: 0 \n");
            printf("Numero de cedulas de 100 reais: 0 \n");
            printf("Numero de cedulas de 50 reais: 0 \n");
            printf("Numero de cedulas de 20 reais: 0 \n");
            printf("Numero de cedulas de 10 reais: 0 \n");
            printf("Numero de cedulas de 5 reais: 1 \n");
            printf("Numero de cedulas de 2 reais: 3 \n");
        }
        else
        {
            if (x % 2 == 0)
            {
                if (x % 10 == 6)
                {
                    printf("Numero de cedulas de 200 reais: %d \n", n200);
                    printf("Numero de cedulas de 100 reais: %d \n", n100);
                    printf("Numero de cedulas de 50 reais: %d \n", n50);
                    printf("Numero de cedulas de 20 reais: %d \n", n20);
                    printf("Numero de cedulas de 10 reais: %d \n", n10);
                    printf("Numero de cedulas de 5 reais: 0 \n");
                    printf("Numero de cedulas de 2 reais: 3 \n");
                }
                else if (x % 10 == 8)
                {
                    printf("Numero de cedulas de 200 reais: %d \n", n200);
                    printf("Numero de cedulas de 100 reais: %d \n", n100);
                    printf("Numero de cedulas de 50 reais: %d \n", n50);
                    printf("Numero de cedulas de 20 reais: %d \n", n20);
                    printf("Numero de cedulas de 10 reais: %d \n", n10);
                    printf("Numero de cedulas de 5 reais: 0 \n");
                    printf("Numero de cedulas de 2 reais: 4 \n");
                }
            }
            else
            {
                if (x % 10 == 1)
                {
                    printf("Numero de cedulas de 200 reais: %d \n", y200);
                    printf("Numero de cedulas de 100 reais: %d \n", y100);
                    printf("Numero de cedulas de 50 reais: %d \n", y50);
                    printf("Numero de cedulas de 20 reais: %d \n", y20);
                    printf("Numero de cedulas de 10 reais: %d \n", y10);
                    printf("Numero de cedulas de 5 reais: 1 \n");
                    printf("Numero de cedulas de 2 reais: 3 \n");
                }
                else if (x % 10 == 3)
                {
                    printf("Numero de cedulas de 200 reais: %d \n", y200);
                    printf("Numero de cedulas de 100 reais: %d \n", y100);
                    printf("Numero de cedulas de 50 reais: %d \n", y50);
                    printf("Numero de cedulas de 20 reais: %d \n", y20);
                    printf("Numero de cedulas de 10 reais: %d \n", y10);
                    printf("Numero de cedulas de 5 reais: 1 \n");
                    printf("Numero de cedulas de 2 reais: 4 \n");
                }
            }
        }
    }
    else
    {
        printf("o valor informado nao pode ser sacado!");
    }
    return 0;
}