# Ejercicio 01: Control de velocidad con rampa de aceleración

## Enunciado
 Diseña un pseudocódigo para el control de un motor que reciba una velocidad actual y una velocidad objetivo. El programa debe incrementar o decrementar progresivamente la velocidad en pasos fijos por unidad de tiempo hasta alcanzar la velocidad deseada, evitando cambios bruscos.


## Investigación y Supuesto Técnico
El control de velocidad mediante rampa de aceleración permite modificar gradualmente la velocidad de un motor en lugar de realizar un cambio inmediato. Para este ejercicio se establece un incremento fijo de 5 RPM por ciclo, utilizado tanto para acelerar como para desacelerar. La velocidad actual puede encontrarse por encima o por debajo de la velocidad objetivo, por lo que el programa determinará automáticamente si debe incrementar o disminuir la velocidad.


## Objetivo
Desarrollar un algoritmo iterativo que controle progresivamente la velocidad de un motor hasta alcanzar el valor objetivo, aplicando incrementos o decrementos constantes para representar una rampa de aceleración y desaceleración.

## Redacción
1. Escrito:
2. Inicio;
3. Escribir "ingresa la velocidad actual de las rpms";
4. Leer velocidad actual;
5. Escribir "favor de ingresar la velocidad a la que se desea llegar";
6. Leer velocida actual;
7. Asignar DELTA = 5;
8. Mientras velocidad actual sea diferente de velocidad deseada;
9. Si velocidad actual es menor que velocidad deseada;
10. Sumar 5 RPM a velocidad actual;
11. Si no;
12. Restar 5 RPM a velocidad actual;
13. Escribir 'Velocidad actual: ' y mostrar el valor de velocidad actual en RPM;
14. Regresar al paso donde se comprueba si VELAHOR es diferente de velocidad deseada;
15. Cuando velocidad actual sea igual a velocidad deseada, escribir 'Velocidad objetivo alcanzada';
16. FIN;

## ARCHIVO
**Archivo DFD:** [Descargar DFD](DESCARGAR_EJERCICIOS_DFD_03_10/EJERCICIOS_03_10_01.psc)
