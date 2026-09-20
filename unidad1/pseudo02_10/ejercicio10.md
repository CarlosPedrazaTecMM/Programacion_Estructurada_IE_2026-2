# Ejercicio 10: Verificación de estabilidad en sistema de potencia (Loop de control)



## Enunciado

<p align="justify">
Desarrolla un pseudocódigo que permita monitorear la frecuencia de una red de corriente alterna, cuyo valor nominal es de 60 Hz. El programa debe leer continuamente el valor de la frecuencia dentro de un ciclo WHILE. Si la frecuencia se encuentra entre 59.5 Hz y 60.5 Hz, se incrementará un contador de estabilidad. Cuando se obtengan 5 lecturas consecutivas dentro de este rango, el programa deberá mostrar el mensaje "Sistema Estable". Si la frecuencia se encuentra fuera del rango establecido, el contador de estabilidad deberá reiniciarse a 0. El proceso de monitoreo continuará mientras se ejecute el ciclo WHILE.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
El alumno debe implementar la lógica de incremento/reseteo de un contador dentro del ciclo: Si (frecuencia >= 59.5 Y frecuencia <= 60.5) Entonces contador++ Sino contador = 0.
</p>

<p align="justify">
Se utilizará un ciclo Mientras para realizar el monitoreo continuo. El contador aumentará cuando la frecuencia esté entre 59.5 Hz y 60.5 Hz y se reiniciará cuando la lectura se encuentre fuera de este rango.
</p>

## Objetivo

<p align="justify">
Monitorear la estabilidad de la frecuencia de una red eléctrica mediante lecturas consecutivas, identificando un estado estable cuando se obtengan 5 mediciones dentro del rango permitido.
</p>


## Redacción

1.	Inicio; 
2.	Definir la frecuencia medida; 
3.	Definir el contador de estabilidad; 
4.	Definir el estado del monitoreo; 
5.	Establecer el contador en cero; 
6.	Establecer el monitoreo como activo; 
7.	Mientras el monitoreo esté activo; 
8.	Escribir que ingrese la frecuencia de la red; 
9.	Leer la frecuencia; 
10.	Si la frecuencia es mayor o igual a 59.5 Hz y menor o igual a 60.5 Hz; 
11.	Aumentar el contador de estabilidad en uno; 
12.	Escribir que la frecuencia está dentro del rango estable; 
13.	Si no; 
14.	Reiniciar el contador de estabilidad a cero; 
15.	Escribir que la frecuencia está fuera del rango estable; 
16.	Fin Si; 
17.	Si el contador de estabilidad es igual a 5; 
18.	Escribir "Sistema Estable"; 
19.	Fin Si; 
20.	Continuar realizando el monitoreo; 
21.	Fin Mientras; 
22.	Fin;


## ARCHIVO

**Archivo:** [Descargar](DESCARGAR_EJERCICIOS/EJERCICIOS_02_10_10.psc)
