Algoritmo ejercicio_02
	definir sueldoB, impuesto, liquido como numero
	Escribir "Bienvenido al calculador de impuestos 3000proMax"
	Escribir "Ingrese el sueldo bruto del trabajador"
	leer sueldoB
	si sueldoB <= 0 Entonces
		Escribir "Debes ingresar un monto valido"
	SiNo
		si sueldoB < 10000 Entonces
			escribir "Tu sueldo bruto es: ", sueldoB
			escribir "Tu sueldo es menor a 10000$ por lo que no pagas impuestos."
		SiNo
			si sueldoB >= 10000 y sueldoB <= 30000 Entonces
				impuesto = (sueldoB*10)/100
				liquido = sueldoB-impuesto
				escribir "Tu sueldo bruto es: ", sueldoB
				escribir "Debes pagar en impuestos ",impuesto,"$"
				escribir "Tu sueldo liquido es de: ", liquido,"$"
			SINO
				Si sueldoB > 30000 y sueldoB <= 50000 Entonces
					impuesto = (sueldoB*20)/100
					liquido = sueldoB-impuesto
					escribir "Tu sueldo bruto es: ", sueldoB
					escribir "Debes pagar en impuestos ",impuesto,"$"
					escribir "Tu sueldo liquido es de: ", liquido,"$"
				SINO
					impuesto = (sueldoB*35)/100
					liquido = sueldoB-impuesto
					escribir "Tu sueldo bruto es: ", sueldoB
					escribir "Debes pagar en impuestos ",impuesto,"$"
					escribir "Tu sueldo liquido es de: ", liquido,"$"
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
