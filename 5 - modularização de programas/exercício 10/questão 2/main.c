#include <stdio.h>

int main (void) {
    int valor;
    FILE *arquivo = fopen("../inteiro.dat", "r");
    fscanf(arquivo, "%d", &valor);
    printf("\n%d\n", valor);
    fclose(arquivo);

    return 0;
}