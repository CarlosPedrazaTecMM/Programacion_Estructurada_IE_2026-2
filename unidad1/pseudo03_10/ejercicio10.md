# Ejercicio 10 : Promedio ponderado para cálculo de calificación con ponderaciones 



## Enunciado

<p align="justify">
Diseña la lógica para un sistema de evaluación que reciba las notas de tres exámenes parciales, dos tareas y un proyecto final, y determine la calificación definitiva considerando que las evaluaciones tienen diferente porcentaje de peso sobre el promedio final.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
El alumno debe proponer una distribución porcentual cuya suma dé el 100% (ej. Exámenes 50%, Proyecto 30%, Tareas 20%), calcular la nota mediante la suma de productos y validar el estado de aprobación mediante un condicional de corte (nota_final >= umbral_aprobatorio).
</p>

<p align="justify">
Se propone una distribución de 50% para los tres exámenes, 30% para el proyecto final y 20% para las dos tareas. Primero se obtiene el promedio de cada grupo y posteriormente se multiplica por su porcentaje correspondiente. La calificación final se considera aprobatoria cuando es mayor o igual a 70.
</p>

## Objetivo

<p align="justify">
Calcular la calificación definitiva de un alumno mediante un promedio ponderado y determinar si cumple con el mínimo establecido para aprobar.
</p>


## Redacción

1.	Inicio;
2.	Definir las calificaciones de los tres exámenes;
3.	Definir las calificaciones de las dos tareas;
4.	Definir la calificación del proyecto;
5.	Escribir "Ingrese la calificación del examen 1";
6.	Leer EXAMEN1;
7.	Escribir "Ingrese la calificación del examen 2";
8.	Leer EXAMEN2;
9.	Escribir "Ingrese la calificación del examen 3";
10.	Leer EXAMEN3;
11.	Escribir "Ingrese la calificación de la tarea 1";
12.	Leer TAREA1;
13.	Escribir "Ingrese la calificación de la tarea 2";
14.	Leer TAREA2;
15.	Escribir "Ingrese la calificación del proyecto final";
16.	Leer PROYECTO;
17.	Calcular el promedio de los tres exámenes;
18.	Calcular el promedio de las dos tareas;
19.	Multiplicar el promedio de exámenes por 50%;
20.	Multiplicar el promedio de tareas por 20%;
21.	Multiplicar el proyecto por 30%;
22.	Sumar los tres resultados para obtener la calificación final;
23.	Escribir la calificación final;
24.	Si la calificación final es mayor o igual a 70;
25.	Escribir "Alumno aprobado";
26.	Si no;
27.	Escribir "Alumno no aprobado";
28.	FIN;


## ARCHIVO

**Archivo:** [Descargar](DESCARGAR_EJERCICIOS_DFD_03_10/EJERCICIOS_03_10_10.psc)
