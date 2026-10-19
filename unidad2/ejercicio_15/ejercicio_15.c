#include <stdio.h>

int main() {
    float fahrenheit;
    float celsius;

    printf("Ingrese la temperatura en grados Fahrenheit:\n");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0f / 9.0f;

    printf("La temperatura en grados Celsius es: %.2f\n", celsius);

    return 0;
}