Algoritmo DESCUENTO_DE_NOMINA_NOSIERTO_AHNO_SICIERTO
	
    Definir PIEZAS Como Entero
    Definir PRECIOUNITARIO, SUBTOTAL, PORCENTAJEDESCUENTO, DESCUENTO, TOTALNETO Como Real
	
    PRECIOUNITARIO <- 100
	
    Escribir "Ingrese la cantidad de piezas a comprar:"
    Leer PIEZAS
	
    SUBTOTAL <- PIEZAS * PRECIOUNITARIO
	
    Si PIEZAS < 10 Entonces
		
        PORCENTAJEDESCUENTO <- 0
		
    SiNo
		
        Si PIEZAS >= 10 Y PIEZAS <= 49 Entonces
			
            PORCENTAJEDESCUENTO <- 0.05
			
        SiNo
			
            Si PIEZAS >= 50 Y PIEZAS <= 99 Entonces
				
                PORCENTAJEDESCUENTO <- 0.10
				
            SiNo
				
                PORCENTAJEDESCUENTO <- 0.15
				
            FinSi
			
        FinSi
		
    FinSi
	
    DESCUENTO <- SUBTOTAL * PORCENTAJEDESCUENTO
    TOTALNETO <- SUBTOTAL - DESCUENTO
	
    Escribir "Cantidad de piezas: ", PIEZAS
    Escribir "Precio unitario: $", PRECIOUNITARIO
    Escribir "Subtotal: $", SUBTOTAL
    Escribir "Descuento aplicado: ", PORCENTAJEDESCUENTO * 100, "%"
    Escribir "Total de descuento: $", DESCUENTO
    Escribir "Total neto a pagar: $", TOTALNETO
	
FinAlgoritmo