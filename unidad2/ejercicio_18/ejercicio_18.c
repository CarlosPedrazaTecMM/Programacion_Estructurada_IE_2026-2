#include <stdio.h>

int main() {
    float precio;
    float precioFinal;

    printf("Ingrese el precio original del producto en pesos:\n");
    scanf("%f", &precio);

    precioFinal = precio * (1 - 0.20) * (1 - 0.10);

    printf("El precio final con ambos descuentos es: %.2f pesos.\n", precioFinal);

    return 0;
}