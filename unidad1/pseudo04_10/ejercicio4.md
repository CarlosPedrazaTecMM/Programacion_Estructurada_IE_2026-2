# Ejercicio 4: Control de encendido por paridad de pulso

## Enunciado

Crea la lógica para un contador de pulsos que reciba el número total de activaciones de un botón e indique si el total actual es un número par o impar.

## Investigación y Supuesto Técnico

Un contador de pulsos es un sistema que registra cuántas veces ocurre una determinada señal.

- Primera pulsación → contador = 1
- Segunda pulsación → contador = 2
- Tercera pulsación → contador = 3

## Escrito:

1. Inicio;
2. Escribir '¿Que cantidad de pulsos desea agregar a la señal?';
3. Leer PULSOS;
4. Guardar la variable PULSOS;
5. Si PULSOS MOD (se utiliza el operador MOD para obtener el residuo de una division) 2 = 0;
6. Escribir ´La cantidad de pulsos es PAR´;
7. Si no Escribir 'La cantidad de pulsos es IMPAR';
8. FIN;

## ARCHIVO     

**Archivo DFD:** [Descargar DFD]()