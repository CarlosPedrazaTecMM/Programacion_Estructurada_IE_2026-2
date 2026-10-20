#include <stdio.h>

int main() {
    int placa;

    printf("Ingrese la parte numerica de su placa:\n");
    scanf("%d", &placa);

    if (placa % 2 == 0) {
        printf("Su placa es par.\n");
    } else {
        printf("Su placa es impar.\n");
    }

    return 0;
}