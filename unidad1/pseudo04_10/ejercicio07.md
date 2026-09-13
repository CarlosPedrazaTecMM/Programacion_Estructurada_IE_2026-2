# Ejercicio 07: Sistema automatizado de iluminación exterior

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
6. Si luxes es menor a 30
7. Si Prescencia es detectada 
8. Escribir 'NIVEL DE LUZ AMBIENTAL ADECUADO PARA ENCENDIDO Y PRESCENCIA DETECTADA, LUZ ENCENDIDA'
9. Si prescencia no es detectada pero luxes son menores a 30 escribir 'LUZ AMBIENTE BAJA, ADECUADO PARA ENCENDIDO, FALTA DE PRESCENCIA NO PERMITE ENCENDIDO, LUZ APAGADA'
10. si luxes no son menores a 30 
11. pero prescencia si es detectada
12. escribir 'PRESCENCIA DETECTADA, SIN EMBARGO EL NIVEL DE LUZ EN EL AMBIENTE ES EL OPTIMO PARA VER, LUZ APAGADA'
13. si luxes son mayores a 30 y prescencia no es detectada entonces
14. Escribir 'NIVEL DE LUZ ADECUADO Y NO HAY PRESCENCIA DETECTADA, LUZ APAGADA'
10. FIN;

## ARCHIVO     

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD/EJERCICIOS04_10_7.dfd)