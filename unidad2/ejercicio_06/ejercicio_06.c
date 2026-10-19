#include <stdio.h>

int main() {
    float pesos;
    float dolares;
    float cambiado = 0.054f;

    printf("Conversor de pesos a dolares\n");
    printf("Tasa de ejemplo: 1 peso equivale a 0.054 dolares.\n");

    printf("Ingrese la cantidad de pesos que desea convertir:\n");
    scanf("%f", &pesos);

    dolares = pesos * cambiado;

    printf("Sus %.2f pesos equivalen a %.2f dolares.\n", pesos, dolares);

    return 0;
}