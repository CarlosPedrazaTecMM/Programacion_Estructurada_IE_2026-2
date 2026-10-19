#include <stdio.h>

int main() {
    float base;
    float altura;
    float area;
    float perimetro;

    printf("Ingrese la base del rectangulo:\n");
    scanf("%f", &base);

    printf("Ingrese la altura del rectangulo:\n");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);

    printf("El area del rectangulo es: %.2f\n", area);
    printf("El perimetro del rectangulo es: %.2f\n", perimetro);

    return 0;
}