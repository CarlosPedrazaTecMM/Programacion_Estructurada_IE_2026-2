Algoritmo LimitadorDeCorriente
    Definir CORRIENTENOM, CORRIENTENOW, LIMITADORSAITAMA, TIEMPO Como Real
    
    Escribir "Ingrese la corriente nominal del motor en Amperes:"
    Leer CORRIENTENOM
    
    Escribir "Ingrese la corriente actual del motor en Amperes:"
    Leer CORRIENTENOW
    
    TIEMPO <- 5
    
    LIMITADORSAITAMA <- CORRIENTENOM * 5
    
    Escribir "Ingrese el tiempo transcurrido desde el arranque en segundos:"
    Leer TIEMPO
    
    Si TIEMPO <= 5 Entonces
        
        Si CORRIENTENOW > LIMITADORSAITAMA Entonces
            Escribir "Corriente de arranque excedida"
        SiNo
            Escribir "Corriente dentro del límite"
        FinSi
        
    SiNo
        
        Si CORRIENTENOW > CORRIENTENOM Entonces
            Escribir "Protección de sobrecorriente activada"
        SiNo
            Escribir "Motor funcionando dentro de la corriente nominal"
        FinSi
        
    FinSi
FinAlgoritmo