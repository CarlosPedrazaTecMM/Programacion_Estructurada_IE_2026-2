#include <stdio.h>

int main() {
    float calif;
    float asistencia;
    int justificante;

    printf("Ingrese su calificacion de 0 a 100:\n");
    scanf("%f", &calif);

    printf("Ingrese su porcentaje de asistencia de 0 a 100:\n");
    scanf("%f", &asistencia);

    printf("Tiene justificante? Ingrese 1 para si o 0 para no:\n");
    scanf("%d", &justificante);

    if (calif >= 70 && (asistencia > 80 || justificante == 1)) {
        printf("Usted obtiene la promocion.\n");
    } else {
        printf("Usted no cumple los requisitos para la promocion.\n");
    }

    return 0;
}