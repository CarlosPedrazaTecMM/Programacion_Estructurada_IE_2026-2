Algoritmo HVAC
	
    Definir MODO Como Entero
    Definir POTENCIA Como Real
	
    POTENCIA <- 0
	
    Escribir "Seleccione el modo de ventilacion:"
    Escribir "0 = Apagado"
    Escribir "1 = Velocidad Baja"
    Escribir "2 = Velocidad Media"
    Escribir "3 = Velocidad Alta"
    Leer MODO
	
    Si MODO = 0 Entonces
		
        POTENCIA <- 0
		
        Escribir "Ventilador APAGADO"
		
    SiNo
		
        Si MODO = 1 Entonces
			
            POTENCIA <- 40
			
            Escribir "Velocidad BAJA activada"
			
        SiNo
			
            Si MODO = 2 Entonces
				
                POTENCIA <- 60
				
                Escribir "Velocidad MEDIA activada"
				
            SiNo
				
                Si MODO = 3 Entonces
					
                    POTENCIA <- 80
					
                    Escribir "Velocidad ALTA activada"
					
                SiNo
					
                    Escribir "ERROR: Modo de ventilacion no valido"
					
                FinSi
				
            FinSi
			
        FinSi
		
    FinSi
	
    Si MODO >= 0 Y MODO <= 3 Entonces
        Escribir "Consumo de potencia estimado: ", POTENCIA, " Watts"
    FinSi
	
FinAlgoritmo