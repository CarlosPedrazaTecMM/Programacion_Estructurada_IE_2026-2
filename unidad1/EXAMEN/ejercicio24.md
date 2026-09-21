# Ejercicio 24: Clasificador de tolerancia en resistencias

# Enunciado Base (Contexto Técnico)

<p align="justify">
Determinar si el valor medido de una resistencia cae en el rango 1000 ohms con una tolerancia del 5%
</p>

# Propuesta de Mejora e Implementación (Nivel Examen)
## Análisis Estadístico de Lote: 

<p align="justify">
Procesar una serie de $N$ piezas en un ciclo Para, calculando el porcentaje total de rechazo y la desviación respecto al valor nominal.
</p>

## Redacción

01.	Inicio;
02.	Definir la cantidad de piezas del lote;
03.	Definir el valor de la resistencia medida;
04.	Definir el valor nominal;
05.	Definir el porcentaje de tolerancia;
06.	Definir el límite inferior;
07.	Definir el límite superior;
08.	Definir el contador de piezas rechazadas;
09.	Definir el acumulador de desviación;
10.	Definir el porcentaje de rechazo;
11.	Definir la desviación promedio;
12.	Establecer el valor nominal en 1000 ohms;
13.	Establecer la tolerancia en 5%;
14.	Calcular el límite inferior en 950 ohms;
15.	Calcular el límite superior en 1050 ohms;
16.	Solicitar la cantidad de piezas del lote;
17.	Leer N;
18.	Inicializar el contador de piezas rechazadas en cero;
19.	Inicializar el acumulador de desviación en cero;
20.	Repetir el proceso para cada pieza mediante un ciclo Para;
21.	Solicitar el valor medido de la resistencia;
22.	Leer RESISTENCIA;
23.	Calcular la desviación absoluta respecto al valor nominal;
24.	Acumular la desviación de la pieza;
25.	Si el valor medido es menor que el límite inferior;
26.	Escribir "Resistencia rechazada por valor bajo";
27.	Incrementar el contador de piezas rechazadas;
28.	Si no, si el valor medido es mayor que el límite superior;
29.	Escribir "Resistencia rechazada por valor alto";
30.	Incrementar el contador de piezas rechazadas;
31.	Si no;
32.	Escribir "Resistencia aceptada";
33.	Fin Si;
34.	Fin del ciclo Para;
35.	Calcular el porcentaje total de rechazo;
36.	Calcular la desviación absoluta promedio;
37.	Escribir el porcentaje total de rechazo;
38.	Escribir la desviación promedio respecto al valor nominal;
39.	Fin;

- # [DESCARGAR PARA PSEINT](DESCARGAR_EJERCICIOS_EXAMEN/EJERCICIO_24_EXAMEN%20CARLOS%20PEDRAZA.psc)

- # [DESCARGAR DFD](DESCARGAR_EJERCICIOS_DFD_EXAMEN/EJERCICIO24EXAMENDFDCARLOSPEDRAZA.dfd)