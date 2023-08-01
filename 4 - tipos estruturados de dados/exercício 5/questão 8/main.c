#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

int main (void) {

    setlocale(LC_ALL, "portuguese");

    int i, j, n, pontuacao = 0;
    char input[25], palavra[25];
    //char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char    um[9] = {'a', 'e', 'i', 'o', 's', 'u', 'm', 'r', 't'}, 
            dois[4] = {'d', 'l', 'c', 'p'},
            tres[3] = {'n', 'b', 'ç'},
            quatro[4] = {'f', 'g', 'h', 'v'},
            cinco[1] = {'j'},
            seis[1] = {'q'},
            oito[5] = {'x', 'z', 'k', 'y', 'w'}
;

    printf("Dígite a palavra: ");
    scanf("%s", input);

    n = strlen(input); //tamanho da palavra

    for (i=0; i<n; i++) {
        palavra[i] = tolower(input[i]);
    }

    for (i=0; i<n; i++) {
        for (j=0; j<9; j++) {
            if (palavra[i] == um[j]) {
                printf("\nentrou no um");
                pontuacao += 1;
            } 
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<4; j++) {
            if (palavra[i] == dois[j]) {
                printf("\nentrou no dois");
                pontuacao += 2;
            } 
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<3; j++) {
            if (palavra[i] == tres[j]) {
                printf("\nentrou no tres");
                pontuacao += 3;
            } 
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<4; j++) {
            if (palavra[i] == quatro[j]) {
                printf("\nentrou no quatro");
                pontuacao += 4;
            } 
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<1; j++) {
            if (palavra[i] == cinco[j]) {
                printf("\nentrou no cinco");
                pontuacao += 5;
            } 
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<1; j++) {
            if (palavra[i] == seis[j]) {
                printf("\nentrou no seis");
                pontuacao += 6;
            } 
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<5; j++) {
            if (palavra[i] == oito[j]) {
                printf("\nentrou no oito");
                pontuacao += 8;
            } 
        }
    }
    printf("\n\nValor antes de multiplicar: %d", pontuacao);

    pontuacao = pontuacao * n;

    printf("\n\nO valor final e: %d", pontuacao);
    
    return 0;
}