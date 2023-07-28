#include <stdio.h>

int main (void) {

    int operacao, a, b, c;

    printf("Digite qual operacao deseja realizar: \n");
    printf("1 - soma \n2 - multiplicacao \n3 - menor \n4 - maior \n");
    scanf("%d", &operacao);

    printf("\nAgora digite dois valores: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    switch (operacao)
    {
    case 1:
        c = a + b;
        printf("O valor da soma e: %d", c);
        break;
    case 2:
        c = a * b;
        printf("O valor da multiplicacao e: %d", c);
        break;
    case 3:
        if (a > b) {
            printf("O menor valor e: %d", b);
        } else if (a < b) {
            printf("O menor valor e: %d", a);
        } else {
            printf("Os valores sao iguais!");
        }
        break;
    case 4:
        if (a > b) {
            printf("O maior valor e: %d", a);
        } else if (a < b) {
            printf("O maior valor e: %d", b);
        } else {
            printf("Os valores sao iguais!");
        }
        break;

    default:
        break;
    }

    return 0;
}