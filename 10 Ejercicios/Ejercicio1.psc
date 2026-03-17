Algoritmo Ejercicio1
	
	Definir credencial, horario como real
	Definir motivo, estado, nivel como Cadena
	Definir faltas, hora Como Entero
	
	Escribir "Responder 1 para si, o 0 para no"
	Escribir "¿El estudiante posee credecnial?"
	Leer credencial
	si (credencial == 0)
		estado = "No ingresa al curso"
		motivo = "No poseé credencial"
		nivel = "Alto"
	Sino 
		Escribir "¿El estudiante pertenece al curso?"
		Leer horario
		si (horario == 0)
			estado = "No ingresa al curso"
			motivo = "No pertenece al curso"
			nivel = "Alto"
			
		Sino 
			Escribir "¿Cuantas faltas poseé?"
			leer faltas
				Si (faltas >= 5)
					estado = "No ingresa al curso"
					motivo = "Poseé más de 5 faltas"
					nivel = "Alto"
				
				Sino 
					si (faltas >= 3)
					estado = "Ingresa al curso pero con advertencia"
					motivo = "Poseé más de 3 faltas"
					nivel = "Moderado"
					
					SiNo
						Escribir "¿Cuantos minutos de atraso tiene?"
						leer hora
						si (hora >= 10)
							estado = "No ingresa al curso"
							motivo = "LLegó muy tarde"
							nivel = "Alto"
						sino 
							si (hora > 0)
								estado = "Ingresa al curso pero con una advertencia"
								motivo = "LLegó tarde"
								nivel = "Moderado"
								
							sino 
								estado = "Ingresa al curso"
								motivo = "LLego puntual"
								nivel = "Bajo"
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
		
	Escribir "---------------ASISTENCIA--------------"
	Escribir "Estado: " estado
	Escribir "Motivo: " motivo
	Escribir "Prioridad: " nivel
FinAlgoritmo
