#include <stdio.h>
#include <string.h>

int main() {
    char nombre[100];

    printf("Ingrese su nombre completo:\n");
    fgets(nombre, sizeof(nombre), stdin);

    nombre[strcspn(nombre, "\n")] = '\0';

    printf("Hola, %s Este es un saludo, bienvenido !!.\n", nombre);

    return 0;
}