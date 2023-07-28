#include <stdio.h>

int main (void) {

    float altura, peso, imc;

    printf("Para calcular seu IMC, forneca alguns dados... \n");
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = peso/(altura*altura);
    printf("O valor do seu IMC e: %f", imc);

    return 0;
}