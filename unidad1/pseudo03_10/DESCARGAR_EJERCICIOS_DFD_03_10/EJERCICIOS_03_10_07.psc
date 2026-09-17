Algoritmo Autodiagnostico_Sensor
    Definir CORRIENTE Como Real
    
    Escribir "Ingrese la corriente entregada por el sensor en mA:"
    Leer CORRIENTE
    
    Si CORRIENTE = 0 Entonces
        Escribir "ERROR: Linea abierta o cable cortado"
        
    SiNo
        Si CORRIENTE > 20 Entonces
            Escribir "ERROR: Posible cortocircuito o sobre-rango"
            
        SiNo
            Si CORRIENTE >= 4 Y CORRIENTE <= 20 Entonces
                Escribir "Sensor funcionando dentro del rango normal"
                
            SiNo
                Si CORRIENTE > 0 Y CORRIENTE < 4 Entonces
                    Escribir "ADVERTENCIA: Corriente por debajo de 4 mA. Posible falla del sensor, cableado defectuoso o pérdida de señal."
                FinSi
            FinSi
        FinSi
    FinSi
    
FinAlgoritmo