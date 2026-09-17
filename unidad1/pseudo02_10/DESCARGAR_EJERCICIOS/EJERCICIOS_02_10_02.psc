Algoritmo TEMPERATURAHORNO
	
    Definir HORNO, CONTADOR Como Entero
    Definir TEMPERATURA, LIMITE, ACUMULADOR, PROMEDIO Como Real
	
    CONTADOR <- 0
    ACUMULADOR <- 0
    HORNO <- 1
	
    Escribir "Ingrese el limite de temperatura permitido:"
    Leer LIMITE
	
    Mientras HORNO = 1 Hacer
		
        Escribir "Ingrese la temperatura actual del horno:"
        Leer TEMPERATURA
		
        CONTADOR <- CONTADOR + 1
        ACUMULADOR <- ACUMULADOR + TEMPERATURA
		
        PROMEDIO <- ACUMULADOR / CONTADOR
		
        Escribir "Promedio actual de temperatura: ", PROMEDIO
		
        Si PROMEDIO > LIMITE Entonces
			
            Escribir "ALARMA: Sobretemperatura detectada"
            Escribir "El horno sera detenido"
			
            HORNO <- 0
			
        SiNo
			
            Escribir "¿El horno continua encendido?"
            Escribir "1 = Si"
            Escribir "0 = No"
            Leer HORNO
			
        FinSi
		
    FinMientras
	
    Escribir "Monitoreo de temperatura finalizado"
	
FinAlgoritmo