Algoritmo Ejercicio6
	
	Definir estudiantes, dias Como Entero
	Definir hospedajeDia, transporte, alimentacionDia Como Real
	Definir costoTransporte, costoHospedaje, costoAlimentacion Como Real
	Definir total, descuento, totalEstudiante Como Real
	Definir alimentacion, coordinador Como Entero
	
	Escribir "Ingrese numero de estudiantes"
	Leer estudiantes
	
	Escribir "Ingrese numero de dias del viaje"
	Leer dias
	
	Escribir "Costo de hospedaje por dia"
	Leer hospedajeDia
	
	Escribir "Incluye alimentacion? (1=Si 0=No)"
	Leer alimentacion
	
	Escribir "Hay coordinador gratis? (1=Si 0=No)"
	Leer coordinador
	
	Si estudiantes > 20 Entonces
		transporte = 15
	Sino
		transporte = 20
	FinSi
	
	costoTransporte = estudiantes * transporte
	
	Si coordinador == 1 Entonces
		costoTransporte = costoTransporte - transporte
	FinSi
	
	costoHospedaje = estudiantes * hospedajeDia * dias
	
	Si dias > 3 Entonces
		costoHospedaje = costoHospedaje * 0.9
	FinSi
	
	Si alimentacion == 1 Entonces
		alimentacionDia = 10
		costoAlimentacion = estudiantes * alimentacionDia * dias
	Sino
		costoAlimentacion = 0
	FinSi
	
	total = costoTransporte + costoHospedaje + costoAlimentacion
	
	Si total > 1000 Entonces
		descuento = total * 0.1
	Sino
		descuento = 0
	FinSi
	
	total = total - descuento
	
	totalEstudiante = total / estudiantes
	
	Escribir "Costo transporte: ", costoTransporte
	Escribir "Costo hospedaje: ", costoHospedaje
	Escribir "Costo alimentacion: ", costoAlimentacion
	Escribir "Descuento: ", descuento
	Escribir "Total del viaje: ", total
	Escribir "Total por estudiante: ", totalEstudiante
	
	Si totalEstudiante > 200 Entonces
		Escribir "Viaje no recomendable"
	Sino
		Escribir "Viaje recomendable"
	FinSi
	
FinAlgoritmo

