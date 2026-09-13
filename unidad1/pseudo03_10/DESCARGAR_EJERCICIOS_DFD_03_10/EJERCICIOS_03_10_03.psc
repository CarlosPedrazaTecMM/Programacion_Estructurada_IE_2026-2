Algoritmo Deteccion_de_Rebote
    Definir PULSADOR, CONTADOR, ULTRAENTE Como Entero
    
    CONTADOR <- 0
    ULTRAENTE <- 3
    
    Escribir "Ingrese el estado del pulsador 1 = Presionado, 0 = No presionado:"
    Leer PULSADOR
    
    Mientras CONTADOR < ULTRAENTE Hacer
        Si PULSADOR = 1 Entonces
            CONTADOR <- CONTADOR + 1
            
            Si CONTADOR = ULTRAENTE Entonces
                Escribir "Se alcanzo el umbral de ", ULTRAENTE, " pulsaciones consecutivas. Pulsacion real confirmada."
            SiNo
                Escribir "Continuar leyendo el estado del pulsador"
            FinSi
            
        SiNo
            CONTADOR <- 0
            Escribir "Rebote o interrupcion detectada, reiniciando contador"
        FinSi
        
        Si CONTADOR < ULTRAENTE Entonces
            Escribir "Ingrese el estado del pulsador 1 = Presionado, 0 = No presionado:"
            Leer PULSADOR
        FinSi
    FinMientras
FinAlgoritmo