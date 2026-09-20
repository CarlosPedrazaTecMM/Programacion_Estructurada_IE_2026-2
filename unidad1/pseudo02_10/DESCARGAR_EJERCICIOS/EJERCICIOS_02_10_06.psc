Algoritmo BOMBA_YUCATECA
	
    Definir NIVEL, NIVELMAXIMO Como Entero
    Definir SENSORNIVEL, PAROEMERGENCIA, BOMBA Como Entero
	
    NIVEL <- 0
    NIVELMAXIMO <- 100
	
    SENSORNIVEL <- 0
    PAROEMERGENCIA <- 0
    BOMBA <- 0
	
    Mientras NIVEL < NIVELMAXIMO Y PAROEMERGENCIA = 0 Hacer
		
        BOMBA <- 1
		
        Escribir "Bomba ENCENDIDA"
		
        NIVEL <- NIVEL + 10
		
        Escribir "Nivel actual del deposito: ", NIVEL, "%"
		
        Si NIVEL >= NIVELMAXIMO Entonces
			
            NIVEL <- NIVELMAXIMO
            SENSORNIVEL <- 1
			
            Escribir "Sensor de nivel alto ACTIVADO"
			
        FinSi
		
        Si SENSORNIVEL = 1 Entonces
            Escribir "Nivel maximo alcanzado"
        SiNo
            Escribir "Ingrese el estado del paro de emergencia:"
            Escribir "1 = Presionado"
            Escribir "0 = No presionado"
            Leer PAROEMERGENCIA
        FinSi
		
    FinMientras
	
    BOMBA <- 0
	
    Escribir "Bomba APAGADA"
	
    Si PAROEMERGENCIA = 1 Entonces
		
        Escribir "PARO DE EMERGENCIA ACTIVADO"
        Escribir "Llenado detenido por seguridad"
		
    SiNo
		
        Escribir "Deposito lleno"
        Escribir "Llenado completado correctamente"
		
    FinSi
	
FinAlgoritmo