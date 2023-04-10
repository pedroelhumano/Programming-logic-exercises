#include <stdio.h>

/*
Creado por Pedro Yanez para la asigntura
TALLER DE PROGRAMACIÓN EN C.
*/

/*
Se inicializan las funciones ya que se
asume que el cuerpo de estas se encuentra en otro archivo.
*/

// Declaración de funciones
void pedirPalabra(char palabra[]);
int pedirNumero();
void pedirFecha(int dia[], int mes[], int anio[]);
void mostrarInfo(char palabra[], int numero, int dia, int mes, int anio);

/*
Cuerpo de las distintas funciones
que deben estar en otros archivos
*/

// Función para pedir y guardar la palabra
void pedirPalabra(char palabra[])
{
  printf("Introduce una palabra de maximo 10 letras: ");
  scanf("%s", palabra);
}

// Función para pedir y guardar el número
int pedirNumero()
{
  int numero;
  // Manejamos excepcion para obligar al usuario a ingresar un numero entre 0 y 99
  do
  {
    printf("Introduce un numero del 0 al 99: ");
    scanf("%d", &numero);
  } while (numero < 0 || numero > 99);
  return numero;
}

// Función para pedir y guardar la fecha
void pedirFecha(int dia[], int mes[], int anio[])
{
  printf("Introduce tu fecha de nacimiento separada en dia, mes y anio en formato numerico:\n");

  // Con este ciclo, mantenemos el día entre 0 y 31
  do
  {
    printf("Dia (1-31): ");
    scanf("%d", &dia[0]);
  } while (dia[0] < 1 || dia[0] > 31);

  // Con este ciclo, mantenemos el mes entre 1 y 12
  do
  {
    printf("Mes (1-12): ");
    scanf("%d", &mes[0]);
  } while (mes[0] < 1 || mes[0] > 12);
  printf("Anio: ");
  scanf("%d", &anio[0]);
}

// Función para mostrar la información
void mostrarInfo(char palabra[], int numero, int dia, int mes, int anio)
{
  printf("\nLa palabra introducida es: %s\n", palabra);
  printf("El numero introducido es: %d\n", numero);
  printf("La fecha de nacimiento es: %02d/%02d/%04d\n", dia, mes, anio); // 04 para formato 0001
}

// Funcion principal del programa
int main()
{
  char palabra[11]; // Es recomendable 11 por el caracter nulo '\0'
  int numero, dia[1], mes[1], anio[1];

  pedirPalabra(palabra);
  numero = pedirNumero();
  pedirFecha(dia, mes, anio);
  mostrarInfo(palabra, numero, dia[0], mes[0], anio[0]);

  return 0;
}
