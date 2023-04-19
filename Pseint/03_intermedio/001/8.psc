Algoritmo promedioClase
	
	definir aux Como Entero
	Escribir "Ingresa la cantidad de estudiantes"
	leer aux
	Dimension estudiantes[aux], EPE1[aux], EPE2[aux], EPE3[aux], EVA1[aux], EVA2[aux], EVA3[aux], total[aux]
	definir promedio como real
	
	promedio = 0
	
	para i = 1 hasta aux
		Escribir "Estudiante numero ", i
		Escribir sin saltar "Escribe la nota del EPE1"
		leer EPE1[i]
		EPE1[i] = EPE1[i] * 0.1
		Escribir sin saltar "Escribe la nota del EPE2"
		leer EPE2[i]
		EPE2[i] = EPE2[i] * 0.2
		Escribir sin saltar "Escribe la nota del EPE3"
		leer EPE3[i]
		EPE3[i] = EPE3[i] * 0.3
		Escribir sin saltar "Escribe la nota del EVA1"
		leer EVA1[i]
		EVA1[i] = EVA1[i] * 0.1
		Escribir sin saltar "Escribe la nota del EVA2"
		leer EVA2[i]
		EVA2[i] = EVA2[i] * 0.1
		Escribir sin saltar "Escribe la nota del EVA3"
		leer EVA3[i]
		EVA3[i] = EVA3[i] * 0.2
		total[i] = EPE1[i] + EPE2[i] + EPE3[i] + EVA1[i] + EVA2[i] + EVA3[i]
		Borrar Pantalla
	FinPara
	
	para j = 1 hasta aux
		promedio = promedio + total[j]
	FinPara
	promedio = promedio / aux
	escribir "El promedio de la clase fue ", promedio

FinAlgoritmo
