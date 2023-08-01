#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (void) {

    int i, j, n, contador = 0;
    char texto[20], textoMin[20], vogais[5] = {'a', 'e', 'i', 'o', 'u'}, resultado[20] = {0};

    printf("Digite o texto: \n");
    scanf("%s", texto);

    n = strlen(texto);
    for (i=0; i<n; i++) {
        textoMin[i] = tolower(texto[i]);
    }

    for (i=0; i<n; i++) {
        for (j=0; j<5; j++) {
            if (textoMin[i] == vogais[j]) {
                resultado[i] = vogais[j];
                contador += 1;
            }
        }
    }

    printf("As %d vogais encontradas foram: \n", contador);
    for (i=0; i<n; i++) {
        if (resultado[i] == 0) {
            printf("_");
        }
        printf("%c", resultado[i]);
    }
    
    return 0;
}