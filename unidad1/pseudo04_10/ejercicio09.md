# Ejercicio 09: Descuento por volumen en componentes

## Enunciado

Crea un pseudocódigo para calcular el total a pagar en una tienda de componentes. Si el cliente compra una cantidad considerable de resistencias, se le aplica un porcentaje de descuento sobre el costo total; de lo contrario, paga el precio regular.

## Investigación y Supuesto Técnico

El algoritmo utiliza una estructura condicional ya que el precio al final del dia dependerá de la cantidad de dinero gastado en la tienda de componentes.

- Supuesto técnico: Si el costo total de la compra es mayor o igual a $1,000, se aplica un 20% de descuento. Si es menor, se mantiene el precio regular.

## Escrito:

1. Inicio;
2. Escribir 'Ingrese el costo total de la compra';
3. Leer variable TOTAL;
4. Guardar la variable TOTAL;
5. Si TOTAL >= 1000;
6. ASIGNAR PRECIOFINAL ← TOTAL - DESCUENTO;
7. ESCRIBIR 'Se aplica un descuento del 20%'
8. ESCRIBIR 'Precio final: $', PRECIO_FINAL;
9. Si No PRECIOFINAL ← TOTAL;
10. ESCRIBIR 'No se aplica descuento'
11. Escribir 'Precio final: $', PRECIO_FINAL;
12. Fin;

## ARCHIVO     

**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD)