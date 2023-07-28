#include <stdio.h>

int main (void) {

    float tempC, tempF;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &tempF);

    tempC = 5*((tempF-32)/9);

    printf("Temperatura em Celsius: %.1f", tempC);

    return 0;
}