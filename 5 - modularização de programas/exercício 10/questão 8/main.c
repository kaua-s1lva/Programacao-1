#include <stdio.h>

int main (void) {
    int i, j;
    float valores[5][2], imc[5];
    FILE *arquivo = fopen("../clientes.dat", "r");
    
    for (i=0; i<5; i++) {
        for (j=0; j<2; j++) {
            fscanf(arquivo, "%f", &valores[i][j]);
        }
    }

    for (i=0; i<5; i++) {
        imc[i] = valores[i][0] / (valores[i][1] * valores[i][1]);
        printf("imc %d: %.2f\n", i+1, imc[i]);
    }

    return 0;
}