# Ejercicio 3: Validación de nivel lógico TTL

## Enunciado

Escribe un pseudocódigo que reciba un valor de voltaje de entrada y valide si corresponde a un estado lógico ALTO (HIGH) válido dentro de la tecnología TTL.

## Investigación y Supuesto Técnico
En tecnología TTL, una entrada se considera un estado lógico ALTO (HIGH) válido cuando el voltaje de entrada cumple aproximadamente:

- LOW (0): de 0 V a 0.8 V
- Zona indeterminada: mayor de 0.8 V y menor de 2.0 V
- HIGH (1): de 2.0 V a 5.0 V

## Escrito:

1. Inicio;
2. Escribir 'Ingrese el valor de voltaje de Entrada';
3. Leer VOLTAJE;
4. Guardar la variable VOLTAJE;
5. Si voltaje >= 2 Y voltaje <=5;
6. Escribir 'Voltaje en HIGH':
7. Si no Escribir 'Voltaje en LOW':
8. FIN;

## ARCHIVO     

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD/EJERCICIOS04_10_3.dfd)