Algoritmo REGISTROVOLTAGE
	
    Definir i Como Entero
    Definir suma, promedio, vMax Como Real
	
    Dimension voltajes[5]
	
    suma <- 0
    vMax <- 0
	
    Para i <- 1 Hasta 5 Hacer
		
        Escribir "Ingrese el voltaje de la muestra ", i, " en Volts:"
        Leer voltajes[i]
		
        Mientras voltajes[i] < 0 Hacer
            Escribir "ERROR: El voltaje no puede ser negativo."
            Escribir "Ingrese nuevamente el voltaje:"
            Leer voltajes[i]
        FinMientras
		
        suma <- suma + voltajes[i]
		
        Si voltajes[i] > vMax Entonces
            vMax <- voltajes[i]
        FinSi
		
    FinPara
	
    promedio <- suma / 5
	
    Escribir "=============================="
    Escribir "RESULTADOS DEL MUESTREO"
    Escribir "=============================="
    Escribir "Promedio de voltaje: ", promedio, " V"
    Escribir "Voltaje maximo registrado: ", vMax, " V"
	
FinAlgoritmo