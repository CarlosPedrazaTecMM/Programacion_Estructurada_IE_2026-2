# Ejercicio 1: Semáforo peatonal con contador regresivo



## Enunciado

<p align="justify">
 Diseña un pseudocódigo para un semáforo peatonal. Cuando se presione el botón de cruce, el sistema debe mostrar un conteo regresivo en pantalla del 10 al 1 usando un bucle. Durante los números del 10 al 4, el estado del LED peatonal debe mantenerse en verde; del 3 al 1, debe cambiar a un estado intermitente o de advertencia.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
 El alumno debe definir la estructura del bucle decreciente FOR (o Para en PSeInt) y aplicar la condición IF para alternar los mensajes de estado del LED según la cuenta actual.
</p>

<p align="justify">
Se utilizará un ciclo Para con decremento para realizar el conteo del 10 al 1. Dentro del ciclo se empleará una condición Si para determinar el estado del LED: verde de 10 a 4 e intermitente de 3 a 1.
</p>

## Objetivo

<p align="justify">
Desarrollar un algoritmo que controle un semáforo peatonal mediante un contador regresivo, modificando el estado del LED de acuerdo con el tiempo restante.
</p>


## Redacción

1.	Inicio; 
2.	Definir el estado del botón; 
3.	Escribir "Presione el botón para solicitar el cruce"; 
4.	Leer BOTON; 
5.	Si BOTON = 1; 
6.	Iniciar un conteo desde 10 hasta 1; 
7.	Si el conteo es mayor o igual a 4; 
8.	Mantener el LED peatonal en verde; 
9.	Escribir el número del conteo y el estado verde; 
10.	Si no; 
11.	Cambiar el LED peatonal a estado intermitente; 
12.	Escribir el número del conteo y el estado de advertencia; 
13.	Continuar hasta llegar al número 1; 
14.	Si no se presionó el botón; 
15.	Escribir "Esperando solicitud de cruce"; 
16.	FIN;


## ARCHIVO

**Archivo:** [Descargar](DESCARGAR_EJERCICIOS/EJERCICIOS_02_10_01.psc)
