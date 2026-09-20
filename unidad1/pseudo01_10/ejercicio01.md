# Ejercicio 1 : Registro de Lecturas de Voltaje DC

## Subtema
<p align="justify">

Llenado y Recorrido de Cectores (Dimension)

</p>

## Propósito:
<p align="justify">

Almacenar una serie de mediciones continuas de tensión eléctrica en un vector y calcular su promedio y valor pico.

</p>

## Competencia:
<p align="justify">

Manipula vectores unidimensionales para el almacenamiento estructurado y análisis estadístico básico de señales eléctricas.

</p>

## Problema Contextualizado:
<p align="justify">

Un estudiante de primer semestre utiliza un multímetro digital para medir la tensión de salida de un circuito regulador de voltaje 5 V en 5 momentos distintos. Requiere guardar los datos en un vector para obtener el voltaje promedio y detectar la máxima sobretensión registrada.

</p>

## Enunciado:
<p align="justify">

Declara un vector de tamaño 5. Solicita al usuario los 5 valores de voltaje (en Voltios). Mediante un bucle Para, calcula el voltaje promedio y determina el voltaje máximo capturado.

</p>

## Entradas:
<p align="justify">

voltajes[5] (Reales).

</p>

## Procesos:
<p align="justify">

- Acumulacion: suma <- suma + voltajes[i]
- Búsqueda de máximo sobre el arreglo: Si voltajes[i] > vMax Entonces vMax <- voltajes[i]

</p>

## Salidas:
<p align="justify">

Promedio de voltaje y voltaje pico máximo.

</p>

## Restricciones:
<p align="justify">

Los voltajes deben ser valores no negativos.

</p>

---

# Secuencia de trabajo

## 1. Comprender el problema:
<p align="justify">

Identificar la dimensión del vector, el tipo de dato de sus elementos y las condiciones de contorno.

</p>

<p align="justify">

El programa debe almacenar las lecturas de voltaje obtenidas en 5 momentos diferentes mediante un vector.

- Dimensión del vector: 5 posiciones.
- Tipo de dato: Real.
- Índices: Del 1 al 5 en PSeInt.
- Condición: El voltaje no puede ser negativo.
- Procesos principales: Acumular las lecturas y determinar el valor máximo.
- Resultados: Promedio de voltaje y voltaje máximo registrado.

</p>

##  Elaborar tabla Entrada–Proceso–Salida (IPO):
<p align="justify">

 Mapear índices, vectores de entrada, vectores de resultado y variables auxiliares.

</p>

<p align="justify">

| Entrada | Proceso | Salida |
|---|---|---|
| `voltajes[1..5]` | Leer y almacenar las 5 mediciones de voltaje | `promedio` |
| `voltajes[i]` | Acumular las lecturas mediante `suma <- suma + voltajes[i]` | `vMax` |
| | Comparar `voltajes[i] > vMax` y actualizar el valor máximo | Promedio de voltaje |
| | Calcular `promedio <- suma / 5` | Voltaje máximo registrado |

| Variable | Tipo | Función |
|---|---|---|
| `voltajes[5]` | Real | Almacenar las 5 mediciones de voltaje |
| `i` | Entero | Recorrer las posiciones del vector |
| `suma` | Real | Acumular las mediciones de voltaje |
| `promedio` | Real | Almacenar el promedio de las lecturas |
| `vMax` | Real | Almacenar el mayor voltaje registrado |

</p>

##  Redactar algoritmo en lenguaje natural:
<p align="justify">

Describir la manipulación de los índices del arreglo de 1 a $N$.

</p>

<p align="justify">

01. Iniciar el programa;
02. Declarar un vector de 5 posiciones para almacenar los voltajes;
03. Declarar las variables necesarias para el recorrido y los cálculos;
04. Inicializar la suma de voltajes en cero;
05. Inicializar el voltaje máximo en cero;
06. Recorrer el vector desde la posición 1 hasta la posición 5;
07. Solicitar al usuario el voltaje correspondiente a la posición actual;
08. Leer y almacenar el voltaje en el vector;
09. Verificar que el voltaje ingresado no sea negativo;
10. Si el voltaje es negativo, solicitar nuevamente el valor;
11. Acumular el voltaje ingresado en la variable suma;
12. Comparar el voltaje actual con el voltaje máximo almacenado;
13. Si el voltaje actual es mayor, actualizar el valor de vMax;
14. Continuar hasta completar las 5 mediciones;
15. Calcular el promedio dividiendo la suma entre 5;
16. Mostrar el promedio de voltaje obtenido;
17. Mostrar el voltaje máximo registrado;
18. Finalizar el programa;

</p>

##  Construir pseudocódigo en PSeInt:
<p align="justify">

Declarar arreglos usando la sintaxis Dimension y manipularlos mediante bucles Para.

</p>

<p align="justify">



</p>

##  Ejecutar y depurar

<p align="justify">
Verificar mediante la herramienta de inspección de variables el estado de cada celda 
del arreglo.

</p>

<p align="justify">



</p>

##  Elaborar diagrama de flujo en DFD:
<p align="justify">

Representar la lectura, llenado y procesamiento iterativo de vectores.

</p>

<p align="justify">



</p>

##  Realizar pruebas
<p align="justify">

Diseñar casos de prueba considerando elementos en los límites del arreglo (índices inicial y final).

</p>

<p align="justify">



</p>

##  Documentar resultados:
<p align="justify">

Generar las evidencias en archivos Markdown dentro de la carpeta correspondiente.

</p>

<p align="justify">



</p>

##  Subir evidencias a GitHub
<p align="justify">

Confirmar y sincronizar cambios mediante GitHub Desktop.

</p>

<p align="justify">



</p>


---

<p align="justify">

- # [DESCARGAR](DESCARGAR_EJERCICIOS/EJERCICIOS_01_10_01.psc)

</p>
