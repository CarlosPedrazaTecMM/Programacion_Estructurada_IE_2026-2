#include <stdio.h>
#include <windows.h>

int main() {
    int segundos;
    int contador;

    printf("Ingrese los segundos del temporizador:\n");
    scanf("%d", &segundos);

    if (segundos < 0) {
        printf("Error: los segundos no pueden ser negativos.\n");
    } else {
        for (contador = segundos; contador >= 0; contador--) {
            printf("%d\n", contador);
            fflush(stdout);

            if (contador > 0) {
                Sleep(1000);
            }
        }

        printf("bip bip bip\n");
    }

    return 0;
}