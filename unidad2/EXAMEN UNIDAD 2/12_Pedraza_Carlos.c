#include <stdio.h>

int main(void)
{
    int n, i, v1, v3, rondas, score_final;
    float v2, desempeno;
    char c, estado;

    printf("=== Torneo de E-Sports ===\n\n");
    printf("Ingrese la cantidad de jugadores (N, numero entero): ");
    fflush(stdout);

    if (scanf("%d", &n) != 1) {
        printf("Error: la cantidad de jugadores debe ser un numero entero.\n");
        return 1;
    }

    printf("\nPara cada jugador ingrese cuatro datos separados por espacios:\n");
    printf("C: rango del jugador (P o N, en mayusculas).\n");
    printf("V1: puntos base (numero entero).\n");
    printf("V2: combo (numero decimal; use punto, por ejemplo 1.5).\n");
    printf("V3: lag inicial (numero entero).\n");
    printf("Formato: C V1 V2 V3\n");
    printf("Ejemplo: P 40 1.5 81\n");
    printf("Estados del resultado: A = Aprobado/Aceptado; R = Rechazado.\n");

    for (i = 1; i <= n; i++) {
        printf("\nJugador %d de %d\n", i, n);
        printf("Ingrese C V1 V2 V3: ");
        fflush(stdout);

        if (scanf(" %c %d %f %d", &c, &v1, &v2, &v3) != 4) {
            printf("Error: use el formato C V1 V2 V3. Ejemplo: P 40 1.5 81\n");
            return 1;
        }

        rondas = 0;
        while (v3 > 0) {
            v3 = (v3 / 3) - 2;
            rondas++;
        }

        if (c == 'P') {
            desempeno = v1 * v2 + 15.5;
        } else {
            desempeno = (v1 * v2) / 2.0 - 5.0;
        }

        score_final = v1 + rondas * 2 - v1 % 8 * 2 + (int)desempeno;

        if (rondas > 3) {
            score_final = score_final - 6;
        }

        if ((v1 >= 38 && score_final > 25) || !(c == 'N')) {
            estado = 'A';
        } else {
            estado = 'R';
        }

        printf("\nResultado (jugador rondas score_final estado):\n");
        printf("%d %d %d %c\n", i, rondas, score_final, estado);
    }

    return 0;
}
