#include <stdio.h>

int main() {
    int membresia;

    printf("Tiene membresia? Ingrese 1 para si o 0 para no:\n");
    scanf("%d", &membresia);

    if (membresia != 0 && membresia != 1) {
        printf("Error: ingrese 1 o 0.\n");
    } else if (!membresia) {
        printf("No se aplica descuento porque no tiene membresia.\n");
    } else {
        printf("Se aplica descuento porque tiene membresia.\n");
    }

    return 0;
}