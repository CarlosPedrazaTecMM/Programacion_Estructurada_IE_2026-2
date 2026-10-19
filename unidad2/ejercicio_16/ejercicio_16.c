#include <stdio.h>

int main() {
    float peso;
    float estatura;
    float imc;

    printf("Ingrese su peso en kilogramos:\n");
    scanf("%f", &peso);

    printf("Ingrese su estatura en metros, por ejemplo 1.75:\n");
    scanf("%f", &estatura);

    if (peso <= 0 || estatura <= 0) {
        printf("El peso y la estatura deben ser mayores que cero.\n");
        return 0;
    }

    imc = peso / (estatura * estatura);

    printf("Su indice de masa corporal es: %.2f\n", imc);

    return 0;
}