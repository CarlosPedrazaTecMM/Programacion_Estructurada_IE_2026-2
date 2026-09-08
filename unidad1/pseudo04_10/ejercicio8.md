# Ejercicio 8: Conversión de tiempo de ejecución

## Enunciado

Diseña la lógica que reciba un tiempo transcurrido expresado únicamente en segundos totales y lo convierta a su equivalente en minutos y segundos restantes.

## Investigación y Supuesto Técnico

La conversión utiliza división entera y el operador MOD para separar los segundos totales en minutos completos y segundos restantes.

## Escrito:

1. Inicio;
2. Escribir 'Ingrese la cantidad de segundos totales';
3. Leer SEGUNDOSTOTALES;
4. Guardar la variable SEGUNDOSTOTALES;
5. Asignar MINUTOS ← SEGUNDOS_TOTALES / 60;
6. Escribir SEGUNDOSRESTANTES ← SEGUNDOSTOTALES MOD 60;
7. Escribir 'TIEMPO CONVERTIDO TRANSCURRIDO ES: ' , MINUTOS , ' minutos y , SEGUNDOSRESTANTES , ' segundos';
8. FIN;

## ARCHIVO     

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD/EJERCICIOS04_10_8.dfd)