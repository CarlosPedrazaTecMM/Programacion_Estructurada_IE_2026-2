Algoritmo DESGASTE_DE_BOMBAS
	
    Definir HORASBOMBA1, HORASBOMBA2 Como Real
    Definir TANQUE, BOMBA1, BOMBA2 Como Entero
	
    BOMBA1 <- 0
    BOMBA2 <- 0
	
    Escribir "Ingrese las horas de uso de la Bomba 1:"
    Leer HORASBOMBA1
	
    Escribir "Ingrese las horas de uso de la Bomba 2:"
    Leer HORASBOMBA2
	
    Escribir "Ingrese el estado del tanque:"
    Escribir "1 = Requiere agua"
    Escribir "0 = Nivel adecuado"
    Leer TANQUE
	
    Si TANQUE = 1 Entonces
		
        Si HORASBOMBA1 < HORASBOMBA2 Entonces
			
            BOMBA1 <- 1
            BOMBA2 <- 0
			
            Escribir "Bomba 1 ACTIVADA por tener menos horas de uso"
			
        SiNo
			
            Si HORASBOMBA2 < HORASBOMBA1 Entonces
				
                BOMBA1 <- 0
                BOMBA2 <- 1
				
                Escribir "Bomba 2 ACTIVADA por tener menos horas de uso"
				
            SiNo
				
                BOMBA1 <- 1
                BOMBA2 <- 0
				
                Escribir "Ambas bombas tienen las mismas horas."
                Escribir "Bomba 1 ACTIVADA por prioridad de empate"
				
            FinSi
			
        FinSi
		
    SiNo
		
        BOMBA1 <- 0
        BOMBA2 <- 0
		
        Escribir "El tanque no requiere agua."
        Escribir "Ambas bombas permanecen APAGADAS."
		
    FinSi
	
FinAlgoritmo