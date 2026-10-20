#include <stdio.h>

int main() {
    float a;
    float b;
    float c;
    float discriminante;

    printf("Ingrese el valor del coeficiente a:\n");
    scanf("%f", &a);

    printf("Ingrese el valor del coeficiente b:\n");
    scanf("%f", &b);

    printf("Ingrese el valor del coeficiente c:\n");
    scanf("%f", &c);

    discriminante = (b * b) - (4 * a * c);

    printf("El discriminante de la ecuacion es: %.2f\n", discriminante);

    return 0;
}