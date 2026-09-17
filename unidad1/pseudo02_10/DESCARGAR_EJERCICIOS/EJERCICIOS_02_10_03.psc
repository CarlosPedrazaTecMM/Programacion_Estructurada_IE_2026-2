Algoritmo Control_De_Accesos
	
    Definir PINCORRECTO, PININGRESADO, INTENTOS Como Entero
    Definir ACCESO Como Logico
	
    PINCORRECTO <- 1234
    INTENTOS <- 0
    ACCESO <- Falso
	
    Mientras INTENTOS < 3 Y ACCESO = Falso Hacer
		
        Escribir "Ingrese el PIN de 4 digitos: (es 1234)"
        Leer PININGRESADO
		
        INTENTOS <- INTENTOS + 1
		
        Si PININGRESADO = PINCORRECTO Entonces
			
            ACCESO <- Verdadero
			
            Escribir "PIN CORRECTO"
            Escribir "Puerta DESBLOQUEADA"
            Escribir "Acceso CONCEDIDO"
			
        SiNo
			
            Escribir "PIN INCORRECTO"
            Escribir "Intento ", INTENTOS, " de 3"
			
        FinSi
		
    FinMientras
	
    Si ACCESO = Falso Entonces
		
        Escribir "Se agotaron los 3 intentos permitidos"
        Escribir "SISTEMA DE BLOQUEO ACTIVADO"
        Escribir "Acceso BLOQUEADO"
		
    FinSi
	
FinAlgoritmo