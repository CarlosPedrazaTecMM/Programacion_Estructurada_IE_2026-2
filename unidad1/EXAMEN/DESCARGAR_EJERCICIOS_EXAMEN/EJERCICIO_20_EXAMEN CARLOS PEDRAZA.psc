Algoritmo EJERCICIO_20_EXAMEN
	
    Definir PONDEXAMEN, PONDTAREA, PONDPROYECTO Como Real
    Definir SUMAPONDERACIONES Como Real
    Definir EXAMEN1, EXAMEN2, EXAMEN3 Como Real
    Definir TAREA1, TAREA2, PROYECTO Como Real
    Definir PROMEXAMEN, PROMTAREA, CALIFICACIONFINAL Como Real
	
	Escribir "BIENVENIDO A LA CALCULADORA DE CALIFICACIONES, FAVOR DE ESCRIBIR EL VALOR DE LAS CALIFICACIONES (PONDERACIONES) QUE SU RUBRICA REQUIERA"
    Escribir "EJEMPLO: EXAMENES VALEN 50% ESCRIBIR 0.5, TAREAS VALEN 35% ESCRIBIR 0.35 Y PROYECTO VALE 15% ESCRIBIR 0.15 "
	Escribir "Ingrese la ponderacion de los examenes:"
    Leer PONDEXAMEN
	
    Escribir "Ingrese la ponderacion de las tareas:"
    Leer PONDTAREA
	
    Escribir "Ingrese la ponderacion del proyecto:"
    Leer PONDPROYECTO
	
    SUMAPONDERACIONES <- PONDEXAMEN + PONDTAREA + PONDPROYECTO
	
    Mientras SUMAPONDERACIONES <> 1.0 Hacer
		
        Escribir "ERROR: Las ponderaciones deben sumar exactamente 1.0 EJEMPLO: EXAMENES VALEN 50% ESCRIBIR 0.5, TAREAS VALEN 35% ESCRIBIR 0.35 Y PROYECTO VALE 15%& ESCRIBIR 0.15"
        Escribir "Ingrese nuevamente las ponderaciones:"
		
        Escribir "Ponderacion de los examenes:"
        Leer PONDEXAMEN
		
        Escribir "Ponderacion de las tareas:"
        Leer PONDTAREA
		
        Escribir "Ponderacion del proyecto:"
        Leer PONDPROYECTO
		
        SUMAPONDERACIONES <- PONDEXAMEN + PONDTAREA + PONDPROYECTO
		
    FinMientras
	
    Escribir "Ponderaciones validas."
	
    Escribir "Ingrese la calificacion del examen 1:"
    Leer EXAMEN1
	
    Escribir "Ingrese la calificacion del examen 2:"
    Leer EXAMEN2
	
    Escribir "Ingrese la calificacion del examen 3:"
    Leer EXAMEN3
	
    Escribir "Ingrese la calificacion de la tarea 1:"
    Leer TAREA1
	
    Escribir "Ingrese la calificacion de la tarea 2:"
    Leer TAREA2
	
    Escribir "Ingrese la calificacion del proyecto final:"
    Leer PROYECTO
	
    PROMEXAMEN <- (EXAMEN1 + EXAMEN2 + EXAMEN3) / 3
    PROMTAREA <- (TAREA1 + TAREA2) / 2
	
    CALIFICACIONFINAL <- (PROMEXAMEN * PONDEXAMEN) + (PROMTAREA * PONDTAREA) + (PROYECTO * PONDPROYECTO)
	
    Escribir "Calificacion final: ", CALIFICACIONFINAL
	
    Si CALIFICACIONFINAL >= 70 Entonces
        Escribir "Alumno aprobado"
    SiNo
        Escribir "Alumno no aprobado"
    FinSi
	
FinAlgoritmo