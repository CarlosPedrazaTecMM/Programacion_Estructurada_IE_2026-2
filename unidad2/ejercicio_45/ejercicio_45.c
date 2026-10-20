#include <stdio.h>

int main() {
    float precio;
    float total = 0;

    printf("Ingrese el precio de los productos que vaya a comrprar, cuando no tenga mas productos que adquirir ingrese 0:\n");
    scanf("%f", &precio);

    while (precio != 0) {
        if (precio > 0) {
            total = total + precio;
        } else {
            printf("Error: el precio no puede ser negativo.\n");
        }

        printf("Ingrese el precio del siguiente producto o 0 para terminar:\n");
        scanf("%f", &precio);
    }

    printf("El total de su compra es: %.2f pesos.\n", total);

    return 0;
}