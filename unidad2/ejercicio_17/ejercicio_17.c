#include <stdio.h>

int main() {
    float normales;
    float extras;
    float pagoTotal;

    printf("Ingrese la cantidad de horas normales trabajadas:\n");
    scanf("%f", &normales);

    printf("Ingrese la cantidad de horas extras trabajadas:\n");
    scanf("%f", &extras);

    pagoTotal = (normales * 100) + (extras * 200);

    printf("Su pago total es: %.2f pesos.\n", pagoTotal);

    return 0;
}