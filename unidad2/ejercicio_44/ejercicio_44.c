#include <stdio.h>

int main() {
    float litros = 0;
    float cantidad;

    while (litros <= 1000) {
        printf("Ingrese la cantidad de litros que desea agregar:\n");
        scanf("%f", &cantidad);

        if (cantidad > 0) {
            litros = litros + cantidad;
            printf("El tinaco tiene actualmente %.2f litros.\n", litros);
        } else {
            printf("La cantidad debe ser mayor que cero.\n");
        }
    }

    printf("Llenado terminado: se superaron los 1000 litros.\n");

    return 0;
}