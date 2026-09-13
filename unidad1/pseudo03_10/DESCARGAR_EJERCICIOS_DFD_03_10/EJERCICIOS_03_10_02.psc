Algoritmo Monitoreo_De_Presion
    Definir PRESION, SETPOINT, TOLERANCIA, LIMITEINF, SUPERLIMIT Como Real
    Definir COMPRESOR Como Entero
    
    Escribir "Ingrese la presión actual del sistema:"
    Leer PRESION 
    
    Escribir "Ingrese la presión de accion normal del compresor o SETPOINT:"
    Leer SETPOINT
    
    Escribir "Ingrese la tolerancia permitida de presion:"
    Leer TOLERANCIA
    
    LIMITEINF <- SETPOINT - TOLERANCIA
    SUPERLIMIT <- SETPOINT + TOLERANCIA
    
    COMPRESOR <- 0
    
    Si PRESION < LIMITEINF Entonces
        COMPRESOR <- 1
    SiNo
        Si PRESION > SUPERLIMIT Entonces
            COMPRESOR <- 0
        FinSi
    FinSi
    
    Si COMPRESOR = 1 Entonces
        Escribir "Compresor ENCENDIDO"
    SiNo
        Escribir "Compresor APAGADO"
    FinSi
FinAlgoritmo