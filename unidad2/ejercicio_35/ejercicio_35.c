#include <stdio.h>

int main() {
    int edad;
    float ingresos;
    int buenHistorial;

    printf("Ingrese su edad en anios:\n");
    scanf("%d", &edad);

    printf("Ingrese sus ingresos mensuales en pesos:\n");
    scanf("%f", &ingresos);

    printf("Tiene buen historial crediticio? Ingrese 1 para si o 0 para no:\n");
    scanf("%d", &buenHistorial);

    if (edad >= 18 && ingresos >= 10000 && buenHistorial == 1) {
        printf("Tarjeta de credito aprobada.\n");
    } else {
        printf("Tarjeta de credito rechazada: no cumple los tres requisitos.\n");
    }

    return 0;
}