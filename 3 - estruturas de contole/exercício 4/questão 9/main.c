#include <stdio.h>

int main(void) {

    int i, num[9];

    for (i=0; i<9; i++) {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }

    return 0;
}