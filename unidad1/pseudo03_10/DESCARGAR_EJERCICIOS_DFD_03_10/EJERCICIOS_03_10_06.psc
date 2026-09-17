Algoritmo SEMAFOROS
	
    Definir SENSOR, TIEMPO, TIEMPOESPERA Como Entero
    
    Definir VERDEAVENIDA, AMARILLOAVENIDA, ROJOAVENIDA Como Entero
    Definir VERDECALLE, AMARILLOCALLE, ROJOCALLE Como Entero
    
    VERDEAVENIDA <- 100
    AMARILLOAVENIDA <- 5
    ROJOAVENIDA <- 60
    
    VERDECALLE <- 55
    AMARILLOCALLE <- 5
    ROJOCALLE <- 20
    
    TIEMPOESPERA <- 0
    
    Escribir "AVENIDA PRINCIPAL: VERDE"
    Escribir "CALLE SECUNDARIA: ROJO"
    
    Escribir "Ingrese el estado del sensor de la calle secundaria:"
    Escribir "1 = Vehiculo detectado"
    Escribir "0 = Sin vehiculo"
    Leer SENSOR
    
    Si SENSOR = 0 Entonces
        
        Escribir "No se detectaron vehiculos."
        Escribir "La avenida principal permanece en VERDE."
        Escribir "La calle secundaria permanece en ROJO."
        
    SiNo
        
        Escribir "Vehiculo detectado en la calle secundaria."
        Escribir "Ingrese el tiempo que lleva esperando el vehiculo en segundos:"
        Leer TIEMPOESPERA
        
        Si TIEMPOESPERA > 10 Entonces
            
            Escribir "Avenida principal: AMARILLO"
            
            Para TIEMPO <- 1 Hasta AMARILLOAVENIDA Hacer
                Escribir "Avenida principal: AMARILLO - ", TIEMPO, " segundos"
            FinPara
            
            Escribir "Avenida principal: ROJO"
            Escribir "Calle secundaria: VERDE"
            Escribir "Señal acustica para peatones: ACTIVADA"
            
            Para TIEMPO <- 1 Hasta 55 Hacer
                Escribir "Avenida principal: ROJO - ", TIEMPO, " segundos"
                Escribir "Calle secundaria: VERDE - ", TIEMPO, " segundos"
            FinPara
            
            Escribir "Calle secundaria: AMARILLO"
            
            Para TIEMPO <- 56 Hasta 60 Hacer
                Escribir "Avenida principal: ROJO - ", TIEMPO, " segundos"
                Escribir "Calle secundaria: AMARILLO - ", TIEMPO - 55, " segundos"
            FinPara
            
            Escribir "Avenida principal: VERDE"
            Escribir "Calle secundaria: ROJO"
            Escribir "Señal acustica para peatones: DESACTIVADA"
            
        SiNo
            
            Escribir "El vehiculo no ha superado el tiempo minimo de espera."
            Escribir "Avenida principal: VERDE"
            Escribir "Calle secundaria: ROJO"
            
        FinSi
        
    FinSi
	
FinAlgoritmo