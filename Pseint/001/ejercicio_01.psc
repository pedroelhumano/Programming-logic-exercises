Algoritmo ejercicio_01
	definir money, interes, opt, aux como numero 
	aux = 1
	escribir "Bienvenido"
	Mientras aux=1 hacer
		escribir "Seleccione una opción"
		escribir "1 = Depositar"
		escribir "2 = Salir"
		leer opt
		si opt=1 Entonces
			escribir "Ingrese el monto"
			leer money
			interes = (money*4)/100
			Limpiar Pantalla
			escribir "Usted ingreso ",money,"$"
			escribir "Su interes en un mes tendra por monto: ",interes,"$"
			escribir "¿Desea hacer otra operación?"
			Escribir "1 = Si"
			Escribir "2 = No"
			leer opt
			si opt=1 Entonces
				Limpiar Pantalla
			sino
				si opt=2 entonces
					aux = 2
				SiNo
					Escribir "Selecciona una opción valida"
					Limpiar Pantalla
				FinSi
			FinSi
		SiNo
			si opt=2 entonces
			aux = 2
			SiNo
				Limpiar Pantalla
				Escribir "Selecciona una opción valida"
			FinSi
		FinSi
	FinMientras
	escribir "Hasta pronto!"
FinAlgoritmo
