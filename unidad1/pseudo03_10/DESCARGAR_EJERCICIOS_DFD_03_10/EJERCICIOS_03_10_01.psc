Algoritmo Control_De_Velocidad
	Definir VELAHOR, VELLEGAR, DELTRIANGULO Como Entero
	
	Escribir "Ingrese la velocidad actual del motor en RPM´s:"
	Leer VELAHOR
	
	Escribir "Ingrese la velocidad a la que desea llegar en RPM´s:"
	Leer VELLEGAR
	
	DELTRIANGULO <- 5
	
	Mientras VELAHOR <> VELLEGAR Hacer
		
		Si VELAHOR < VELLEGAR Entonces
			VELAHOR <- VELAHOR + DELTRIANGULO
		SiNo
			VELAHOR <- VELAHOR - DELTRIANGULO
		FinSi
		
		Escribir "Velocidad actual: ", VELAHOR, " RPM"
		
	FinMientras
	
	Escribir "Velocidad objetivo alcanzada: ", VELAHOR, " RPM"
FinAlgoritmo