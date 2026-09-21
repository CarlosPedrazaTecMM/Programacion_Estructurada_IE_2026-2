Algoritmo EJERCICIO_24_EXAMEN
	
    Definir N, i, RECHAZADAS Como Entero
    Definir RESISTENCIA, NOMINAL, TOLERANCIA Como Real
    Definir LIMITEINF, LIMITESUP Como Real
    Definir DESVIACION, DESVIACIONPROMEDIO Como Real
    Definir PORCENTAJERECHAZO Como Real
	
    NOMINAL <- 1000
    TOLERANCIA <- 0.05
	
    LIMITEINF <- NOMINAL - (NOMINAL * TOLERANCIA)
    LIMITESUP <- NOMINAL + (NOMINAL * TOLERANCIA)
	
    Escribir "Ingrese la cantidad de piezas del lote:"
    Leer N
	
    RECHAZADAS <- 0
    DESVIACION <- 0
	
    Para i <- 1 Hasta N Hacer
		
        Escribir "Ingrese el valor de la resistencia ", i, " en Ohms:"
        Leer RESISTENCIA
		
        DESVIACION <- DESVIACION + ABS(RESISTENCIA - NOMINAL)
		
        Si RESISTENCIA < LIMITEINF Entonces
			
            Escribir "Resistencia rechazada por valor bajo."
            RECHAZADAS <- RECHAZADAS + 1
			
        SiNo
			
            Si RESISTENCIA > LIMITESUP Entonces
				
                Escribir "Resistencia rechazada por valor alto."
                RECHAZADAS <- RECHAZADAS + 1
				
            SiNo
				
                Escribir "Resistencia aceptada."
				
            FinSi
			
        FinSi
		
    FinPara
	
    PORCENTAJERECHAZO <- (RECHAZADAS / N) * 100
    DESVIACIONPROMEDIO <- DESVIACION / N
	
    Escribir "=============================="
    Escribir "RESULTADOS DEL LOTE"
    Escribir "=============================="
    Escribir "Piezas rechazadas: ", RECHAZADAS
    Escribir "Porcentaje de rechazo: ", PORCENTAJERECHAZO, "%"
    Escribir "Desviacion promedio: ", DESVIACIONPROMEDIO, " Ohms"
	
FinAlgoritmo