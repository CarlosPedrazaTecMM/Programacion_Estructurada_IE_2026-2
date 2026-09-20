# Ejercicio 6: Control de llenado de depósito con sensor de nivel e interrupción de seguridad



## Enunciado

<p align="justify">
Desarrolla un pseudocódigo para el llenado automatizado de un depósito de químico. La bomba se activa y permanece encendida incrementando el nivel de líquido en cada iteración del bucle. El ciclo debe detenerse de inmediato si el sensor de nivel alto se activa O si el botón de paro de emergencia es presionado.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
El estudiante debe modelar la condición de parada del bucle WHILE combinando dos variables con el operador lógico OR (mientras nivel < maximo Y paro_emergencia == Falso).
</p>

<p align="justify">
Se utilizará un ciclo Mientras para mantener activa la bomba durante el llenado. La condición de operación combinará el nivel del depósito y el estado del paro de emergencia mediante operadores lógicos, de manera que cualquiera de las dos condiciones de seguridad pueda detener el proceso.
</p>

## Objetivo

<p align="justify">
Controlar el llenado de un depósito de forma automatizada, manteniendo la bomba activa hasta alcanzar el nivel máximo o hasta que se active el paro de emergencia.
</p>


## Redacción

1.	Inicio; 
2.	Definir el nivel actual del depósito; 
3.	Definir el nivel máximo permitido; 
4.	Definir el estado del sensor de nivel alto; 
5.	Definir el estado del paro de emergencia; 
6.	Definir el estado de la bomba; 
7.	Establecer el nivel inicial del depósito en 0; 
8.	Establecer el nivel máximo permitido en 100; 
9.	Establecer el sensor de nivel alto como desactivado; 
10.	Establecer el paro de emergencia como no presionado; 
11.	Mientras el nivel sea menor al máximo y el paro de emergencia no esté presionado; 
12.	Encender la bomba; 
13.	Aumentar el nivel del líquido en cada iteración; 
14.	Escribir el nivel actual del depósito; 
15.	Si el nivel alcanza el máximo; 
16.	Activar el sensor de nivel alto; 
17.	Fin Si; 
18.	Preguntar si se presionó el paro de emergencia; 
19.	Leer el estado del paro de emergencia; 
20.	Fin Mientras; 
21.	Apagar la bomba; 
22.	Si el paro de emergencia fue presionado; 
23.	Escribir que el llenado fue detenido por emergencia; 
24.	Si no; 
25.	Escribir que el depósito alcanzó su nivel máximo; 
26.	Fin Si; 
27.	Fin;


## ARCHIVO

**Archivo:** [Descargar]()
