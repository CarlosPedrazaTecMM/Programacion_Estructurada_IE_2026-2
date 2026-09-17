Algoritmo Promedio_Ponderado
	
    Definir EXAMEN1, EXAMEN2, EXAMEN3 Como Real
    Definir TAREA1, TAREA2, PROYECTO Como Real
    Definir PROMEXAMENES, PROMTAREAS, CALIFICACIONFINAL Como Real
	
    Escribir "Ingrese las calificaciones del 1 al 10."
	
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
	
    PROMEXAMENES <- (EXAMEN1 + EXAMEN2 + EXAMEN3) / 3
    PROMTAREAS <- (TAREA1 + TAREA2) / 2
	
    CALIFICACIONFINAL <- (PROMEXAMENES * 0.50) + (PROMTAREAS * 0.20) + (PROYECTO * 0.30)
	
    Escribir "Promedio de examenes: ", PROMEXAMENES
    Escribir "Promedio de tareas: ", PROMTAREAS
    Escribir "Calificacion final: ", CALIFICACIONFINAL
	
    Si CALIFICACIONFINAL >= 7 Entonces
        Escribir "Alumno APROBADO"
    SiNo
        Escribir "Alumno NO APROBADO"
    FinSi
	
FinAlgoritmo