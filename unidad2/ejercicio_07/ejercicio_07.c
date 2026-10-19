#include <stdio.h>

int main() {
    int nacimiento;
    int actual = 2026;
    int edad;

    printf("Ingrese su ano de nacimiento:\n");
    scanf("%i", &nacimiento);

    edad = actual - nacimiento;

    printf("Su edad aproximada es de %i anos.\n", edad);

    return 0;
}