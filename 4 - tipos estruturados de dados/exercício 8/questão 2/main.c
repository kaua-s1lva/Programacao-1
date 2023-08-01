#include <stdio.h>

struct tLatLong {
    float latitude, longitude;
};

int main (void) {

    struct tLatLong local;

    printf("Digite a latitude: ");
    scanf("%f", &local.latitude);

    printf("Digite a longitude: ");
    scanf("%f", &local.longitude);

    printf("O local e: %.2f graus de latitude \ne %.2f graus de longitude", local.latitude, local.longitude);

    return 0;
}