#include <stdio.h>

int main() {
    float temp;
    int ventanas;
    int manual;

    printf("Ingrese la temperatura en grados Celsius:\n");
    scanf("%f", &temp);

    printf("Hay ventanas abiertas? Ingrese 1 para si o 0 para no:\n");
    scanf("%d", &ventanas);

    printf("Desea activar el aire manualmente? Ingrese 1 para si o 0 para no:\n");
    scanf("%d", &manual);

    if ((temp > 30 && !ventanas) || manual) {
        printf("Aire acondicionado activado.\n");
    } else {
        printf("Aire acondicionado desactivado.\n");
    }

    return 0;
}