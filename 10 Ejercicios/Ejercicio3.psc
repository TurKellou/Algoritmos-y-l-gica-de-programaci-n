Algoritmo Ejercicio3
	
	Definir lado1, lado2, lado3, altura, angulo, area Como Real
	Definir tipo, tipoA Como Cadena
	
	Escribir "Ingrese valor de la base o lado 1:"
	Leer lado1
	
	Escribir "Ingrese valor del lado 2:"
	Leer lado2
	
	Escribir "Ingrese valor del lado 3:"
	Leer lado3
	
	Escribir "Ingrese valor de la altura:"
	Leer altura
	
	Si (lado1 + lado2 > lado3) Y (lado1 + lado3 > lado2) Y (lado2 + lado3 > lado1) Entonces
		Escribir "El triangulo es valido"
	Sino
		Escribir "El triangulo es invalido"
	FinSi
	
	Si (lado1 = lado2) Y (lado2 = lado3) Entonces
		tipo <- "Equilatero"
	Sino
		Si (lado1 = lado2) O (lado2 = lado3) O (lado1 = lado3) Entonces
			tipo <- "Isosceles"
		Sino
			tipo <- "Escaleno"
		FinSi
	FinSi
	
	Escribir "Ingrese el valor del angulo principal:"
	Leer angulo
	
	Si angulo < 90 Entonces
		tipoA <- "Acutangulo"
	Sino
		Si angulo = 90 Entonces
			tipoA <- "Rectangulo"
		Sino
			tipoA <- "Obtusangulo"
		FinSi
	FinSi
	
	area <- (lado1 * altura) / 2
	
	Si altura > lado1 Entonces
		Escribir "Datos invalidos: No es valida la altura"
	FinSi
	
	Escribir "-------------------TRIANGULO----------------------"
	Escribir "Tipo de triangulo: ", tipo
	Escribir "Tipo de triangulo por angulo: ", tipoA
	Escribir "Area: ", area
	
FinAlgoritmo
