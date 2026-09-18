# Ejercicio  5: Generador de secuencia de prueba para tira de LEDs (Patrón de luces)



## Enunciado

<p align="justify">
Diseña la secuencia de control para una fila de 8 LEDs indexados del 1 al 8. El sistema debe realizar un barrido donde, en cada paso del bucle, encenderá únicamente los LEDs que correspondan a una posición par, apagando los impares, y luego invertirá el patrón en la siguiente pasada.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
El alumno debe emplear un bucle FOR para recorrer los índices del 1 al 8 y evaluar la condición posicion % 2 == 0 dentro de un bucle de repetición principal.
</p>

<p align="justify">
Se utilizará un bucle Para para recorrer las posiciones del 1 al 8. Mediante el operador % se determinará si la posición es par o impar, permitiendo invertir el patrón en cada pasada.
</p>

## Objetivo

<p align="justify">
Generar una secuencia de prueba para verificar el funcionamiento de los 8 LEDs mediante un patrón alternado entre posiciones pares e impares.
</p>


## Redacción

1.	Inicio; 
2.	Definir la posición del LED; 
3.	Definir el patrón; 
4.	Definir el número de repetición; 
5.	Establecer el patrón inicial en posiciones pares; 
6.	Repetir la secuencia dos veces; 
7.	Recorrer las posiciones de los LEDs del 1 al 8; 
8.	Si el patrón corresponde a posiciones pares; 
9.	Si la posición dividida entre 2 tiene residuo 0; 
10.	Escribir que la posición es par; 
11.	Escribir que el LED está encendido; 
12.	Si no; 
13.	Escribir que la posición es impar; 
14.	Escribir que el LED está apagado; 
15.	Fin Si; 
16.	Si el patrón corresponde a posiciones impares; 
17.	Si la posición dividida entre 2 tiene residuo diferente de 0; 
18.	Escribir que la posición es impar; 
19.	Escribir que el LED está encendido; 
20.	Si no; 
21.	Escribir que la posición es par; 
22.	Escribir que el LED está apagado; 
23.	Fin Si; 
24.	Fin del recorrido de los LEDs; 
25.	Invertir el patrón; 
26.	Fin de la repetición; 
27.	Fin;

## ARCHIVO

**Archivo:** [Descargar](DESCARGAR_EJERCICIOS/EJERCICIOS_02_10_05.psc)
