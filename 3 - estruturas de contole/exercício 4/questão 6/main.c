#include <stdio.h>

int main(void) {

    char caracter;
    char vogal[5] = {'A', 'E', 'I', 'O', 'U'};

    while (1) {
        printf("Digite uma vogal em maiusculo: ");
        scanf(" %c", &caracter);

        // Verifica se o caractere digitado é uma vogal
        for (int i = 0; i < 5; i++) {
            if (caracter == vogal[i]) {
                printf("Parabens! Voce digitou uma vogal.\n");
                return 0; // sai do programa após encontrar uma vogal
            }
        }

        printf("Caractere digitado nao e uma vogal. Tente novamente.\n");
    }

    return 0;
}