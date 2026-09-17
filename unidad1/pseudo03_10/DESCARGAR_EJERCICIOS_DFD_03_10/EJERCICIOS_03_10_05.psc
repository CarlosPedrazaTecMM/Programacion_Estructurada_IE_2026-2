Algoritmo CONTADOR_DE_PIEZAS
    Definir SENSOR, CONTADOR, LOTAMANO, BANDA, ACTUADOR, PAQUETES Como Entero
    
    CONTADOR <- 0
    PAQUETES <- 0
    LOTAMANO <- 12
    BANDA <- 1
    ACTUADOR <- 0
    
    Mientras BANDA = 1 Hacer
        
        Escribir "Ingrese el estado del sensor optico 1 = Pieza detectada, 0 = Sin pieza:"
        Leer SENSOR
        
        Si SENSOR = 1 Entonces
            CONTADOR <- CONTADOR + 1
            
            Escribir "Piezas contadas: ", CONTADOR
            
            Si CONTADOR = LOTAMANO Entonces
                BANDA <- 0
                
                Escribir "Lote de 12 piezas completado"
                
                ACTUADOR <- 1
                Escribir "Actuador de empaque activado"
                
                PAQUETES <- PAQUETES + 1
                Escribir "Paquetes empaquetados: ", PAQUETES
                
                CONTADOR <- 0
                Escribir "Contador de piezas reiniciado a 0"
                
                ACTUADOR <- 0
                Escribir "Actuador de empaque desactivado"
                
                BANDA <- 1
                Escribir "Banda transportadora reanudada"
            FinSi
        FinSi
        
    FinMientras
FinAlgoritmo