#include <stdio.h>

int main() {
    int monedas;
    int nietos;
    int monedasPorNieto;
    int sobrantes;

    printf("Ingrese el total de monedas a repartir:\n");
    scanf("%i", &monedas);

    printf("Ingrese el numero de nietos:\n");
    scanf("%i", &nietos);

    if (monedas < 0 || nietos <= 0) {
        printf("Las monedas no pueden ser negativas y debe haber al menos un nieto.\n");
        return 0;
    }

    monedasPorNieto = monedas / nietos;
    sobrantes = monedas % nietos;

    printf("Cada nieto recibira %i monedas.\n", monedasPorNieto);
    printf("Sobran %i monedas para caridad.\n", sobrantes);

    return 0;
}