Algoritmo RESISTENCIAS
	
    Definir RESISTENCIA, NOMINAL, TOLERANCIA, LIMITEINF, LIMITESUP Como Real
	
    NOMINAL <- 1000
    TOLERANCIA <- 0.05
	
    LIMITEINF <- NOMINAL - (NOMINAL * TOLERANCIA)
    LIMITESUP <- NOMINAL + (NOMINAL * TOLERANCIA)
	
    Escribir "Ingrese el valor medido de la resistencia en Ohms:"
    Leer RESISTENCIA
	
    Si RESISTENCIA < LIMITEINF Entonces
		
        Escribir "Resistencia RECHAZADA por valor bajo"
        Escribir "Valor medido: ", RESISTENCIA, " Ohms"
        Escribir "Limite minimo: ", LIMITEINF, " Ohms"
		
    SiNo
		
        Si RESISTENCIA > LIMITESUP Entonces
			
            Escribir "Resistencia RECHAZADA por valor alto"
            Escribir "Valor medido: ", RESISTENCIA, " Ohms"
            Escribir "Limite maximo: ", LIMITESUP, " Ohms"
			
        SiNo
			
            Escribir "Resistencia ACEPTADA"
            Escribir "Valor medido: ", RESISTENCIA, " Ohms"
            Escribir "Rango aceptable: ", LIMITEINF, " a ", LIMITESUP, " Ohms"
			
        FinSi
		
    FinSi
	
FinAlgoritmo