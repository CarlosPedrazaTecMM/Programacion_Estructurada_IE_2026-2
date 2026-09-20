# Ejercicio 9: Sistema de ventilación automatizado con tres velocidades



## Enunciado

<p align="justify">
Crea la lógica para un climatizador que lea el estado de un selector de modo (0: Apagado, 1: Velocidad Baja, 2: Velocidad Media, 3: Velocidad Alta). El algoritmo debe responder activando la salida correspondiente y mostrando el consumo de potencia estimado para el modo elegido.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
El estudiante debe proponer los consumos en Watts para cada nivel de velocidad e implementar la estructura de decisión múltiple adecuada para PSeInt y DFD.
</p>

<p align="justify">
Se utilizará una estructura de decisión múltiple mediante Si / SiNo. Como supuesto técnico, se utilizarán consumos aproximados de 40 W para velocidad baja, 60 W para velocidad media y 80 W para velocidad alta, considerando que una mayor velocidad normalmente requiere mayor potencia.
</p>

## Objetivo

<p align="justify">
Controlar las tres velocidades de un sistema de ventilación y mostrar el consumo de potencia estimado correspondiente al modo seleccionado.
</p>


## Redacción

1.	Inicio; 
2.	Definir el modo seleccionado; 
3.	Definir la potencia de consumo; 
4.	Escribir los modos disponibles; 
5.	Leer el modo seleccionado; 
6.	Si el modo es 0; 
7.	Apagar el ventilador; 
8.	Establecer el consumo en 0 Watts; 
9.	Escribir ventilador apagado; 
10.	Si no, si el modo es 1; 
11.	Activar la velocidad baja; 
12.	Establecer el consumo en 40 Watts; 
13.	Escribir velocidad baja activada; 
14.	Si no, si el modo es 2; 
15.	Activar la velocidad media; 
16.	Establecer el consumo en 60 Watts; 
17.	Escribir velocidad media activada; 
18.	Si no, si el modo es 3; 
19.	Activar la velocidad alta; 
20.	Establecer el consumo en 80 Watts; 
21.	Escribir velocidad alta activada; 
22.	Si no; 
23.	Escribir que el modo seleccionado no es válido; 
24.	Fin Si; 
25.	Escribir el consumo de potencia estimado; 
26.	Fin;

## ARCHIVO

**Archivo:** [Descargar](DESCARGAR_EJERCICIOS/EJERCICIOS_02_10_09.psc)
