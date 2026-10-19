#include <stdio.h>

int main() {
    float numero1;
    float numero2;
    float promedio;

    printf("Ingrese el valor del primer numero decimal:\n");
    scanf("%f", &numero1);

    printf("Ingrese el valor del segundo numero decimal:\n");
    scanf("%f", &numero2);

    promedio = (numero1 + numero2) / 2.0f;

    printf("El promedio de los dos numeros es: %f\n", promedio);

    return 0;
}