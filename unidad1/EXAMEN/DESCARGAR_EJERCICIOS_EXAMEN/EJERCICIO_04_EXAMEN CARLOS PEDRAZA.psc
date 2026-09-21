Algoritmo EJERCICIO_04_EXAMEN
	
    Definir PULSOS, i Como Entero
	
    Escribir "¿Que cantidad de pulsos desea simular?"
    Leer PULSOS
	
    Para i <- 1 Hasta PULSOS Hacer
		
        Si i MOD 2 = 1 Entonces
            Escribir "Pulso ", i, ": Señal ON"
        SiNo
            Escribir "Pulso ", i, ": Señal OFF"
        FinSi
		
    FinPara
	
FinAlgoritmo