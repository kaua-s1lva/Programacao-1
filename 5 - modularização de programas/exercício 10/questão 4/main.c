#include <stdio.h>

int main (void) {
    int i, valores[20];
    FILE *arquivo = fopen("../seqinteiros.dat", "r");

    for (i=0; i<20; i++) {
        fscanf(arquivo, "%d", &valores[i]);
    }

    for (i=0; i<20; i++) {
        printf(" %d ", valores[i]);
    }
    
    fclose(arquivo);

    return 0;
}