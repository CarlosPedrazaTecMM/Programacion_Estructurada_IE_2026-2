#include <stdio.h>
#include <string.h>

int main() {
    char nombre[100];
    int edad;
    float estatura;

    printf("Ingrese su nombre completo:\n");
    fgets(nombre, sizeof(nombre), stdin);

    nombre[strcspn(nombre, "\n")] = '\0';

    printf("Ingrese su edad en anos:\n");
    scanf("%i", &edad);

    printf("Ingrese su estatura en metros, por ejemplo 1.75:\n");
    scanf("%f", &estatura);

    printf("Nombre: %s | Edad: %i anos | Estatura: %.2f metros\n",
           nombre, edad, estatura);

    return 0;
}