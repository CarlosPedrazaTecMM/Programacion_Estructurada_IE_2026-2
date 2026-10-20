#include <stdio.h>

int main() {
    float calificacion;
    float ingresos;
    float distancia;

    printf("Ingrese su promedio de calificaciones de 0 a 100:\n");
    scanf("%f", &calificacion);

    printf("Ingrese sus ingresos quincenales en pesos:\n");
    scanf("%f", &ingresos);

    printf("Ingrese la distancia de su casa a la escuela en kilometros:\n");
    scanf("%f", &distancia);

    if (calificacion > 80 || ingresos < 3500 || distancia > 10) {
        printf("Usted puede recibir una beca.\n");
    } else {
        printf("Usted no cumple los requisitos para recibir una beca.\n");
    }

    return 0;
}