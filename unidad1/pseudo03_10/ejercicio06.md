# Ejercicio 6 : Algoritmo de decisión para semáforo inteligente de cruce



## Enunciado

<p align="justify">
Diseña la secuencia lógica de un semáforo instalado en una calle secundaria que cruza una avenida principal. La avenida principal debe mantener la luz verde a menos que un sensor de presencia en la calle secundaria detecte un vehículo en espera durante más de un tiempo mínimo determinado.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
El alumno debe estructurar las fases de tiempo para un cruce de vías de distinta prioridad, considerando el tiempo de espera mínimo en la vía secundaria antes de iniciar el cambio de fase y los tiempos de seguridad en amarillo.
</p>

<p align="justify">
Semaforo de avenida 100 segundos en verde, 5 segundos en amarillo y roja 60 segundos
Semaforo de calle 60 segundos en verde, 5 segundos en amarillo y rojo 20 segundos
</p>

## Objetivo

<p align="justify">
Desarrollar un algoritmo que controle un semáforo de dos vías, dando prioridad a la avenida principal y realizando el cambio de fase únicamente cuando un vehículo de la calle secundaria haya esperado el tiempo mínimo establecido.
</p>


## Redacción


1.	Inicio;
2.	Definir los tiempos de funcionamiento de ambos semáforos;
3.	Establecer el tiempo de verde de la avenida principal en 100 segundos;
4.	Establecer el tiempo de amarillo de la avenida principal en 5 segundos;
5.	Establecer el tiempo de rojo de la avenida principal en 60 segundos;
6.	Establecer el tiempo de verde de la calle secundaria en 60 segundos;
7.	Establecer el tiempo de amarillo de la calle secundaria en 5 segundos;
8.	Establecer el tiempo de rojo de la calle secundaria en 20 segundos;
9.	Mantener el semáforo de la avenida principal en verde;
10.	Mantener el semáforo de la calle secundaria en rojo;
11.	Leer el estado del sensor de presencia de la calle secundaria;
12.	Si no se detecta ningún vehículo;
13.	Mantener la avenida principal en verde y la calle secundaria en rojo;
14.	Si se detecta un vehículo en la calle secundaria;
15.	Cambiar el semáforo de la avenida principal de verde a amarillo;
16.	Mantener el amarillo de la avenida principal durante 5 segundos;
17.	Cambiar el semáforo de la avenida principal a rojo;
18.	Activar la señal acústica para peatones durante 60 segundos;
19.	Cambiar simultáneamente el semáforo de la calle secundaria a verde;
20.	Mantener la calle secundaria en verde durante 60 segundos;
21.	Cuando hayan transcurrido 55 segundos del periodo de verde de la calle secundaria;
22.	Cambiar el semáforo de la calle secundaria a amarillo;
23.	Mantener el amarillo de la calle secundaria durante 5 segundos;
24.	Cambiar el semáforo de la calle secundaria a rojo;
25.	Finalizar la señal acústica para peatones;
26.	Mantener la avenida principal en rojo durante el tiempo de seguridad establecido;
27.	Cambiar el semáforo de la avenida principal a verde;
28.	Regresar a la lectura del sensor de presencia;
29.	FIN;

## ARCHIVO

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD_03_10/EJERCICIOS_03_10_06.psc)
