# Ejercicio 05: Sistema de alarma con múltiples sensores

## Enunciado

Diseña un algoritmo para una alarma de seguridad que reciba el estado de dos sensores de ventana (activado/desactivado) y genere una alerta si al menos uno de ellos detecta una apertura.

## Investigación y Supuesto Técnico

Para este sistema se estará utilizando la lógica de una compuerta OR cuya salida se activa cuando al menos una de sus entradas se enduentra en estado activo (en este caso solo tenemos dos entradas) donde cada entrada representa el valor de un sensor

La compuerta lógica OR genera una salida activa cuando al menos una de sus entradas se encuentra activa.

| Sensor 1 | Sensor 2 | Alarma |
|----------|----------|--------|
| 0        | 0        | 0      |
| 0        | 1        | 1      |
| 1        | 0        | 1      |
| 1        | 1        | 1      |

## Escrito:

1. Inicio;
2. Escribir 'Ingrese el estado del sensor de la ventana numero 1 (1 para ACTIVADO o 0 para DESACTIVADO)';
3. Leer SENSOR1;
4. Guardar la variable SENSOR1;
5. Escribir 'Ingrese el estado del sensor de la ventana numero 2 (1 para ACTIVADO o 0 para DESACTIVADO)';
6. Leer SENSOR2;
7. Guardar la variable SENSOR2;
8. Si SENSOR1 = 1 o SENSOR2=1;
9. Escribir 'SE HA DETECTADO UNA ANOMALIA'
10. Si No Escribir 'No se han detectado anomalias'
11. FIN;

## ARCHIVO     

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD/EJERCICIOS04_10_5.dfd)