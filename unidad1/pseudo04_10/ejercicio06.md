# Ejercicio 6: Cálculo de consumo de potencia eléctrica

## Enunciado

Elabora un pseudocódigo que reciba el voltaje y la corriente consumida por un dispositivo electrónico, calcule la potencia en Watts y despliegue el resultado formateado junto a su unidad de medida.

## Investigación y Supuesto Técnico

La potencia eléctrica representa la cantidad de energía eléctrica que consume un dispositivo por unidad de tiempo. Para un circuito de corriente continua (DC), se calcula mediante la relación:

- P = V × I

Donde:

- P = Potencia en Watts (W)
- V = Voltaje en Volts (V)
- I = Corriente en Amperes (A)

## Escrito:

1. Inicio;
2. Escribir 'Calculadora de Consumo de Watts';
3. Escribir 'Introduzca el Voltaje al que trabaja su dispositivo';
4. Leer variable VOLTAJE;
5. Guardar variable Voltaje;
6. Escribir 'Introduzca la corriente que consume su dispositivo';
7. Leer variable CORRIENTE;
8. Guardar variable CORRIENTE;
9. Asignar POTENCIA ← VOLTAJE * CORRIENTE;
10. Escribir 'Esta es la potencia a la que trabaja su dispositivo ', POTENCIA , 'w';
11. FIN;

## ARCHIVO     

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD/EJERCICIOS04_10_6.dfd)