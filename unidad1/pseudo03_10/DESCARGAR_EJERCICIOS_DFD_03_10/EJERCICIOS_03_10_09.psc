Algoritmo PORTON_ATASCAMIENTO
	
    Definir LIMITECORRIENTE, CORRIENTE Como Real
    Definir CONTADOR Como Entero
	
    CONTADOR <- 0
	
    Escribir "Ingrese el limite seguro de corriente del motor en Amperes:"
    Leer LIMITECORRIENTE
	
    Escribir "Ingrese la corriente actual del motor en Amperes:"
    Leer CORRIENTE
	
    Mientras CONTADOR < 5 Hacer
		
        Si CORRIENTE > LIMITECORRIENTE Entonces
			
            CONTADOR <- CONTADOR + 1
			
            Escribir "Sobrecorriente detectada. Lectura: ", CONTADOR, " de 5"
			
            Si CONTADOR = 5 Entonces
				
                Escribir "ATASCAMIENTO DETECTADO"
                Escribir "Motor DETENIDO"
                Escribir "Motor INVIRTIENDO MARCHA"
				
            SiNo
				
                Escribir "Verificando si la sobrecorriente persiste..."
				
            FinSi
			
        SiNo
			
            CONTADOR <- 0
			
            Escribir "Corriente normal. Motor continúa funcionando."
			
        FinSi
		
        Si CONTADOR < 5 Entonces
            Escribir "Ingrese la corriente actual del motor en Amperes:"
            Leer CORRIENTE
        FinSi
		
    FinMientras
	
FinAlgoritmo