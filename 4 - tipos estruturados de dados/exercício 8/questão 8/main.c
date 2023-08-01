#include <stdio.h>

struct tRelogio {
    int hora, minuto, segundo;
};

int main (void) {

    int verificador = 0;
    struct tRelogio horario1, horario2, horario;

    printf("Digite as informacoes do primeiro horario: \n");
    do {

        verificador = 0;

        printf("Digite a hora: ");
        scanf("%d", &horario1.hora);
        if (horario1.hora > 23 || horario1.hora < 0) {
            verificador += 1;
            printf("\nhora incorreta! digite novamente\n");
            continue;
        }

        printf("Digite o minuto: ");
        scanf("%d", &horario1.minuto);
        if (horario1.minuto > 59 || horario1.minuto < 0) {
            verificador += 1;
            printf("\nminuto incorreto! digite novamente\n");
            continue;
        }

        printf("Digite o segundo: ");
        scanf("%d", &horario1.segundo);
        if (horario1.segundo > 59 || horario1.segundo < 0) {
            verificador += 1;
            printf("\nsegundo incorreto! digite novamente\n");
            continue;
        }

    } while ( verificador != 0 );

    printf("A hora e: %d : %d : %d", horario1.hora, horario1.minuto, horario1.segundo);

    printf("\nDigite as informacoes do segundo horario: \n");
    do {

        verificador = 0;

        printf("Digite a hora: ");
        scanf("%d", &horario2.hora);
        if (horario2.hora > 23 || horario2.hora < 0) {
            verificador += 1;
            printf("\nhora incorreta! digite novamente\n");
            continue;
        }

        printf("Digite o minuto: ");
        scanf("%d", &horario2.minuto);
        if (horario2.minuto > 59 || horario2.minuto < 0) {
            verificador += 1;
            printf("\nminuto incorreto! digite novamente\n");
            continue;
        }

        printf("Digite o segundo: ");
        scanf("%d", &horario2.segundo);
        if (horario2.segundo > 59 || horario2.segundo < 0) {
            verificador += 1;
            printf("\nsegundo incorreto! digite novamente\n");
            continue;
        }

    } while ( verificador != 0 );

    printf("A hora e: %d : %d : %d", horario2.hora, horario2.minuto, horario2.segundo);

    if (horario1.hora < horario2.hora) {
        horario.hora = horario2.hora - horario1.hora;
        if (horario2.minuto - horario1.minuto < 0) {
            
        }
    } else if (horario1.hora > horario2.hora) {
        printf("\nO horario anterior e: %d : %d : %d", horario2.hora, horario2.minuto, horario2.segundo);
    } else {
        if (horario1.minuto < horario2.minuto) {
            printf("\nO horario anterior e: %d : %d : %d", horario1.hora, horario1.minuto, horario1.segundo);
        } else if (horario1.minuto > horario2.minuto) {
            printf("\nO horario anterior e: %d : %d : %d", horario2.hora, horario2.minuto, horario2.segundo);
        } else {
            if (horario1.segundo < horario2.segundo) {
                printf("\nO horario anterior e: %d : %d : %d", horario1.hora, horario1.minuto, horario1.segundo);
            } else if (horario1.segundo > horario2.segundo) {
                printf("\nO horario anterior e: %d : %d : %d", horario2.hora, horario2.minuto, horario2.segundo);
            } else {
                printf("Os horarios sao iguais!");
            }
        }
    }

    return 0;
}