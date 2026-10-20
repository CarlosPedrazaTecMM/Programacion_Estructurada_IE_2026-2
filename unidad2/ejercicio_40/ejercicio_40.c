#include <stdio.h>

int main() {
    int nip_ok;
    int robada;
    int saldo_ok;
    int credito;

    printf("El NIP es correcto? Ingrese 1 para si o 0 para no:\n");
    scanf("%d", &nip_ok);

    printf("La tarjeta esta reportada como robada? Ingrese 1 para si o 0 para no:\n");
    scanf("%d", &robada);

    printf("Tiene saldo suficiente? Ingrese 1 para si o 0 para no:\n");
    scanf("%d", &saldo_ok);

    printf("Tiene credito disponible? Ingrese 1 para si o 0 para no:\n");
    scanf("%d", &credito);

    if (nip_ok && !robada && (saldo_ok || credito)) {
        printf("Operacion autorizada.\n");
    } else {
        printf("Operacion rechazada.\n");
    }

    return 0;
}