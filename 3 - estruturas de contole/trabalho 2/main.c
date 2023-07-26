#include <stdio.h>

int main(void)
{

    long int cpf;
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, D10, D11, r, R, K, calculo2, calculo3, L, M;
    int isValidr = 0, isValidR = 0;
    printf("Digite seu cpf sem pontuação: ");
    scanf("%ld", &cpf);

    d11 = cpf % 10;
    d10 = (cpf / 10) % 10;
    d9 = (cpf / 100) % 10;
    d8 = (cpf / 1000) % 10;
    d7 = (cpf / 10000) % 10;
    d6 = (cpf / 100000) % 10;
    d5 = (cpf / 1000000) % 10;
    d4 = (cpf / 10000000) % 10;
    d3 = (cpf / 100000000) % 10;
    d2 = (cpf / 1000000000) % 10;
    d1 = (cpf / 10000000000) % 10;

    // Calculo do L (D10)
    L = (10 * d1) + (9 * d2) + (8 * d3) + (7 * d4) + (6 * d5) + (5 * d6) + (4 * d7) + (3 * d8) +
        (2 * d9);

    // Calculo do M (D11)
    r = L % 11;

    printf("%d\n", r);

    if (d1 == d2 && d2 == d3 && d3 == d4 && d4 == d5 && d5 == d6 && d6 == d7 && d7 == d8 && d8 == d9 && d9 == d10 && d10 == d11)
    {
        printf("o cpf %d%d%d.%d%d%d.%d%d%d-%d%d é inválido. \n ", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
    }
    else
    {
        if ((r == 0 || r == 1) && (R == 0 || R == 1))
        {
            D10 = 0;
            D11 = 0;
            // printf("oi 0\n");
            if ((d10 == D10) && (d11 == D11))
            {
                printf("o cpf %d%d%d.%d%d%d.%d%d%d-%d%d é válido.\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
            }
            else
            {
                printf("o cpf %d%d%d.%d%d%d.%d%d%d-%d%d é inválido.\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
            }
        }
        else if ((r != 0 && r != 1) && (R == 0 || R == 1))
        {
            D10 = 11 - r;
            D11 = 0;
            if ((d10 == D10) && (d11 == D11))
            {
                printf("o cpf %d%d%d.%d%d%d.%d%d%d-%d%d é válido.\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
            }
            else
            {
                printf("o cpf %d%d%d.%d%d%d.%d%d%d-%d%d é inválido.\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
            }
        }
        else if ((r == 0 || r == 1) && (R != 0 && R != 1))
        {
            D10 = 0;
            M = (10 * d2) + (9 * d3) + (8 * d4) + (7 * d5) + (6 * d6) + (5 * d7) + (4 * d8) + (3 * d9) +
                (2 * D10);
            R = M % 11;
            D11 = 11 - R;
            if ((d10 == D10) && (d11 == D11))
            {
                printf("o cpf %d%d%d.%d%d%d.%d%d%d-%d%d é válido.\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
            }
            else
            {
                printf("o cpf %d%d%d.%d%d%d.%d%d%d-%d%d é inválido.\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
            }
        }
        else
        {
            D10 = 11 - r;

            // printf("oi 11 \n");
            if (d10 == D10)
            {
                isValidr = 1;
                // printf("1 \n");
            }
        }

        printf("%d\n", R);
        if (R == 0 || R == 1)
        {
            D11 = 0;
            // printf("oi R 0\n");
            if (d11 == D11)
            {
                isValidR = 1;
                // printf("oi R 055\n");
            }
        }
        else
        {
            D11 = 11 - R;
            // printf("oi R 11\n");
            if (d11 == D11)
            {
                isValidR = 1;
                // printf("1\n");
            }
        }
        printf("isvalidr: %d e isvalidR: %d\n", isValidr, isValidR);
        if (isValidr == 1 && isValidR == 1)
        {
            printf("o cpf %d%d%d.%d%d%d.%d%d%d-%d%d é válido.\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
        }
        else
        {
            printf("o cpf %d%d%d.%d%d%d.%d%d%d-%d%d é inválido.\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
        }
    }

    return 0;
}