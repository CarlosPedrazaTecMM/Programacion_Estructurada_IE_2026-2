#include <stdio.h>

int main() {
    int filas;
    int columnas;
    int fila;
    int columna;

    printf("Ingrese la cantidad de filas del cine:\n");
    scanf("%d", &filas);

    printf("Ingrese la cantidad de asientos por fila:\n");
    scanf("%d", &columnas);

    if (filas <= 0 || columnas <= 0) {
        printf("Error: ambas cantidades deben ser mayores que cero.\n");
    } else {
        printf("\nDistribucion de asientos (fila-columna):\n");

        for (fila = 1; fila <= filas; fila++) {
            for (columna = 1; columna <= columnas; columna++) {
                printf("[%d-%d] ", fila, columna);
            }

            printf("\n");
        }
    }

    return 0;
}