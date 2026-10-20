#include <stdio.h>

int main() {
    int dia;
    int monto;
    int total = 0;

    for (dia = 1; dia <= 7; dia++) {
        printf("Ingrese el monto ahorrado el dia %d en pesos:\n", dia);
        scanf("%d", &monto);

        total = total + monto;
    }

    printf("El total ahorrado en la semana es: %d pesos.\n", total);

    return 0;
}