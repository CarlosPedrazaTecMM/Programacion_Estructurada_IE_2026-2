Algoritmo MUESTREO_DE_SEÑALES_DE_VOLTAJE
	
    Definir VOLTAJE Como Real
    Definir CONTADOR, MUESTRA Como Entero
	
    CONTADOR <- 0
	
    Para MUESTRA <- 1 Hasta 15 Hacer
		
        Escribir "Ingrese el voltaje de la muestra ", MUESTRA, " en Volts:"
        Leer VOLTAJE
		
        Si VOLTAJE > 3.3 Entonces
			
            CONTADOR <- CONTADOR + 1
			
            Escribir "PICO DE VOLTAJE DETECTADO"
            Escribir "Voltaje medido: ", VOLTAJE, " V"
			
        SiNo
			
            Escribir "Voltaje dentro del limite"
            Escribir "Voltaje medido: ", VOLTAJE, " V"
			
        FinSi
		
    FinPara
	
    Escribir "Muestreo finalizado"
    Escribir "Total de picos de voltaje detectados: ", CONTADOR
	
FinAlgoritmo