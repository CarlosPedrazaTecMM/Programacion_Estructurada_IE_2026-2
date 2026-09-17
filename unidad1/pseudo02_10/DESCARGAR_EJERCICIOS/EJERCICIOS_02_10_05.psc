Algoritmo LEDS_DE_NAVIDAD
	
    Definir POSICION, PATRON, REPETICION Como Entero
	
    PATRON <- 0
	
    Para REPETICION <- 1 Hasta 2 Hacer
		
        Escribir "Patron ", REPETICION
		
        Para POSICION <- 1 Hasta 8 Hacer
			
            Si PATRON = 0 Entonces
				
                Si POSICION % 2 = 0 Entonces
                    Escribir "LED ", POSICION, ": POSICION PAR - ENCENDIDO"
                SiNo
                    Escribir "LED ", POSICION, ": POSICION IMPAR - APAGADO"
                FinSi
				
            SiNo
				
                Si POSICION % 2 <> 0 Entonces
                    Escribir "LED ", POSICION, ": POSICION IMPAR - ENCENDIDO"
                SiNo
                    Escribir "LED ", POSICION, ": POSICION PAR - APAGADO"
                FinSi
				
            FinSi
			
        FinPara
		
        PATRON <- 1 - PATRON
		
    FinPara
	
FinAlgoritmo