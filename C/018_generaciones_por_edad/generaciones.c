/* * * * * * * * * * * * * * * * * * * * * * */
/* Creado por Pedro Yanez para la asignatura */
/*       TALLER DE PROGRAMACIÓN EN C.        */
/* * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdbool.h> // biblioteca standard para manejar booleanos
#include <string.h>  // biblioteca standard para manejar strings

// Definimos simbólicamente el año actual.
#define ANIO_ACTUAL 2023

// Declaración de funciones.
unsigned short calcularAnioNacimiento();
void calcularGeneracion(unsigned short anioNacimiento);

// TODO: El cuerpo de estas funciones debe estar en otro archivo.
// Función para calcular año de nacimiento.
unsigned short calcularAnioNacimiento()
{
  // Nota: Usamos unsigned ya que la edad y el año de nacimiento serán siempre positivos.
  // Nota2: el tipo short es más que suficiente para almacenar estos valores ya que permite hasta 65.535
  unsigned short edad;
  unsigned short anioNacimiento;
  bool valorValido = false;

  while (!valorValido) // Mientras el valor no sea válido, repetir el proceso
  {
    printf("Ingresa tu edad: ");
    scanf("%hu", &edad); // Usamos %hu para leer un short sin signo

    if (edad > 0 && edad <= 150) // Validar que la edad sea razonable
    {
      anioNacimiento = ANIO_ACTUAL - edad;
      valorValido = true;
    }
    else
    {
      // Excepción para manejar edades imposibles.
      printf("Edad invalida. Ingresa una edad valida.\n");
    }
  }

  return anioNacimiento;
}

// Función para calcular la generación
void calcularGeneracion(unsigned short anioNacimiento)
{
  char generacion[31]; // se define estáticamente la variable generacion

  switch (anioNacimiento)
  {
  // el operador "..." se usa para definir rangos en los case
  case 1994 ... ANIO_ACTUAL:
    // la función strcpy() se usa para copiar cadena de caracteres en la sintaxis strcpy(destino, origen) parte de la libreria <string.h>
    strcpy(generacion, "Z y Alpha");
    break;
  case 1981 ... 1993:
    strcpy(generacion, "Los millennials");
    break;
  case 1969 ... 1980:
    strcpy(generacion, "Generación X");
    break;
  case 1949 ... 1968:
    strcpy(generacion, "Baby boomers");
    break;
  case 1930 ... 1948:
    strcpy(generacion, "Generación niños de posguerra");
    break;
  default:
    // caso error para numeros fuera de los rangos
    strcpy(generacion, "FUERA DE RANGO");
    break;
  }
  printf("Tu generacion es: %s\n", generacion);
}

// Función principal del programa
int main()
{
  unsigned short anioNacimiento;
  printf("Bienvenido.\n");
  printf("Calcularemos a que generacion perteneces.\n");
  anioNacimiento = calcularAnioNacimiento();
  calcularGeneracion(anioNacimiento);

  return 0;
}
