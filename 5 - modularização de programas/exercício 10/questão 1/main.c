#include <stdio.h>

int main (void) {
    char palavra[20];

    FILE *arquivo = fopen("../palavra.dat","r");
    fscanf(arquivo, "%s", palavra);
    printf("o conteudo armazenado e: %s", palavra);
    fclose(arquivo);
    return 0;
}