#include <stdio.h>

int main() {
    float gasto;
    int sucursales;

    printf("Ingrese el total gastado en los ultimos 60 dias en pesos:\n");
    scanf("%f", &gasto);

    printf("Ingrese cuantas sucursales distintas visito en ese periodo, de 0 a 8:\n");
    scanf("%d", &sucursales);

    if (gasto < 0 || sucursales < 0 || sucursales > 8) {
        printf("Error: ingrese un gasto valido y entre 0 y 8 sucursales.\n");
    } else {
        if (gasto >= 3500) {
            if (sucursales >= 3) {
                printf("Usted tiene rango de lealtad VIP.\n");
            } else {
                printf("No tiene rango VIP: debe visitar al menos 3 sucursales distintas.\n");
            }
        } else {
            printf("No tiene rango VIP: debe gastar al menos 3500 pesos en los ultimos 60 dias.\n");
        }
    }

    return 0;
}