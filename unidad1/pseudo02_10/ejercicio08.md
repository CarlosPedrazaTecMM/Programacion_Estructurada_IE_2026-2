# Ejercicio 8: Muestreo de señal analógica y conteo de picos de voltaje



## Enunciado

<p align="justify">
Elabora un algoritmo que simule el muestreo de 15 señales consecutivas de voltaje tomadas de un circuito. Mediante un bucle FOR, el programa leerá cada muestra y utilizará una estructura de selección para contar cuántas de esas 15 lecturas superaron un umbral crítico de 3.3V.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
El estudiante debe inicializar una variable contador en cero, iterar 15 veces solicitando el dato de entrada y evaluar Si voltaje > 3.3 Entonces contador = contador + 1.
</p>

<p align="justify">
Se utilizará un ciclo FOR para realizar las 15 lecturas. Se inicializará un contador en cero y, cada vez que una lectura sea mayor a 3.3 V, el contador aumentará en uno.
</p>

## Objetivo

<p align="justify">
Contar la cantidad de muestras de voltaje que superan el umbral crítico de 3.3 V dentro de un conjunto de 15 mediciones.
</p>


## Redacción

1.	Inicio; 
2.	Definir el voltaje medido; 
3.	Definir el contador de picos; 
4.	Definir el número de muestra; 
5.	Establecer el contador en cero; 
6.	Repetir el proceso 15 veces; 
7.	Escribir que ingrese el voltaje de la muestra; 
8.	Leer el voltaje; 
9.	Escribir el número de muestra analizada; 
10.	Si el voltaje es mayor a 3.3 V; 
11.	Aumentar el contador de picos en uno; 
12.	Escribir que se detectó un pico de voltaje; 
13.	Si no; 
14.	Escribir que el voltaje se encuentra dentro del límite; 
15.	Fin Si; 
16.	Fin de las 15 muestras; 
17.	Escribir la cantidad total de picos detectados; 
18.	Fin;


## ARCHIVO

**Archivo:** [Descargar](DESCARGAR_EJERCICIOS/EJERCICIOS_02_10_08.psc)

