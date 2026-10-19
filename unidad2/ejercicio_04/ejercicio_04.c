#include <stdio.h>

int main() {
    double radio;
    double pi = 3.141592653589793;
    double area;

    printf("Ingrese el radio del circulo:\n");
    scanf("%lf", &radio);

    area = pi * radio * radio;

    printf("El area del circulo es: %.15f\n", area);

    return 0;
}