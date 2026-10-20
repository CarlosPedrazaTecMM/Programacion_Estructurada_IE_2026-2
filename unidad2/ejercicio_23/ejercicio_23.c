#include <stdio.h>

int main() {
    int zona;

    printf("Seleccione la zona de envio:\n");
    printf("1. Local\n");
    printf("2. Nacional\n");
    printf("3. Internacional\n");
    printf("Ingrese el numero de la zona:\n");
    scanf("%d", &zona);

    switch (zona) {
        case 1:
            printf("La tarifa a cobrar es: 50 pesos.\n");
            break;

        case 2:
            printf("La tarifa a cobrar es: 150 pesos.\n");
            break;

        case 3:
            printf("La tarifa a cobrar es: 500 pesos.\n");
            break;

        default:
            printf("Error\n");
            break;
    }

    return 0;
}