# Ejercicio 4: Limitador de corriente de arranque (Soft Starter)



## Enunciado
<p align="justify">
Crea la lógica para un arrancador suave de un motor trifásico. Durante los primeros segundos de encendido, la corriente consumida debe ser monitoreada con un límite tolerado mayor; tras superar el periodo de arranque, el límite de corriente de protección debe reducirse al valor nominal de trabajo.
</p>


## Investigación y Supuesto Técnico

<p align="justify">
  El alumno debe consultar la relación común entre la corriente de arranque y la corriente nominal en motores eléctricos (ej. la corriente de arranque suele ser de 3 a 5 veces la nominal) y definir la lógica de cambio de estado según el tiempo transcurrido.
</p>

<p align="justify">
Durante el arranque, un motor eléctrico puede consumir una corriente varias veces mayor que su corriente nominal. Para este ejercicio se considerará una corriente de arranque de hasta 5 veces la corriente nominal.

El sistema utilizará un tiempo de arranque de 5 segundos. Durante este periodo se permitirá un límite mayor de corriente; después de los 5 segundos, el límite se reducirá a la corriente nominal.
</p>

## Objetivo

<p align="justify">
Desarrollar un algoritmo que monitoree la corriente de un motor durante su arranque y cambie automáticamente el límite de protección al finalizar el tiempo establecido.
</p>


## Redacción

1.	Inicio;
2.	Escribir Ingrese la corriente nominal del motor en Amperes;
3.	Leer CORRIENTENOM;
4.	Escribir Ingrese la corriente actual del motor en Amperes;
5.	Leer CORRIENTENOW;
6.	Definir el tiempo de arranque en 5 segundos;
7.	Calcular el límite de corriente de arranque multiplicando la corriente nominal por 5;
8.	Si el tiempo transcurrido es menor o igual a 5 segundos;
9.	Utilizar el límite de corriente de arranque;
10.	Si la corriente actual supera el límite de arranque;
11.	Escribir "Corriente de arranque excedida";
12.	Si no;
13.	Escribir "Corriente dentro del límite";
14.	Si el tiempo transcurrido es mayor a 5 segundos;
15.	Utilizar como límite de protección la corriente nominal;
16.	Si la corriente actual supera la corriente nominal;
17.	Escribir "Protección de sobrecorriente activada";
18.	Si no;
19.	Escribir "Motor funcionando dentro de la corriente nominal";
20.	FIN;


## ARCHIVO

**Archivo:** [Descargar](DESCARGAR_EJERCICIOS_DFD_03_10/EJERCICIOS_03_10_04.psc)
