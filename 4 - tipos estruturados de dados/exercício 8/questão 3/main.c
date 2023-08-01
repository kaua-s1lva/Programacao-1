#include <stdio.h>

struct tVetorR3 {
    float x, y, z;
};

int main (void) {

    struct tVetorR3 vetor;

    printf("Digite o valor de x: ");
    scanf("%f", &vetor.x);

    printf("Digite o valor de y: ");
    scanf("%f", &vetor.y);

    printf("Digite o valor de z: ");
    scanf("%f", &vetor.z);

    printf("O valor de x, y e z e: ( %.2f, %.2f, %.2f )", vetor.x, vetor.y, vetor.z);

    return 0;
}