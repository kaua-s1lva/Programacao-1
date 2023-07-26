#include <stdio.h>

int main(void)
{

    unsigned long long int cpf;
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, r, R, L, M, validador = 0;

    printf("Digite seu cpf sem pontuacao: ");
    scanf("%llu", &cpf);

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
    L = (10*d1) + (9*d2) + (8*d3) + (7*d4) + (6*d5) + (5*d6) + (4*d7) + (3*d8) + (2*d9);

    // Calculo do M (D11)
    M = (10*d2) + (9*d3) + (8*d4) + (7*d5) + (6*d6) + (5*d7) + (4*d8) + (3*d9) + (2*d10);
    
    r = L % 11;

    R = M % 11;

    if (d1 == d2 && d2 == d3 && d3 == d4 && d4 == d5 && d5 == d6 && d6 == d7 && d7 == d8 && d8 == d9 && d9 == d10 && d10 == d11)
    {
        printf("o cpf %llu e invalido. \n ", cpf);
    }
    else
    {

        //verificando r
        if (r == 0 || r == 1) {
            if (d10 == 0) {
                validador = validador + 0;
            } else {
                validador = validador + 1;
            }
        } else {
            if (d10 == (11-r)) {
                validador = validador + 0;
            } else {
                validador = validador + 1;
            }
        }

        //verificando R
        if (R == 0 || R == 1) {
            if (d11 == 0) {
                validador = validador + 0;
            } else {
                validador = validador + 1;
            }
        } else {
            if (d11 == (11-R)) {
                validador = validador + 0;
            } else {
                validador = validador + 1;
            }
        }

        //validando o cpf
        if (validador == 0) {
            printf("\nO CPF digitado: %llu esta correto!", cpf);
        } else {
            printf("\nO CPF digitado: %llu esta incorreto!", cpf);
        }
    }

    return 0;
}