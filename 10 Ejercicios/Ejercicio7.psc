Algoritmo Ejercicio7
	
	Definir lecturaA, lecturaR, tipo, habita, artefactos, consumo Como Entero
	Definir precio, subtotal, total, deuda, recargo, subsidio Como Real
	Definir aviso Como Cadena
	
	recargo <- 0
	subsidio <- 0
	
	Escribir "Ingrese el valor de la lectura anterior de la vivienda:"
	Leer lecturaA
	
	Escribir "Ingrese el valor de la lectura reciente de la vivienda:"
	Leer lecturaR
	
	Si lecturaA > lecturaR Entonces
		Escribir "Valores de lecturas invalidos"
	Sino
		
		consumo <- lecturaR - lecturaA
		
		Escribir "Tipo de vivienda (1 para social, 2 para normal):"
		Leer tipo
		
		Escribir "Numero de habitantes:"
		Leer habita
		
		Escribir "¿Posee artefactos de alto consumo? (1=Si 0=No):"
		Leer artefactos
		
		Escribir "¿Posee alguna deuda anterior? (1=Si 0=No):"
		Leer deuda
		
		Si consumo <= 100 Entonces
			precio <- 0.15
		Sino
			Si consumo <= 300 Entonces
				precio <- 0.25
			Sino
				precio <- 0.35
			FinSi
		FinSi
		
		subtotal <- consumo * precio
		
		Si deuda = 1 Entonces
			recargo <- subtotal * 0.10
		FinSi
		
		Si tipo = 1 Y consumo <= 100 Entonces
			subsidio <- subtotal * 0.15
		FinSi
		
		total <- subtotal + recargo - subsidio
		
		Escribir "------------------------------FACTURA------------------------------"
		Escribir "Consumo total: ", consumo
		Escribir "Costo base: ", subtotal
		Escribir "Subsidio: ", subsidio
		Escribir "Recargo: ", recargo
		Escribir ""
		Escribir "TOTAL: ", total
		Escribir ""
		
		Si consumo / habita > 70 Entonces
			aviso <- "ALERTA: Consumo excesivo"
		Sino
			Si artefactos = 1 Y consumo >= 250 Entonces
				aviso <- "ALERTA: Riesgo de sobrefacturacion"
			FinSi
		FinSi
		
		Escribir aviso
		
	FinSi
	
FinAlgoritmo