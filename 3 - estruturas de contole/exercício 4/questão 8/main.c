#include <stdio.h>

int main(void) {

    int opcoes;

    while (opcoes != 5) {
        printf("Digite uma das opcoes a seguir: \n");
        printf("1 - opcao 1 \n2 - opcao 2 \n3 - opcao 3 \n4 - opcao 4 \n5 - sair \n");
        scanf("%d", &opcoes);
    }

    return 0;
}