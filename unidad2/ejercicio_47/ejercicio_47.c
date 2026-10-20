#include <stdio.h>

int main() {
    int opcion;

    do {
        printf("\nBienvenido a la maquina de cafe.\n");
        printf("1. Cafe americano\n");
        printf("2. Cafe con leche\n");
        printf("3. Capuchino\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion:\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Preparando su cafe americano.\n");
                break;

            case 2:
                printf("Preparando su cafe con leche.\n");
                break;

            case 3:
                printf("Preparando su capuchino.\n");
                break;

            case 4:
                printf("Gracias por su visita. Hasta pronto.\n");
                break;

            default:
                printf("Error: seleccione una opcion del 1 al 4.\n");
                break;
        }

    } while (opcion != 4);

    return 0;
}