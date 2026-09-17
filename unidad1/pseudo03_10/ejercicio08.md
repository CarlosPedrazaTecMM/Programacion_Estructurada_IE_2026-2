# Ejercicio 8 : Alternancia operativa de bombas de agua (Balance de desgaste)



## Enunciado

<p align="justify">
Escribe un pseudocódigo para controlar el llenado de un tanque mediante dos bombas redundantes. Cada vez que el tanque requiera agua, el sistema debe activar la bomba que tenga menos horas de uso acumuladas para equilibrar el desgaste de ambos equipos.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
El alumno debe utilizar acumuladores de tiempo para cada equipo, establecer una comparación condicional (horas_bomba1 < horas_bomba2) y definir una regla por defecto en caso de empate (prioridad a la Bomba 1).
</p>

<p align="justify">
Para realizar la alternancia de las bombas se utilizan acumuladores de horas de operación. El sistema compara las horas acumuladas de la Bomba 1 y la Bomba 2 mediante una condición. La bomba con menor cantidad de horas será seleccionada para operar. Si ambas tienen las mismas horas, se establece como regla de prioridad la Bomba 1.
</p>

## Objetivo

<p align="justify">
Desarrollar un algoritmo que seleccione automáticamente la bomba con menor cantidad de horas de uso acumuladas para equilibrar el desgaste de ambos equipos.
</p>


## Redacción

1.	Inicio;
2.	Definir las horas acumuladas de la Bomba 1;
3.	Definir las horas acumuladas de la Bomba 2;
4.	Definir el estado del tanque;
5.	Escribir "Ingrese las horas de uso de la Bomba 1";
6.	Leer HORASBOMBA1;
7.	Escribir "Ingrese las horas de uso de la Bomba 2";
8.	Leer HORASBOMBA2;
9.	Escribir "Ingrese el estado del tanque: 1 = Requiere agua, 0 = Nivel adecuado";
10.	Leer TANQUE;
11.	Si TANQUE = 1;
12.	Comparar las horas de uso de ambas bombas;
13.	Si HORASBOMBA1 es menor que HORASBOMBA2;
14.	Activar la Bomba 1;
15.	Escribir "Bomba 1 activada por tener menos horas de uso";
16.	Si no;
17.	Si HORASBOMBA2 es menor que HORASBOMBA1;
18.	Activar la Bomba 2;
19.	Escribir "Bomba 2 activada por tener menos horas de uso";
20.	Si no;
21.	Activar la Bomba 1 por prioridad en caso de empate;
22.	Escribir "Ambas bombas tienen las mismas horas. Bomba 1 activada";
23.	Si no;
24.	Escribir "El tanque no requiere agua";
25.	FIN;


## ARCHIVO

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD_03_10/EJERCICIOS_03_10_08.psc)
