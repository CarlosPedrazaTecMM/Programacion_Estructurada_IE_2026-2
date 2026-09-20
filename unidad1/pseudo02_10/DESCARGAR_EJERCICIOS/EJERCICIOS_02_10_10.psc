Algoritmo MONITOREO_DE_SEÑAL_60_HZ
	
    Definir FRECUENCIA Como Real
    Definir CONTADOR, MONITOREO Como Entero
	
    CONTADOR <- 0
    MONITOREO <- 1
	
    Mientras MONITOREO = 1 Hacer
		
        Escribir "Ingrese la frecuencia de la red en Hz:"
        Leer FRECUENCIA
		
        Si FRECUENCIA >= 59.5 Y FRECUENCIA <= 60.5 Entonces
			
            CONTADOR <- CONTADOR + 1
			
            Escribir "Frecuencia dentro del rango estable"
            Escribir "Lecturas estables consecutivas: ", CONTADOR
			
            Si CONTADOR = 5 Entonces
				
                Escribir "Sistema Estable"
				
            FinSi
			
        SiNo
			
            CONTADOR <- 0
			
            Escribir "Frecuencia fuera del rango estable"
            Escribir "Contador de estabilidad reiniciado a 0"
			
        FinSi
		
    FinMientras
	
FinAlgoritmo