Algoritmo Ejercicio5
	
	Definir monto, totalCajero Como Entero
	Definir b20, b10, b5, b1 Como Entero
	Definir e20, e10, e5, e1 Como Entero
	
	b20 = 10
	b10 = 10
	b5 = 10
	b1 = 20
	
	totalCajero = b20*20 + b10*10 + b5*5 + b1*1
	
	Escribir "Ingrese monto a retirar"
	Leer monto
	
	Si monto <= 0 Entonces
		Escribir "Monto invalido"
	Sino
		Si monto > totalCajero Entonces
			Escribir "No hay suficiente dinero en el cajero"
		Sino
			
			e20 = monto / 20
			Si e20 > b20 Entonces
				e20 = b20
			FinSi
			
			monto = monto - (e20*20)
			
			e10 = monto / 10
			Si e10 > b10 Entonces
				e10 = b10
			FinSi
			
			monto = monto - (e10*10)
			
			e5 = monto / 5
			Si e5 > b5 Entonces
				e5 = b5
			FinSi
			
			monto = monto - (e5*5)
			
			e1 = monto / 1
			Si e1 > b1 Entonces
				e1 = b1
			FinSi
			
			monto = monto - (e1*1)
			
			Si monto == 0 Entonces
				Escribir "Billetes entregados"
				Escribir "20: ", e20
				Escribir "10: ", e10
				Escribir "5: ", e5
				Escribir "1: ", e1
			Sino
				Escribir "No es posible entregar el monto exacto"
			FinSi
			
		FinSi
	FinSi
	
FinAlgoritmo