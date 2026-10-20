#include <stdio.h>

int main() {
    int examen;
    int aprobados = 0;
    float calificacion;

    for (examen = 1; examen <= 10; examen++) {
        printf("Ingrese la calificacion del examen %d, de 0 a 100:\n", examen);
        scanf("%f", &calificacion);

        if (calificacion < 0 || calificacion > 100) {
            printf("Error: la calificacion debe estar entre 0 y 100.\n");
            examen--;
        } else {
            if (calificacion >= 60) {
                aprobados++;
            }
        }
    }

    printf("Total de examenes aprobados: %d\n", aprobados);
    printf("Total de examenes reprobados: %d\n", 10 - aprobados);

    return 0;
}