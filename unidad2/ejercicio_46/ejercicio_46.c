#include <stdio.h>

int main() {
    int nip;
    int confirmacion;

    printf("Ingrese el NIP que desea registrar:\n");
    scanf("%d", &nip);

    do {
        printf("Confirme su NIP:\n");
        scanf("%d", &confirmacion);

        if (confirmacion != nip) {
            printf("Los NIP no coinciden. Intente nuevamente.\n");
        }
    } while (confirmacion != nip);

    printf("NIP confirmado correctamente.\n");

    return 0;
}