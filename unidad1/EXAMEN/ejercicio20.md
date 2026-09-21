# Ejercicio 20 :Promedio ponderado de calificaciones

# Enunciado Base (Contexto Técnico)

<p align="justify">
Calcular la nota final considerando distintos porcentajes para exámenes, tareas y proyecto.
</p>

# Propuesta de Mejora e Implementación (Nivel Examen)
## Validacion de Ponderaciones

<p align="justify">
Validación de Ponderaciones: Forzar mediante un ciclo que la suma de los porcentajes ingresados por el usuario sea estrictamente igual a $100\%$ ($1.0$) antes de capturar las notas.
</p>

## Redacción

01.	Inicio;
02.	Definir las ponderaciones de exámenes, tareas y proyecto;
03.	Definir las calificaciones de los tres exámenes;
04.	Definir las calificaciones de las dos tareas;
05.	Definir la calificación del proyecto;
06.	Solicitar la ponderación de los exámenes;
07.	Leer PONDEXAMEN;
08.	Solicitar la ponderación de las tareas;
09.	Leer PONDTAREA;
10.	Solicitar la ponderación del proyecto;
11.	Leer PONDPROYECTO;
12.	Calcular SUMAPONDERACIONES;
13.	Mientras SUMAPONDERACIONES sea diferente de 1.0;
14.	Escribir "ERROR: Las ponderaciones deben sumar exactamente 1.0";
15.	Solicitar nuevamente la ponderación de los exámenes;
16.	Leer PONDEXAMEN;
17.	Solicitar nuevamente la ponderación de las tareas;
18.	Leer PONDTAREA;
19.	Solicitar nuevamente la ponderación del proyecto;
20.	Leer PONDPROYECTO;
21.	Calcular nuevamente SUMAPONDERACIONES;
22.	FinMientras;
23.	Escribir "Ponderaciones válidas";
24.	Escribir "Ingrese la calificación del examen 1";
25.	Leer EXAMEN1;
26.	Escribir "Ingrese la calificación del examen 2";
27.	Leer EXAMEN2;
28.	Escribir "Ingrese la calificación del examen 3";
29.	Leer EXAMEN3;
30.	Escribir "Ingrese la calificación de la tarea 1";
31.	Leer TAREA1;
32.	Escribir "Ingrese la calificación de la tarea 2";
33.	Leer TAREA2;
34.	Escribir "Ingrese la calificación del proyecto final";
35.	Leer PROYECTO;
36.	Calcular el promedio de los tres exámenes;
37.	Calcular el promedio de las dos tareas;
38.	Multiplicar el promedio de exámenes por PONDEXAMEN;
39.	Multiplicar el promedio de tareas por PONDTAREA;
40.	Multiplicar el proyecto por PONDPROYECTO;
41.	Sumar los tres resultados para obtener la calificación final;
42.	Escribir la calificación final;
43.	Si la calificación final es mayor o igual a 70;
44.	Escribir "Alumno aprobado";
45.	Si no;
46.	Escribir "Alumno no aprobado";
47.	Fin;

- # [DESCARGAR PARA PSEINT](DESCARGAR_EJERCICIOS_EXAMEN/EJERCICIO_20_EXAMEN%20CARLOS%20PEDRAZA.psc)

- # [DESCARGAR DFD](DESCARGAR_EJERCICIOS_DFD_EXAMEN/EJERCICIO20EXAMENDFDCARLOSPEDRAZA.dfd)