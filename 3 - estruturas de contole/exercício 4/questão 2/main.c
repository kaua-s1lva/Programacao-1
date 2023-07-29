#include <stdio.h>

int main(void) {

    char caracter;
    char vogal[5] = {'A', 'E', 'I', 'O', 'U'};

    do {
        printf("Digite uma vogal em maiusculo: ");
        scanf(" %c", &caracter);

        // Verifica se o caractere digitado é uma vogal
        for (int i = 0; i < 5; i++) {
            if (caracter == vogal[i]) {
                printf("Parabéns! Você digitou uma vogal.\n");
                return 0; // sai do programa após encontrar uma vogal
            }
        }

        printf("Caractere digitado não é uma vogal. Tente novamente.\n");
    } while (1);

    return 0;
}