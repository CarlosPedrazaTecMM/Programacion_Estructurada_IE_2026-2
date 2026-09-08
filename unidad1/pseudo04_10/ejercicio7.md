# Ejercicio 7: Sistema automatizado de iluminación exterior

## Enunciado

Escribe un algoritmo que decida si una lámpara pública debe encenderse. La lámpara solo debe activar su foco si el nivel de luz ambiental es bajo y si el sensor de presencia detecta movimiento cerca.

## Investigación y Supuesto Técnico

Sistema basado en el funcionamiento de una compuerta AND, ya que para que su señal se vea activada requiere que ambas de sus señales o condiciones sean activadas o verdaderas "este Y este" 
Para este caso consideraremos que un nivel de activacion de la luminaria es menor a 30 lumenes

## Escrito:

1. Inicio;
2. Escribir 'Del 1 al 100 cuanta luz considera que hay en el ambiente (donde 1 es minimo y 100 es maximo)'
3. Leer variable LUXES
4. ESCRIBIR '¿Usted ha pasado por un el lugar de la luminaria recientemente? 1 para si y 0 para no'
5. Leer PRESCENCIA
6. Asignar ENCENDER ⬅ LUXES < 30
7. Si ENCENDER = VERDADERO,PRESCENCIA = 1
8. Escribir 'Lampara Encendida'
9. Si no Escribir 'Lampara Apagada'
10. FIN;

## ARCHIVO     

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD/EJERCICIOS04_10_7.dfd)