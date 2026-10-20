#include <stdio.h>

int main() {
    int mes;

    printf("Ingrese el numero del mes, del 1 al 12:\n");
    printf("Por ejemplo: 1 para enero, 2 para febrero.\n");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("El mes tiene 31 dias.\n");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("El mes tiene 30 dias.\n");
            break;

        case 2:
            printf("Febrero tiene 28 dias, o 29 si el ano es bisiesto.\n");
            break;

        default:
            printf("Error: ingrese un mes del 1 al 12.\n");
            break;
    }

    return 0;
}