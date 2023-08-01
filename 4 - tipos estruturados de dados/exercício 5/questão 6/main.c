#include <stdio.h>
#include <ctype.h>

int main (void) {

    int i, verificador = 0;
    char p[6], q[6];
 
    printf("Primeira palavra: ");
    scanf("%s", p);
 
    printf("Segunda palavra: ");
    scanf("%s", q);
 
    for (i=0; i<5; i++) {
        if (toupper(p[i]) == toupper(q[i])) {
            printf(" %c ", toupper(p[i]));
            verificador += 1;
        } else {
            printf(" . ");
        }
    }

    if (verificador == 0) {
        printf("\nNao existe palavras iguais!");
    } else {
        printf("\nExistem %d letras iguais!", verificador);
    }

    return 0;
}