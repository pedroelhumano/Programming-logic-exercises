Algoritmo segundoGrado
	
	definir a, b, c, x1, x2, discriminante Como Real
	
	Escribir "Ingresa el valor de A"
	leer a
	Escribir "Ingresa el valor de B"
	leer b
	Escribir "Ingresa el valor de C"
	leer c
	
	discriminante = b^2 - (4 * a * c)
	Escribir "El valor del discriminante es: ", discriminante
	
	si discriminante < 0 Entonces
		Escribir "Este ejercicio no tiene solución"
	SiNo
		si discriminante = 0 Entonces
			x1 = ((-1*b) + discriminante) / 2*a
			Escribir "Este ejercicio tiene solo una solución"
			escribir "El resultado es: ", x1
		SiNo
			x1 = ((-1*b) + raiz(discriminante)) / 2*a
			x2 = ((-1*b) - raiz(discriminante)) / 2*a
			Escribir "Este ejercicio tiene dos soluciones"
			escribir "El resultado de x1 es: ", x1
			escribir "El resultado de x2 es: ", x2
		FinSi
	
	FinSi
	
	
FinAlgoritmo
