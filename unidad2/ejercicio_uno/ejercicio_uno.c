#include <stdio.h>

int main() {
    int numero1;
    int numero2;
    int suma;

    printf("ingrese el valor del primer numero para la suma \n");
    
    scanf("%i", &numero1);

    printf("ingrese el valor del segundo numero para la suma \n");
    
    scanf("%i", &numero2);

    suma = numero1 + numero2;

    printf("el resultado de su suma es " "%i \n", suma);

    return 0;
}