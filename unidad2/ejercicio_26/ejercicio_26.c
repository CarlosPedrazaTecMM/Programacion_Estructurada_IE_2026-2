#include <stdio.h>

int main() {
    float calificacion;

    printf("Ingrese su calificacion de 0 a 100:\n");
    scanf("%f", &calificacion);

    if (calificacion < 0 || calificacion > 100) {
        printf("Error: la calificacion debe estar entre 0 y 100.\n");
    } else if (calificacion == 100) {
        printf("Excelente.\n");
    } else if (calificacion >= 75) {
        printf("Muy bien.\n");
    } else if (calificacion >= 50) {
        printf("Debes estudiar.\n");
    } else {
        printf("Requieres ayuda.\n");
    }

    return 0;
}