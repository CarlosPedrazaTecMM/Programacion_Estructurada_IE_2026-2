#include <stdio.h>

int main() {
    int edad;
    int permisoTutor;

    printf("Ingrese su edad en anos:\n");
    scanf("%d", &edad);

    if (edad < 0) {
        printf("Error: la edad no puede ser negativa.\n");
    } else if (edad >= 18) {
        printf("Puede obtener una licencia para mayores de edad.\n");
    } else if (edad >= 16 && edad < 18) {
        printf("Tiene autorizacion de su tutor? Ingrese 1 para si o 0 para no:\n");
        scanf("%d", &permisoTutor);

        if (permisoTutor == 1) {
            printf("Puede obtener una licencia para menores.\n");
        } else if (permisoTutor == 0) {
            printf("Licencia rechazada: necesita autorizacion de su tutor.\n");
        } else {
            printf("Error: ingrese 1 o 0.\n");
        }
    } else {
        printf("Licencia rechazada: debe tener al menos 16 anos.\n");
    }

    return 0;
}