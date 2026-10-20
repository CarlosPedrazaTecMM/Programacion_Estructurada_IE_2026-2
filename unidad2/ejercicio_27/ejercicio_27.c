#include <stdio.h>

int main() {
    int peso;

    printf("Ingrese su peso en kilogramos enteros:\n");
    scanf("%d", &peso);

    if (peso < 49 || peso > 200) {
        printf("Su peso esta fuera de las categorias indicadas.\n");
    } else if (peso >= 135) {
        printf("Su categoria es peso sumo.\n");
    } else if (peso >= 85) {
        printf("Su categoria es peso pesado.\n");
    } else if (peso >= 65) {
        printf("Su categoria es peso normal.\n");
    } else {
        printf("Su categoria es peso pluma.\n");
    }

    return 0;
}