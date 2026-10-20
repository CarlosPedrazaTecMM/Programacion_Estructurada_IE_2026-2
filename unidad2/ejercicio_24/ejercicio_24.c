#include <stdio.h>

int main() {
    float saldo;
    float penalizacion;

    printf("Ingrese su saldo actual en pesos:\n");
    scanf("%f", &saldo);

    if (saldo < 1000) {
        printf("Ingrese el monto de la penalizacion en pesos:\n");
        scanf("%f", &penalizacion);

        saldo = saldo - penalizacion;

        printf("Se aplico una penalizacion por saldo menor a 1000 pesos.\n");
    }

    printf("Su saldo final es: %.2f pesos.\n", saldo);

    return 0;
}