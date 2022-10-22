Algoritmo BattleShipPseint
	
	//Variables
	Dimension Mjugador[10,10]
	Dimension MComputador[10,10]
	definir aux1, aux2,vidaJ, vidaPc, balas Como Entero
	
	//vidas
	vidaPc=3
	VidaJ=3
	
	//Se inicializa la matriz
	para i=1 hasta 10
		Mjugador[i,i] = 0
		MComputador[i,i] = 0
	FinPara
	
	Escribir "Bienvenido a BattleShipPseint!"
	
	//Indica la posicion inicial de las naves
	Escribir "Tienes 3 naves, indica sus posiciones"
	para i=1 hasta 3
		Escribir sin saltar "Escribe la posicion Y de la nave ", i," del 1 al 10"
		leer aux1
		Escribir sin saltar "Escribe la posicion X de la nave ", i," del 1 al 10"
		leer aux2
		Mjugador[aux1,aux2] = 1
	FinPara
	
	//Se rellena las naves enemigas
	para i=1 hasta 3
		aux1 = aleatorio(1,10)
		aux2 = aleatorio(1,10)
		MComputador[aux1,aux2] = 2
	FinPara
	
	
	
	//Comienza el juego de verdad
	Mientras vidaJ > 0 y vidaPc > 0 hacer
		balas = 5
		
		//Jugador dispara primero
		Mientras balas > 0 hacer
			
			//Se muestra pantalla inicial
			Escribir "Jugador                 Computadora"
			para i=1 hasta 10
				//Mostrando cuadro jugdor
				para j=1 hasta 10
					escribir sin saltar Mjugador[i,j]," "
				FinPara
				Escribir Sin Saltar "    "
				//Mostrando cuadro compu
				para e=1 hasta 10
					escribir sin saltar MComputador[i,e]," "
					//escribir sin saltar "S "
				FinPara
				escribir ""
			FinPara
			
			Escribir "Te quedan ", balas " balas. Indica la posicion Y del siguiente disparo"
			leer aux1
			Escribir "Indica la posicion X"
			leer aux2
			si MComputador[aux1,aux2] = 2
				MComputador[aux1,aux2] = 0
				vidaPc = vidaPc -1
			SiNo
				MComputador[aux1,aux2] = 0
			FinSi
			balas = balas - 1
			Limpiar Pantalla
		FinMientras
		
		balas = 30
		
		//Turno de maquina de dispara 5 veces
		Mientras balas > 0 hacer
			aux1 = aleatorio(1,10)
			aux2 = aleatorio(1,10)
			si Mjugador[aux1,aux2] = 1
				Mjugador[aux1,aux2] = 0
				vidaJ = vidaJ -1
			SiNo
				Mjugador[aux1,aux2] = 0
			FinSi
			balas = balas - 1
		FinMientras
		
	FinMientras
	
	//FIN
	escribir "Termino la partida!"
	si vidaJ > 0 Entonces
		escribir "Ganar jugador!"
	SiNo
		Escribir "Gana la computadora!"
	FinSi

FinAlgoritmo