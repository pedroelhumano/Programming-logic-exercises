Algoritmo tresNumeros
	
	dimension vector[03]
	definir alto,bajo como entero
	
	para i = 1 Hasta 3
		
		Escribir "Ingresa el numerro ", i
		leer vector[i]
		
	FinPara
	
	alto = vector[1]
	bajo = vector [1]
	
	para i=1 hasta 3 Hacer
		si vector[i] > alto Entonces
			alto = vector[i]
		FinSi
		
		si vector[i] < bajo Entonces
			bajo = vector[i]
		FinSi
		
	FinPara
	
	si vector[1]=vector[2] y vector[1]=vector[3] Entonces
		escribir "Los tres numeros ingresados son iguales"
	SiNo	
		escribir "El numero mas alto es: ", alto
		escribir "El numero mas bajo es: ", bajo
	FinSi
	
FinAlgoritmo