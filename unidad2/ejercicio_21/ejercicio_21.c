#include <stdio.h>

int main() {
    int temperatura;

    printf("Ingrese la temperatura en grados Celsius:\n");
    scanf("%d", &temperatura);

    if (temperatura < 0) {
        printf("Alerta\n");
    }

    return 0;
}