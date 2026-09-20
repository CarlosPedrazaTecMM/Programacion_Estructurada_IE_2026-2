# Ejercicio 7: Sistema de facturación con descuento escalonado por volumen



## Enunciado

<p align="justify">
Diseña un algoritmo para una distribuidora de componentes electrónicos. Si un cliente compra menos de 10 piezas, paga precio de lista; de 10 a 49 piezas, obtiene un 5% de descuento; de 50 a 99 piezas, un 10%; y para 100 piezas o más, un 15% de descuento sobre el total.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
El alumno debe proponer un precio unitario base, estructurar la selección de rangos mediante condicionales IF-ELSE IF encadenados y calcular el total neto.
</p>

<p align="justify">
Se utilizará un precio unitario base de $100 pesos por pieza. Mediante condicionales Si / SiNo se determinará el porcentaje de descuento correspondiente: 0%, 5%, 10% o 15%. Finalmente, se calculará el total neto después del descuento.
</p>

## Objetivo

<p align="justify">
Calcular automáticamente el importe de una compra de componentes electrónicos aplicando el descuento correspondiente según la cantidad de piezas adquiridas.
</p>


## Redacción

1.	Inicio; 
2.	Definir la cantidad de piezas; 
3.	Definir el precio unitario; 
4.	Definir el subtotal; 
5.	Definir el porcentaje de descuento; 
6.	Definir el descuento; 
7.	Definir el total neto; 
8.	Establecer el precio unitario en 100 pesos; 
9.	Escribir que ingrese la cantidad de piezas a comprar; 
10.	Leer la cantidad de piezas; 
11.	Calcular el subtotal multiplicando las piezas por el precio unitario; 
12.	Si la cantidad es menor a 10 piezas; 
13.	Establecer el descuento en 0%; 
14.	Si no, si la cantidad está entre 10 y 49 piezas; 
15.	Establecer el descuento en 5%; 
16.	Si no, si la cantidad está entre 50 y 99 piezas; 
17.	Establecer el descuento en 10%; 
18.	Si no; 
19.	Establecer el descuento en 15%; 
20.	Calcular el importe del descuento; 
21.	Calcular el total neto restando el descuento al subtotal; 
22.	Escribir la cantidad de piezas; 
23.	Escribir el subtotal; 
24.	Escribir el porcentaje de descuento aplicado; 
25.	Escribir el total neto a pagar; 
26.	Fin;

## ARCHIVO

**Archivo:** [Descargar](DESCARGAR_EJERCICIOS/EJERCICIOS_02_10_07.psc)
