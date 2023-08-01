#include <stdio.h>

struct tRelogio {
    int hora, minuto, segundo;
};

int main (void) {

    struct tRelogio horario;

    printf("Digite a hora: ");
    scanf("%d", &horario.hora);

    printf("Digite o minuto: ");
    scanf("%d", &horario.minuto);

    printf("Digite o segundo: ");
    scanf("%d", &horario.segundo);

    printf("A hora e: %d : %d : %d", horario.hora, horario.minuto, horario.segundo);

    return 0;
}