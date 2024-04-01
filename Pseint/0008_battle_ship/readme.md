# Batalla Naval en Pseint

Para esta actividad evaluativa deberás diseñar el juego ‘Batalla Naval’ en Pseint, en base al uso de matrices. La definición del juego y su desarrollo lo pueden encontrar en el documento adjunto.

Este algoritmo maneja dos tableros divididos en casillas (10x10), los cuales representaremos en 2 matrices (M y M2). M se utilizará para mostrar al usuario sus jugadas y M2 tendrá las posiciones de los barcos que el jugador debe destruir.

Pasos que debe ejecutar su algoritmo:

1.    Declarar las dos matrices M y M2 de tamaño 10 x10.
2.    Llenar ambas matrices con ceros.
3.    En M2 asignar de manera aleatoria (utilizando azar) tres posiciones y asignar un 2 a cada una. Esto representa la posición que el jugador debe destruir.
4.    Crear un ciclo, con el fin de generar disparos. Usted debe crear las condiciones de término de este ciclo, por ejemplo, un ciclo para con 20 iteraciones, asumiendo que se tienen solo 20 misiles.
5.    Por cada iteración le pedirá al usuario que ingrese la coordenada de disparo.
6.    Según la posición de disparo, comparará si en esa posición hay un 2 (que representa los barcos) o un 0 (que representa mar).
7.    En ambos casos debe mandar un mensaje diciendo al jugador a que le acertó con el disparo.

Fuente: UNIVERSIDAD IPCHILE - MENCIÓN ANALISTA PROGRAMADOR COMPUTACIONAL - ASIGNATURA: FUNDAMENTOS DE PROGRAMACIÓN.