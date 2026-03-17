Algoritmo Ejercicio8
	
	Definir nota1, nota2, nota3, asistencia, promedio Como Real
	Definir proFinal, plagio Como Entero
	Definir estado, obsD, obsR Como Cadena
	
	estado <- "Sin definir"
	obsD <- "Ninguna"
	obsR <- "Ninguna"
	
	Escribir "Ingrese nota 1"
	Leer nota1
	
	Escribir "Ingrese nota 2"
	Leer nota2
	
	Escribir "Ingrese nota 3"
	Leer nota3
	
	Escribir "Ingrese porcentaje de asistencia"
	Leer asistencia
	
	Escribir "¿Entregó el proyecto final? (1=Si, 0=No)"
	Leer proFinal
	
	Escribir "¿Cometió plagio? (1=Si, 0=No)"
	Leer plagio
	
	promedio <- (nota1 + nota2 + nota3) / 3
	
	Si plagio = 1 Entonces
		estado <- "Reprobado automaticamente"
		obsD <- "Comete plagio"
		
	Sino
		Si proFinal = 0 Entonces
			estado <- "Recuperacion"
			obsD <- "No presenta el proyecto"
			
		Sino
			Si asistencia < 70 Entonces
				estado <- "Reprobado"
				obsD <- "Asistencia insuficiente"
				
			Sino
				Si nota1 >= 9 Y nota2 >= 9 Y nota3 >= 9 Y asistencia >= 95 Entonces
					estado <- "Aprobado"
					obsD <- "Muy disciplinado"
					obsR <- "Rendimiento excelente"
					
				Sino
					Si promedio >= 7 Entonces
						estado <- "Aprobado"
					Sino
						Si promedio >= 5 Entonces
							estado <- "Recuperacion"
						Sino
							estado <- "Reprobado"
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
	Si (nota1 = 10 O nota2 = 10 O nota3 = 10) Y (nota1 < 4 O nota2 < 4 O nota3 < 4) Entonces
		obsR <- "Rendimiento irregular"
	FinSi
	
	Escribir "Promedio: ", promedio
	Escribir "Estado: ", estado
	Escribir "Observacion disciplinaria: ", obsD
	Escribir "Observacion de rendimiento: ", obsR
	
FinAlgoritmo