#include <stdio.h>

int main() {
    float cuenta;
    float propina;
    int personas;
    float pagoPorPersona;

    printf("Ingrese el total de la cuenta en pesos:\n");
    scanf("%f", &cuenta);

    printf("Ingrese la cantidad de propina en pesos:\n");
    scanf("%f", &propina);

    printf("Ingrese el numero de personas que pagaran:\n");
    scanf("%i", &personas);

    if (personas <= 0) {
        printf("Debe haber al menos una persona para dividir la cuenta.\n");
        return 0;
    }

    pagoPorPersona = (cuenta + propina) / personas;

    printf("Cada persona debe pagar: %.2f pesos.\n", pagoPorPersona);

    return 0;
}