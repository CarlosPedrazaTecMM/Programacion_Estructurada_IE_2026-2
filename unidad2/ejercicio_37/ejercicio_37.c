#include <stdio.h>

int main() {
    float monto;
    int premium;
    int internacional;

    printf("Ingrese el monto de su compra en pesos:\n");
    scanf("%f", &monto);

    printf("Es cliente premium? Ingrese 1 para si o 0 para no:\n");
    scanf("%d", &premium);

    printf("El envio es internacional? Ingrese 1 para si o 0 para no:\n");
    scanf("%d", &internacional);

    if (monto > 1500 || (premium == 1 && !internacional)) {
        printf("Su compra tiene envio gratis.\n");
    } else {
        printf("Su compra no tiene envio gratis.\n");
    }

    return 0;
}