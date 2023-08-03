#include <stdio.h>

int main (void) {
    int i;
    float valores[20];
    FILE *arquivoRecebe = fopen("../seqinteiros.dat", "r");
    FILE *arquivoPrinta = fopen("../razaofib.dat", "w");

    for (i=0; i<20; i++) {
        fscanf(arquivoRecebe, "%f", &valores[i]);
    }

    for (i=0; i<19; i++) {
        valores[i] = valores[i+1] / valores[i];
    }

    for (i=0; i<19; i++) {
        fprintf(arquivoPrinta, " %.2f ", valores[i]);
    }
    
    fclose(arquivoRecebe);
    fclose(arquivoPrinta);

    return 0;
}