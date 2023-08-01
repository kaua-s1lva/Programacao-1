#include <stdio.h>

int main (void) {

    int i, verificador = 0;
    char p[6], q[6];
 
    printf("Primeira palavra: ");
    scanf("%s", p);
 
    printf("Segunda palavra: ");
    scanf("%s", q);
 
    for (i=0; i<5; i++) {
        if (p[i] == q[i]) {
            printf(" %c ", p[i]);
            verificador += 1;
        } else {
            printf(" . ");
        }
    }

    if (verificador == 0) {
        printf("\nNao existe palavras iguais!");
    } else {
        printf("\nExistem %d letras iguais", verificador);
    }

    return 0;
}