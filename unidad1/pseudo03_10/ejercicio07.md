# Ejercicio 7 : Autodiagnóstico de sensor por fuera de rango (Out of Bounds)



## Enunciado

<p align="justify">
 Desarrolla un algoritmo que procese el voltaje entregado por un sensor industrial con salida de 4 a 20 mA (convertido a voltaje). Si la lectura cae por debajo de 4 mA o supera los 20 mA, el programa debe identificar si se trata de un corte de cable o un cortocircuito.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
El estudiante debe investigar el estándar industrial de 4 a 20 mA, donde una lectura de 0 mA indica línea rota/abierta y un valor por encima de 20 mA (ej. 24 mA) indica cortocircuito o sobre-rango, traduciendo estos eventos a códigos de error lógicos.
</p>

<p align="justify">
El estándar 4–20 mA utiliza 4 mA como valor mínimo y 20 mA como valor máximo de señal. Para este ejercicio se considerará que una lectura de 0 mA representa un posible cable abierto o corte de línea, mientras que una lectura mayor a 20 mA representa una condición de sobre-rango o posible cortocircuito.
</p>

## Objetivo

<p align="justify">
Desarrollar un algoritmo capaz de monitorear la corriente de un sensor de 4–20 mA y generar un mensaje de diagnóstico cuando la señal se encuentre fuera del rango normal de operación.
</p>


## Redacción

1.	Inicio;
2.	Escribir "Ingrese la corriente entregada por el sensor en mA";
3.	Leer CORRIENTE;
4.	Si CORRIENTE es igual a 0;
5.	Escribir "Error: posible corte de cable o línea abierta";
6.	Si CORRIENTE es mayor que 20;
7.	Escribir "Error: posible cortocircuito o señal fuera de rango";
8.	Si CORRIENTE es mayor o igual a 4 y menor o igual a 20;
9.	Escribir "Sensor funcionando dentro del rango normal";
10.	Si la corriente es mayor que 0 y menor que 4;
11.	Escribir "Advertencia: corriente por debajo del rango normal";
12.	FIN;


## ARCHIVO

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD_03_10/EJERCICIOS_03_10_07.psc)

