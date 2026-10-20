#include <stdio.h>

int main() {
    int nip;

    printf("Ingrese su NIP para acceder al sistema:\n");
    scanf("%d", &nip);

    if (nip == 1234) {
        printf("Concedido\n");
    } else {
        printf("Denegado\n");
    }

    return 0;
}