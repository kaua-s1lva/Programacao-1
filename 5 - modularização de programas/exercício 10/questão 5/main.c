#include <stdio.h>

int main (void) {
    int i, valores[20];
    FILE *arquivo = fopen("../seqinteiros.dat", "r");

    for (i=0; i<20; i++) {
        fscanf(arquivo, "%d", &valores[i]);
    }

    printf("%d %d %d %d %d", valores[0], valores[3], valores[8], valores[12], valores[18]);
    
    fclose(arquivo);

    return 0;
}