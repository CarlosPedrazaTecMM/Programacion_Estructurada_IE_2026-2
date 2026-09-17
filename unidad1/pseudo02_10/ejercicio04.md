# Ejercicio 4: Clasificador de resistencia por código de colores o rango



## Enunciado

<p align="justify">
Crea el pseudocódigo que reciba el valor medido de una resistencia en Ohms mediante un multímetro y determine a qué rango de tolerancia comercial pertenece (E12/E24) o evalúe si la pieza es "Aceptada", "Rechazada por valor bajo" o "Rechazada por valor alto" respecto a un valor nominal de 1000 ohms  +- 5%
</p>



## Investigación y Supuesto Técnico

<p align="justify">
 El estudiante debe calcular el rango aceptable 950 ohms a 1050 ohms e implementar la estructura de decisión IF - ELSE IF - ELSE.
</p>

<p align="justify">
Para una resistencia nominal de 1000 Ω ±5%, el rango permitido se obtiene calculando el 5% de 1000 Ω, que corresponde a 50 Ω. Por lo tanto, el rango aceptable es de 950 Ω a 1050 Ω. Se utilizará una estructura Si / SiNo para clasificar el valor medido.
</p>

## Objetivo

<p align="justify">
Determinar mediante un algoritmo si una resistencia de 1000 Ω se encuentra dentro de su tolerancia de ±5%, clasificándola como aceptada o rechazada según su valor medido.
</p>


## Redacción

1.	Inicio; 
2.	Definir el valor de la resistencia medida; 
3.	Definir el valor nominal; 
4.	Definir el porcentaje de tolerancia; 
5.	Definir el límite inferior; 
6.	Definir el límite superior; 
7.	Establecer el valor nominal en 1000 ohms; 
8.	Establecer la tolerancia en 5%; 
9.	Calcular el límite inferior en 950 ohms; 
10.	Calcular el límite superior en 1050 ohms; 
11.	Escribir que ingrese el valor medido de la resistencia; 
12.	Leer el valor de la resistencia; 
13.	Si el valor medido es menor que el límite inferior; 
14.	Escribir resistencia rechazada por valor bajo; 
15.	Si no, si el valor medido es mayor que el límite superior; 
16.	Escribir resistencia rechazada por valor alto; 
17.	Si no; 
18.	Escribir resistencia aceptada; 
19.	Fin Si; 
20.	Fin;

## ARCHIVO

**Archivo:** [Descargar](DESCARGAR_EJERCICIOS/EJERCICIOS_02_10_04.psc)
