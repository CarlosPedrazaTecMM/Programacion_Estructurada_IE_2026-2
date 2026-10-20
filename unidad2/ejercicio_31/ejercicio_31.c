#include <stdio.h>

int main() {
    int edad;
    int boleto;

    printf("Ingrese su edad en anos:\n");
    scanf("%d", &edad);

    printf("Tiene boleto? Ingrese 1 para si o 0 para no:\n");
    scanf("%d", &boleto);

    if (edad < 18 && boleto != 1) {
        printf("Rechazado por intentar colarse al cine.\n");
    } else if (edad < 18) {
        printf("Rechazado por ser menor de edad.\n");
    } else if (boleto != 1) {
        printf("Rechazado por no tener boleto.\n");
    } else {
        printf("Pase\n");
    }

    return 0;
}