# Ejercicio  5 : Sistema de conteo de piezas con capacidad de lote (Batch Count)



## Enunciado

<p align="justify">
Elabora un pseudocódigo que reciba la lectura de un sensor óptico en una banda transportadora. El sistema debe contar las piezas individuales, detener la banda al completar un lote de tamaño fijo, activar un actuador de empaque y reanudar el proceso automáticamente.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
 El estudiante debe definir el tamaño del paquete (ej. 12 piezas), utilizar operadores de igualdad o residuos para detectar el fin de lote (piezas % tamaño_lote == 0) y gestionar variables de bandera (flags) para pausar y reanudar el ciclo de transporte.
</p>

<p align="justify">
El sistema utilizará un sensor óptico para detectar cada pieza que pasa por la banda. Para este ejercicio se establece un lote de 12 piezas. Cuando el contador alcance las 12 piezas, la banda se detendrá, se activará el actuador de empaque y posteriormente la banda reanudará el conteo para formar un nuevo lote.
</p>

## Objetivo

<p align="justify">
Desarrollar un algoritmo que permita contar piezas mediante un sensor óptico, detener automáticamente la banda al completar un lote, activar el proceso de empaque y continuar con el conteo de un nuevo lote.
</p>


## Redacción

1.	Inicio;
2.	Definir el contador de piezas en 0;
3.	Definir el contador de paquetes empaquetados en 0;
4.	Definir el tamaño del lote en 12 piezas;
5.	Definir la banda transportadora como encendida;
6.	Definir el actuador de empaque como apagado;
7.	Escribir 'Ingrese el estado del sensor óptico 1 = Pieza detectada, 0 = Sin pieza';
8.	Leer SENSOR;
9.	Si SENSOR es igual a 1;
10.	Sumar 1 al contador de piezas;
11.	Escribir la cantidad de piezas contadas;
12.	Si el contador de piezas es igual a 12;
13.	Detener la banda transportadora;
14.	Activar el actuador de empaque;
15.	Escribir 'Lote de 12 piezas completado';
16.	Sumar 1 al contador de paquetes empaquetados;
17.	Escribir la cantidad de paquetes empaquetados;
18.	Reiniciar el contador de piezas a 0;
19.	Desactivar el actuador de empaque;
20.	Encender nuevamente la banda transportadora;
21.	Escribir 'Banda transportadora reanudada';
22.	Regresar a la lectura del sensor óptico;
23.	FIN;

## ARCHIVO

**Archivo:** [Descargar](DESCARGAR_EJERCICIOS_DFD_03_10/EJERCICIOS_03_10_05.psc)
