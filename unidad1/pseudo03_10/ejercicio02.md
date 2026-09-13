# Ejercicio 2: Monitoreo de presión con ventana de tolerancia (Banda muerta)



## Enunciado
Escribe el pseudocódigo para un sistema de presurización. El compresor debe activarse si la presión cae por debajo del límite inferior tolerable y desactivarse solo cuando alcance el límite superior, evitando encendidos y apagados continuos si la lectura oscila ligeramente alrededor del valor nominal.


## Investigación y Supuesto Técnico
 El alumno debe investigar cómo funciona una "banda muerta" o zona neutra en control industrial y definir condiciones de borde claras (presión < setpoint - tolerancia para encender y presión > setpoint + tolerancia para apagar):

Una banda muerta es una zona de tolerancia utilizada en sistemas de control para evitar que un actuador se encienda y apague constantemente ante pequeñas variaciones de la lectura. utilizando un set point de presión y una tolerancia para establecer ambos limites (inferior y superior)


## Objetivo
Desarrollar un pseudocódigo que controle el encendido y apagado de un compresor mediante una banda muerta, evitando cambios innecesarios debido a pequeñas variaciones de presión.


## Redacción

01.	Inicio;
02.	Escribir 'Ingrese la presión actual del sistema';
03.	Leer presion;
04.	Escribir 'Ingrese la presión nominal/SETPOINT';
05.	Leer SETPOINT;
06.	Escribir 'Ingrese la tolerancia admitida';
07.	Leer tolerancia;
08.	Calcular el límite inferior setpoint-tolerancia;
09.	Calcular el límite superior como setpoint + tolerancia;
10.	Definir el estado inicial del compresor como apagado;
11.	Si la presion es menor que el límite inferior;
12.	Encender el compresor;
13.	Si presion es mayor que el límite superior;
14.	Apagar el compresor;
15.	Si la presión se encuentra dentro de la banda de tolerancia;
16.	Mantener el estado actual del compresor;
17.	Escribir el estado actual del compresor;
18.	FIN;

## ARCHIVO

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD_03_10)
