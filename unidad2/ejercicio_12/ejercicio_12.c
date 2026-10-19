#include <stdio.h>

int main() {
    float precio;
    int cantidad;
    float billete;
    float cambio;

    printf("Ingrese el precio del producto en pesos:\n");
    scanf("%f", &precio);

    printf("Ingrese la cantidad de productos comprados:\n");
    scanf("%i", &cantidad);

    printf("Ingrese el valor del billete con el que pagara:\n");
    scanf("%f", &billete);

    cambio = billete - (cantidad * precio);

    printf("Su cambio a devolver es: %.2f pesos.\n", cambio);

    return 0;
}