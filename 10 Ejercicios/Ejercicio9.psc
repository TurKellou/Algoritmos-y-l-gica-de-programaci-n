Algoritmo Ejercicio9
	
	Definir inicial, comprados, vendidos, devueltos, danados Como Entero
	Definir precioCompra, precioVenta Como Real
	Definir stockFinal Como Entero
	Definir ingresos, egresos, perdidas, utilidad Como Real
	
	Escribir "Stock inicial"
	Leer inicial
	
	Escribir "Cantidad comprada"
	Leer comprados
	
	Escribir "Cantidad vendida"
	Leer vendidos
	
	Escribir "Cantidad devuelta"
	Leer devueltos
	
	Escribir "Cantidad dañada o perdida"
	Leer danados
	
	Escribir "Precio de compra"
	Leer precioCompra
	
	Escribir "Precio de venta"
	Leer precioVenta
	
	stockFinal <- inicial + comprados - vendidos + devueltos - danados
	
	Si stockFinal < 0 Entonces
		Escribir "Error: stock negativo"
	FinSi
	
	ingresos <- (vendidos - devueltos) * precioVenta
	egresos <- comprados * precioCompra
	perdidas <- danados * precioCompra
	
	utilidad <- ingresos - egresos - perdidas
	
	Escribir "Stock final: ", stockFinal
	Escribir "Ingresos por ventas: ", ingresos
	Escribir "Egresos por compras: ", egresos
	Escribir "Perdidas: ", perdidas
	Escribir "Utilidad final: ", utilidad
	
	Si stockFinal < 10 Entonces
		Escribir "Reponer urgentemente"
	FinSi
	
	Si utilidad < 0 Entonces
		Escribir "Dia no rentable"
	FinSi
	
FinAlgoritmo