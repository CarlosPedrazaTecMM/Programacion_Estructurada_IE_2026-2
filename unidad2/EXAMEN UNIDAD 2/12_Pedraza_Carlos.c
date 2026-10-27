#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <float.h>

#define TAM_LINEA 256

typedef struct {
    int rondas;
    int score_final;
    char estado;
} Resultado;

/* Devuelve 1 si leyo una linea, -1 si era muy larga y 0 al terminar. */
int leer_linea(char *linea)
{
    int caracter;

    if (fgets(linea, TAM_LINEA, stdin) == NULL) {
        printf("\nEntrada finalizada.\n");
        return 0;
    }

    if (strchr(linea, '\n') != NULL) {
        return 1;
    }

    caracter = getchar();
    if (caracter == '\n' || caracter == EOF) {
        return 1;
    }

    /* Descarta el resto para que no se mezcle con la siguiente respuesta. */
    while (caracter != '\n' && caracter != EOF) {
        caracter = getchar();
    }
    return -1;
}

/* Comprueba que despues del dato solo queden espacios o saltos de linea. */
int solo_espacios(const char *texto)
{
    while (isspace((unsigned char)*texto)) {
        texto++;
    }
    return *texto == '\0';
}

int pedir_entero(const char *mensaje, const char *error, int *valor)
{
    char linea[TAM_LINEA];
    char *fin;
    long numero;
    int lectura;

    while (1) {
        printf("%s", mensaje);
        fflush(stdout);
        lectura = leer_linea(linea);
        if (lectura == 0) {
            return 0;
        }

        if (lectura == 1) {
            errno = 0;
            numero = strtol(linea, &fin, 10);
            if (fin != linea && errno != ERANGE &&
                numero >= INT_MIN && numero <= INT_MAX &&
                solo_espacios(fin)) {
                *valor = (int)numero;
                return 1;
            }
        }

        printf("%s\n", error);
    }
}

int pedir_rango(char *rango)
{
    char linea[TAM_LINEA];
    char *inicio;
    int lectura;

    while (1) {
        printf("Favor de ingresar el rango de juego "
               "P profesional o N new player: ");
        fflush(stdout);
        lectura = leer_linea(linea);
        if (lectura == 0) {
            return 0;
        }

        if (lectura == 1) {
            inicio = linea;
            while (isspace((unsigned char)*inicio)) {
                inicio++;
            }
            if ((*inicio == 'P' || *inicio == 'N') &&
                solo_espacios(inicio + 1)) {
                *rango = *inicio;
                return 1;
            }
        }

        printf("Error: favor de ingresar el rango en el que este jugador "
               "va a jugar: profesional (P) o novato (N).\n");
    }
}

int pedir_combo(float *combo)
{
    char linea[TAM_LINEA];
    char *fin;
    double numero;
    int lectura;

    while (1) {
        printf("COMBO DE JUGADOR: ingrese un numero entero o decimal "
               "(use punto para los decimales): ");
        fflush(stdout);
        lectura = leer_linea(linea);
        if (lectura == 0) {
            return 0;
        }

        if (lectura == 1) {
            errno = 0;
            numero = strtod(linea, &fin);
            if (fin != linea && errno != ERANGE &&
                numero >= -FLT_MAX && numero <= FLT_MAX &&
                solo_espacios(fin)) {
                *combo = (float)numero;
                return 1;
            }
        }

        printf("Error: favor de ingresar un numero entero o decimal.\n");
    }
}

/* Comprueba los limites antes de convertir el desempeno a entero. */
int calcular_resultado(char c, int v1, float v2, int rondas,
                       Resultado *resultado)
{
    float desempeno;
    double producto, score_calculado;

    producto = (double)v1 * v2;
    if (producto < -FLT_MAX || producto > FLT_MAX) {
        return 0;
    }

    if (c == 'P') {
        desempeno = v1 * v2 + 15.5;
    } else {
        desempeno = (v1 * v2) / 2.0 - 5.0;
    }

    if ((double)desempeno < INT_MIN || (double)desempeno > INT_MAX) {
        return 0;
    }

    /* El temporal evita desbordamientos al sumar los valores enteros. */
    score_calculado = (double)v1 + rondas * 2 - v1 % 8 * 2
                     + (int)desempeno;

    if (rondas > 3) {
        score_calculado = score_calculado - 6;
    }

    if (score_calculado < INT_MIN || score_calculado > INT_MAX) {
        return 0;
    }

    resultado->rondas = rondas;
    resultado->score_final = (int)score_calculado;

    if ((v1 >= 38 && resultado->score_final > 25) || !(c == 'N')) {
        resultado->estado = 'A';
    } else {
        resultado->estado = 'R';
    }
    return 1;
}

int main(void)
{
    int n, i, v1, v3, rondas;
    float v2;
    char c;
    Resultado *resultados;

    printf("=== Torneo de E-Sports ===\n\n");

    do {
        if (!pedir_entero("Ingrese la cantidad de jugadores: ",
                         "Error: favor de ingresar un numero entero "
                         "para el numero de jugadores.", &n)) {
            return 1;
        }
        if (n <= 0) {
            printf("Error: favor de ingresar un numero entero mayor que "
                   "cero para el numero de jugadores.\n");
        }
    } while (n <= 0);

    /* Guarda las respuestas para mostrar juntas las N filas al final. */
    if ((size_t)n > (size_t)-1 / sizeof(*resultados)) {
        printf("Error: la cantidad de jugadores es demasiado grande.\n");
        return 1;
    }
    resultados = malloc((size_t)n * sizeof(*resultados));
    if (resultados == NULL) {
        printf("Error: no hay memoria suficiente para los jugadores.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nJugador %d de %d\n", i + 1, n);

        if (!pedir_rango(&c) ||
            !pedir_entero("V1 PUNTOS OBTENIDOS: ingrese el puntaje: ",
                         "Error: favor de ingresar puntaje sin decimales.",
                         &v1) ||
            !pedir_combo(&v2) ||
            !pedir_entero("LAG: ingrese la latencia con la que se jugo: ",
                         "Error: favor de ingresar un numero entero "
                         "para la latencia.", &v3)) {
            free(resultados);
            return 1;
        }

        rondas = 0;
        while (v3 > 0) {
            v3 = (v3 / 3) - 2;
            rondas++;
        }

        while (!calcular_resultado(c, v1, v2, rondas, &resultados[i])) {
            printf("Error: el combo produce un resultado fuera del rango "
                   "permitido. Favor de ingresar otro combo.\n");
            if (!pedir_combo(&v2)) {
                free(resultados);
                return 1;
            }
        }
    }

    printf("\n");
    for (i = 0; i < n; i++) {
        printf("JUGADOR: %d RONDAS JUGADAS: %d PUNTAJE FINAL: %d "
               "ESTADO: %c (%s)\n", i + 1, resultados[i].rondas,
               resultados[i].score_final, resultados[i].estado,
               resultados[i].estado == 'A' ? "APROBADO" : "RECHAZADO");
    }

    free(resultados);
    return 0;
}
