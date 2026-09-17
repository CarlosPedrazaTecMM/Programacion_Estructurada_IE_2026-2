Algoritmo SEMAFORONORMAL
	
    Definir BOTON, CUENTA Como Entero
	
    Escribir "Presione el boton para solicitar el cruce:"
    Escribir "1 = Presionado"
    Escribir "0 = Sin presionar"
    Leer BOTON
	
    Si BOTON = 1 Entonces
		
        Para CUENTA <- 10 Hasta 1 Con Paso -1 Hacer
			
            Si CUENTA >= 4 Entonces
                Escribir "Cuenta regresiva: ", CUENTA, " - LED VERDE"
            SiNo
                Escribir "Cuenta regresiva: ", CUENTA, " - LED INTERMITENTE"
            FinSi
			
        FinPara
		
    SiNo
		
        Escribir "Esperando solicitud de cruce"
		
    FinSi
	
FinAlgoritmo