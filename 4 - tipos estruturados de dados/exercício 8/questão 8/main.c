#include <stdio.h>

struct tRelogio {
    int hora, minuto, segundo;
};

int main (void) {

    int verificador = 0, segundo1, segundo2, segundo3;
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

    printf("\nA hora e: %d : %d : %d\n", horario1.hora, horario1.minuto, horario1.segundo);

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

    printf("\nA hora e: %d : %d : %d\n", horario2.hora, horario2.minuto, horario2.segundo);

    segundo1 = horario1.hora * 3600;
    segundo1 += horario1.minuto * 60;
    segundo1 += horario1.segundo;

    segundo2 = horario2.hora * 3600;
    segundo2 += horario2.minuto * 60;
    segundo2 += horario2.segundo;

    if (segundo1 < segundo2) {
        horario.hora = segundo1/3600;
        horario.minuto = (segundo1 % 3600) / 60;
        horario.segundo = (segundo1 % 3600) % 60;
        printf("\nO horario anterior e: %d:%d:%d\n", horario.hora, horario.minuto, horario.segundo);
    } else if(segundo2 < segundo1) {
        horario.hora = segundo2/3600;
        horario.minuto = (segundo2 % 3600) / 60;
        horario.segundo = (segundo2 % 3600) % 60;
        printf("\nO horario anterior e: %d:%d:%d\n", horario.hora, horario.minuto, horario.segundo);
    } else {
        printf("\nOs horarios sao iguais!\n");
    }

    return 0;
}