#include <stdio.h>

struct tRelogio {
    int hora, minuto, segundo;
};

int main (void) {

    int verificador = 0;
    struct tRelogio horario;

    do {

        verificador = 0;

        printf("Digite a hora: ");
        scanf("%d", &horario.hora);
        if (horario.hora > 23 || horario.hora < 0) {
            verificador += 1;
            printf("\nhora incorreta! digite novamente\n");
            continue;
        }

        printf("Digite o minuto: ");
        scanf("%d", &horario.minuto);
        if (horario.minuto > 59 || horario.minuto < 0) {
            verificador += 1;
            printf("\nminuto incorreto! digite novamente\n");
            continue;
        }

        printf("Digite o segundo: ");
        scanf("%d", &horario.segundo);
        if (horario.segundo > 59 || horario.segundo < 0) {
            verificador += 1;
            printf("\nsegundo incorreto! digite novamente\n");
            continue;
        }

    } while ( verificador != 0 );

    printf("A hora e: %d : %d : %d", horario.hora, horario.minuto, horario.segundo);

    return 0;
}