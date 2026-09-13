# Ejercicio 3: Detección de rebotador (Debounce) de un pulsador mecánico



## Enunciado
Desarrolla un algoritmo que lea el estado digital de un botón físico y confirme una pulsación válida únicamente cuando la señal mantenga un estado lógico alto (1) de forma ininterrumpida durante una cantidad consecutiva de lecturas.


## Investigación y Supuesto Técnico
El rebote mecánico ocurre cuando un pulsador cambia rápidamente entre los estados 1 y 0 al momento de ser presionado. Para evitar detectar una sola pulsación como varias, se utilizará un contador que acumule las lecturas consecutivas en 1. Se establece un umbral de 10 lecturas consecutivas. Si se recibe un 0 antes de alcanzar las 10 lecturas, el contador se reinicia a 0.


## Objetivo
Desarrollar un algoritmo que permita confirmar una pulsación válida mediante la detección de 5 lecturas consecutivas en estado lógico alto, evitando falsas detecciones causadas por el rebote mecánico.


## Redacción

1.	Inicio;
2.	Definir el contador de lecturas consecutivas en 0;
3.	Definir el número de lecturas necesarias para confirmar la pulsación en X;
4.	Escribir 'Ingrese el estado del pulsador 1 = Presionado, 0 = NO presionado';
5.	Leer PULSADOR;
6.	Si PULSADOR es igual a 1;
7.	Sumar 1 al contador de lecturas consecutivas;
8.	Si el contador alcanza 10;
9.	Escribir 'Pulsación válida ';
10.	Si no;
11.	Continuar leyendo el estado del pulsador;
12.	Si PULSADOR es igual a 0;
13.	Reiniciar el contador a 0;
14.	Escribir 'Rebote o interrupción detectada, reiniciando contador';
15.	Regresar a lectura del estado del pulsador;
16.	FIN;

## ARCHIVO

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD_03_10/EJERCICIOS_03_10_03.psc)
