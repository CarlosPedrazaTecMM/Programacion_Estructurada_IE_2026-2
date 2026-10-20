#include <stdio.h>

int main() {
    int dia;

    printf("Ingrese el numero del dia, del 1 al 7:\n");
    printf("1. Lunes\n");
    printf("2. Martes\n");
    printf("3. Miercoles\n");
    printf("4. Jueves\n");
    printf("5. Viernes\n");
    printf("6. Sabado\n");
    printf("7. Domingo\n");
    scanf("%d", &dia);

    if (dia < 1 || dia > 7) {
        printf("Error: ingrese un dia del 1 al 7.\n");
    } else if (dia == 6 || dia == 7) {
        printf("Dormir\n");
    } else {
        printf("Despertar\n");
    }

    return 0;
}