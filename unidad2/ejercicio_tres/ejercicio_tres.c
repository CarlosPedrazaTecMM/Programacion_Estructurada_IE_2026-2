#include <stdio.h>

int main() {
    char inicialNombre;
    char inicialApellido;

    printf("Ingrese la primera letra de su nombre:\n");
    scanf(" %c", &inicialNombre);

    printf("Ingrese la primera letra de su apellido:\n");
    scanf(" %c", &inicialApellido);

    printf("Su codigo de usuario es: %c%c\n", inicialNombre, inicialApellido);

    return 0;
}