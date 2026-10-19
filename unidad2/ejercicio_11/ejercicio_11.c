#include <stdio.h>

int main() {
    int calificacion1;
    int calificacion2;
    int calificacion3;
    float promedio;

    printf("Ingrese la primera calificacion entera:\n");
    scanf("%i", &calificacion1);

    printf("Ingrese la segunda calificacion entera:\n");
    scanf("%i", &calificacion2);

    printf("Ingrese la tercera calificacion entera:\n");
    scanf("%i", &calificacion3);

    promedio = (calificacion1 + calificacion2 + calificacion3) / 3.0f;

    printf("Su promedio semestral es: %.2f\n", promedio);

    return 0;
}