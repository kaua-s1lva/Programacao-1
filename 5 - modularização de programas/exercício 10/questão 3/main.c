#include <stdio.h>

int main (void) {
    float valor;
    FILE *arquivo = fopen("../real.dat", "r");
    fscanf(arquivo, "%f", &valor);
    printf("\n%f\n", valor);
    fclose(arquivo);

    return 0;
}