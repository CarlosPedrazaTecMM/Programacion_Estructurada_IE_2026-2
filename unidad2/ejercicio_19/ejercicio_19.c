#include <stdio.h>

int main() {
    float distancia;
    float rendimiento;
    float gas;
    float casetas;
    float costoTotal;

    printf("Ingrese la distancia del viaje en kilometros:\n");
    scanf("%f", &distancia);

    printf("Ingrese el rendimiento del vehiculo en kilometros por litro:\n");
    scanf("%f", &rendimiento);

    printf("Ingrese el precio de la gasolina por litro en pesos:\n");
    scanf("%f", &gas);

    printf("Ingrese el costo total de las casetas en pesos:\n");
    scanf("%f", &casetas);

    if (rendimiento <= 0) {
        printf("El rendimiento debe ser mayor que cero.\n");
        return 0;
    }

    costoTotal = (distancia / rendimiento) * gas + casetas;

    printf("El costo total estimado del viaje es: %.2f pesos.\n", costoTotal);

    return 0;
}