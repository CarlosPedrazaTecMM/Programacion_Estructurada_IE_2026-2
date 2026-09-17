# Ejercicio 9 : Detección de atascamiento en un motor mediante sensor de corriente



## Enunciado

<p align="justify">
Crea la lógica para un motor de portón eléctrico. Si durante el movimiento la corriente consumida excede un umbral seguro debido a un obstáculo mecánico durante más de medio segundo, el motor debe detenerse e invertir su marcha de inmediato.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
El estudiante debe implementar una lógica que combine la condición de corriente sobre el límite con un contador de tiempo o iteraciones, diferenciando entre un pico transitorio de corriente y un atascamiento permanente.
</p>

<p align="justify">
Para diferenciar un pico transitorio de un atascamiento, se establece un umbral de corriente y se verifica cuánto tiempo permanece la corriente por encima de dicho límite. Para este ejercicio se utilizarán lecturas cada 0.1 segundos; cinco lecturas consecutivas representan 0.5 segundos.
</p>

## Objetivo

<p align="justify">
Detectar un posible atascamiento del motor mediante la supervisión de su corriente y, cuando la sobrecorriente permanezca durante más de medio segundo, detener e invertir la marcha del motor.
</p>


## Redacción

1.	Inicio;
2.	Definir el límite seguro de corriente;
3.	Definir la corriente actual del motor;
4.	Definir el contador de tiempo;
5.	Establecer el contador en 0;
6.	Escribir "Ingrese el límite seguro de corriente";
7.	Leer LIMITECORRIENTE;
8.	Escribir "Ingrese la corriente actual del motor";
9.	Leer CORRIENTE;
10.	Mientras el contador sea menor a 5;
11.	Si la corriente es mayor al límite seguro;
12.	Aumentar el contador en una lectura;
13.	Escribir "Sobrecorriente detectada";
14.	Si no;
15.	Reiniciar el contador a 0;
16.	Escribir "Pico transitorio detectado, motor continúa funcionando";
17.	Volver a leer la corriente del motor;
18.	Si el contador llega a 5;
19.	Escribir "Atascamiento detectado";
20.	Detener el motor;
21.	Invertir la marcha del motor;
22.	Escribir "Motor detenido invirtiendo marcha";
23.	FIN;


## ARCHIVO

**Archivo para descargar:** [Descargar](DESCARGAR_EJERCICIOS_DFD_03_10/EJERCICIOS_03_10_09.psc)
