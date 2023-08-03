#include <stdio.h>

int main (void) {
    int i, valores[20];
    FILE *arquivoRecebe = fopen("../seqinteiros.dat", "r");
    FILE *arquivoPrinta = fopen("../diferencas.dat", "w");

    for (i=0; i<20; i++) {
        fscanf(arquivoRecebe, "%d", &valores[i]);
    }

    for (i=0; i<19; i++) {
        valores[i] = valores[i+1] - valores[i];
    }

    for (i=0; i<19; i++) {
        fprintf(arquivoPrinta, " %d ", valores[i]);
    }
    
    fclose(arquivoRecebe);

    return 0;
}