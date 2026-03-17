Algoritmo Ejercicio2
	
	Definir promedio, asistencia Como Real
	Definir materias, partici Como Entero
	Definir beca, ingresos Como Cadena
	
	beca <- "no"
	
	Escribir "Ingrese el promedio"
	Leer promedio
	
	Escribir "Ingrese cuantas materias perdio"
	Leer materias
	
	Escribir "Ingrese los ingresos (Bajo/Medio/Alto)"
	Leer ingresos
	
	Escribir "Ingrese porcentaje de asistencia"
	Leer asistencia
	
	Escribir "Ingrese si ha participado o no (0 = No, 1 = Si)"
	Leer partici
	
	Si promedio >= 9 Y asistencia >= 90 Y materias = 0 Entonces
		beca <- "Beca completa"
		
	Sino
		Si promedio >= 8 Y promedio <= 8.99 Y asistencia >= 85 Entonces
			beca <- "Beca parcial"
			
		Sino
			Si partici = 1 Y ingresos = "Bajo" Entonces
				beca <- "Beca completa"
				
				Si materias >= 1 Entonces
					beca <- "Ayuda de material"
				FinSi
				
			Sino
				Si promedio < 7 O materias > 1 O asistencia < 80 Entonces
					beca <- "Sin beneficio"
				FinSi
			FinSi
		FinSi
	FinSi
	
	
	Escribir "------------------BECA---------------------"
	Escribir "Tipo de ayuda: ", beca
	Escribir "Razón académica: ", materias, " materias perdidas"
	Escribir "Razón económica: Ingresos ", ingresos
	
	Si beca = "Beca completa" Entonces
		Escribir "Observación: El estudiante obtuvo una beca completa, por su buen desempeño."
	FinSi
	
	Si beca = "Beca parcial" Entonces
		Escribir "Observación: El estudiante obtuvo una beca parcial, por su desempeño."
	FinSi
	
	Si beca = "Ayuda de material" Entonces
		Escribir "Observación: El estudiante obtuvo un pequeño beneficio."
	FinSi
	
	Si beca = "Sin beneficio" Entonces
		Escribir "Observación: El estudiante no obtuvo ningun tipo de ayuda."
	FinSi
	
FinAlgoritmo