# Ejercicio 04: Control de encendido por paridad de pulso

## Enunciado

Crea la lógica para un contador de pulsos que reciba el número total de activaciones de un botón e indique si el total actual es un número par o impar.

## Investigación y Supuesto Técnico

Un contador de pulsos es un sistema que registra cuántas veces ocurre una determinada señal.

- Primera pulsación → contador = 1
- Segunda pulsación → contador = 2
- Tercera pulsación → contador = 3

## Escrito:

01.	Inicio;
02.	Definir la cantidad de pulsos;
03.	Definir la variable de control del ciclo;
04.	Escribir "¿Qué cantidad de pulsos desea simular?";
05.	Leer PULSOS;
06.	Iniciar un ciclo Para desde 1 hasta PULSOS;
07.	Evaluar el número de pulsación utilizando el operador MOD;
08.	Si la pulsación MOD 2 es igual a 1;
09.	Escribir "Pulso ", i, ": Señal ON";
10.	Si no;
11.	Escribir "Pulso ", i, ": Señal OFF";
12.	Fin Si;
13.	Repetir hasta completar la cantidad de pulsos;
14.	Fin del ciclo Para;
15.	Fin;

## ARCHIVO     

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD/EJERCICIOS04_10_4.dfd)
