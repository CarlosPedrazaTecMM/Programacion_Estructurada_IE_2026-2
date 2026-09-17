# Ejercicio 2: Monitoreo de temperatura en horno con promediado dinámico


## Enunciado

<p align="justify">
 Desarrolla la lógica para un termómetro industrial que lea continuamente lecturas de temperatura mientras el horno permanezca encendido. El sistema debe calcular el promedio de las lecturas realizadas. Si el promedio supera un valor límite, debe emitir una alarma de sobretemperatura y detener la lectura.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
 El estudiante debe estructurar un bucle WHILE (Mientras en PSeInt/DFD) condicionado por una bandera booleana o una lectura de parada, manejando un contador y un acumulador para obtener el promedio en cada iteración.
</p>

<p align="justify">
Se utilizará un ciclo Mientras controlado por una bandera que representa el estado del horno. Se empleará un contador para conocer la cantidad de lecturas y un acumulador para sumar las temperaturas y obtener el promedio dinámicamente.
</p>

## Objetivo

<p align="justify">
Desarrollar un algoritmo que permita monitorear continuamente la temperatura de un horno, calculando su promedio y activando una alarma cuando este supere el límite establecido.
</p>


## Redacción

1.	Inicio; 
2.	Definir el estado del horno; 
3.	Definir el límite de temperatura; 
4.	Definir el contador de lecturas; 
5.	Definir el acumulador de temperaturas; 
6.	Iniciar el contador en cero; 
7.	Iniciar el acumulador en cero; 
8.	Encender el horno; 
9.	Escribir el límite de temperatura permitido; 
10.	Leer LIMITE; 
11.	Mientras el horno permanezca encendido; 
12.	Escribir la temperatura actual del horno; 
13.	Leer TEMPERATURA; 
14.	Aumentar el contador de lecturas; 
15.	Sumar la temperatura al acumulador; 
16.	Calcular el promedio de temperatura; 
17.	Escribir el promedio actual; 
18.	Si el promedio supera el límite; 
19.	Activar la alarma de sobretemperatura; 
20.	Apagar el horno y detener las lecturas; 
21.	Si no; 
22.	Preguntar si el horno continúa encendido; 
23.	Leer HORNO; 
24.	Continuar con las lecturas mientras HORNO sea igual a 1; 
25.	FIN;


## ARCHIVO

**Archivo:** [Descargar](DESCARGAR_EJERCICIOS/EJERCICIOS_02_10_02.psc)
