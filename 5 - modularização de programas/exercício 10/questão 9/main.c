#include <stdio.h>

int main (void) {
    int i, j, k = 19, valores[20];
    FILE *arquivoLe = fopen("../seqinteiros.dat", "r");
    FILE *arquivoEscreve = fopen ("../piramidif.dat", "w");

    for (i=0; i<20; i++) {
        fscanf(arquivoLe, "%d", &valores[i]);
    }

    for (i=0; i<20; i++) {
        for (j=0; j<k; j++) {
            valores[j] = valores[j+1] - valores[j];
            fprintf(arquivoEscreve, "%5d ", valores[j]);
        }
        fprintf(arquivoEscreve, "\n");
        k = k - 1;
    }
    
    fclose(arquivoLe);
    fclose(arquivoEscreve);

    return 0;
}