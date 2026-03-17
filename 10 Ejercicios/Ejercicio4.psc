Algoritmo Ejercicio4
	Definir hojas, tipoI, cargo, horario, anillado Como Entero
	Definir precio, subtotal, total, descuento, recargo, anilla Como Real
	descuento <- 0
	recargo <- 0
	anilla <- 0
	Escribir 'Ingrese número de hojas a imprimir:'
	Leer hojas
	Escribir 'Seleccione tipo de impresion (1 para color, 2 para blanco y negro):'
	Leer tipoI
	Escribir 'Ingrese su cargo (1 para estudiante, 2 para docente):'
	Leer cargo
	Escribir 'Ingrese el horario cuando esta imprimiendo (1 para normal, 2 para nocturno):'
	Leer horario
	Escribir 'Ingresa si lleva anillado (1 para si, 2 para no):'
	Leer anillado
	Si hojas<=20 Entonces
		precio <- 0.05
	SiNo
		Si hojas<=100 Entonces
			precio <- 0.04
		SiNo
			precio <- 0.03
		FinSi
	FinSi
	Si tipoI=1 Entonces
		precio <- precio*2
	SiNo
		precio <- precio
	FinSi
	subtotal <- hojas*precio
	Si cargo=2 Entonces
		descuento <- subtotal*0.05
	FinSi
	Si cargo=1 Y hojas>50 Entonces
		descuento <- subtotal*0.08
	FinSi
	Si horario=2 Entonces
		recargo <- subtotal*0.25
	FinSi
	Si anillado=1 Entonces
		anilla <- 1
		Si hojas>75 Entonces
			anilla <- anilla*0.8
		FinSi
	FinSi
	total <- subtotal-descuento+recargo+anilla
	Escribir '------------------------------------FACTURA-----------------------------------'
	Escribir ''
	Escribir 'Total de hojas: ', hojas, '      Valor por hoja: ', precio
	Escribir ''
	Escribir 'Subtotal: ', subtotal
	Escribir 'Descuento: ', descuento*100, '%'
	Escribir 'Recargo: ', recargo
	Escribir 'Valor de anillado: ', anilla
	Escribir ''
	Escribir 'TOTAL: ', total
FinAlgoritmo
