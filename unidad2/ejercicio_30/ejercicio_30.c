#include <stdio.h>

int main() {
    int opcion;
    float saldo = 1000;
    float cantidad;

    printf("Bienvenido al cajero automatico.\n");
    printf("1. Consultar saldo\n");
    printf("2. Depositar dinero\n");
    printf("3. Retirar dinero\n");
    printf("4. Salir\n");
    printf("Ingrese el numero de la operacion que desea realizar:\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Su saldo actual es: %.2f pesos.\n", saldo);
            break;

        case 2:
            printf("Ingrese la cantidad que desea depositar:\n");
            scanf("%f", &cantidad);

            if (cantidad > 0) {
                saldo = saldo + cantidad;
                printf("Deposito realizado. Su saldo es: %.2f pesos.\n", saldo);
            } else {
                printf("La cantidad debe ser mayor que cero.\n");
            }
            break;

        case 3:
            printf("Ingrese la cantidad que desea retirar:\n");
            scanf("%f", &cantidad);

            if (cantidad <= 0) {
                printf("La cantidad debe ser mayor que cero.\n");
            } else if (cantidad > saldo) {
                printf("Saldo insuficiente para realizar el retiro.\n");
            } else {
                saldo = saldo - cantidad;
                printf("Retiro realizado. Su saldo es: %.2f pesos.\n", saldo);
            }
            break;

        case 4:
            printf("Gracias por utilizar el cajero. Hasta pronto.\n");
            break;

        default:
            printf("Error: seleccione una opcion del 1 al 4.\n");
            break;
    }

    return 0;
}