# Ejercicio 3: Control de acceso a zona limpia mediante PIN y límite de intentos



## Enunciado

<p align="justify">
Escribe un algoritmo para un teclado de seguridad que solicite un PIN de 4 dígitos. El usuario tiene un máximo de 3 intentos para ingresar la clave correcta. Si acierta, el sistema desbloquea la puerta y finaliza; si agota los 3 intentos sin éxito, activa una sirena de bloqueo.
</p>



## Investigación y Supuesto Técnico

<p align="justify">
 El alumno debe inicializar una variable con un PIN predefinido y controlar los intentos mediante un bucle WHILE (intentos < 3 Y NO acceso_concedido).
</p>

<p align="justify">
Se utilizará un bucle Mientras para controlar los intentos, permitiendo continuar mientras el número de intentos sea menor a 3 y el acceso no haya sido concedido. Se comparará cada PIN ingresado con un PIN predefinido.
</p>

## Objetivo

<p align="justify">
Desarrollar un algoritmo que controle el acceso mediante un PIN de seguridad y limite a tres los intentos disponibles, concediendo el acceso únicamente cuando la clave sea correcta.
</p>


## Redacción

1.	Inicio; 
2.	Definir el PIN correcto; 
3.	Definir el PIN ingresado; 
4.	Definir el contador de intentos; 
5.	Definir el estado del acceso; 
6.	Establecer el PIN correcto; 
7.	Establecer los intentos en cero; 
8.	Establecer el acceso como no concedido; 
9.	Mientras los intentos sean menores a 3 y el acceso no esté concedido; 
10.	Escribir que ingrese el PIN de 4 dígitos; 
11.	Leer el PIN ingresado; 
12.	Aumentar el contador de intentos en uno; 
13.	Si el PIN ingresado es igual al PIN correcto; 
14.	Conceder el acceso; 
15.	Escribir puerta desbloqueada y acceso concedido; 
16.	Si no; 
17.	Escribir PIN incorrecto; 
18.	Fin Si; 
19.	Fin Mientras; 
20.	Si el acceso no fue concedido; 
21.	Activar la sirena de bloqueo; 
22.	Escribir acceso bloqueado por superar los 3 intentos; 
23.	Fin Si; 
24.	Fin;

## ARCHIVO

**Archivo:** [Descargar](DESCARGAR_EJERCICIOS/EJERCICIOS_02_10_03.psc)
