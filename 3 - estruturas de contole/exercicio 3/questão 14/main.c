#include <stdio.h>

int main (void) {

    int naipe, ataque, numero;
    

    printf("Selecione a carta desejada: \n");
    printf("1 - copas \n2 - espadas \n3 - paus \n4 - ouros \n");
    scanf("%d", &naipe);

    printf("Agora digite o numero da carta: ");
    scanf("%d", &numero);

    switch (naipe)
    {
    case 1:
        ataque = 1 * numero;
    break;
    
    case 2:
        ataque = 2 * numero;
    break;

    case 3:
        ataque = 3 * numero;
    break;

    case 4:
        ataque = 5 * numero;
    break;

    default:
        break;
    }

    printf("O valor do ataque e: %d", ataque);

    return 0;
}