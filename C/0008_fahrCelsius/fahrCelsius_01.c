#include <stdio.h>

/*
  Programa para imprimir la tabla de fahrenheit-Celsius
  para fahr = 0, 20, ..., 300
*/

int main()
{
  float fahr, celsius;
  int lower = 0;   // Limite inferior de la tabla de temperaturas
  int upper = 300; // Limite superior
  int step = 20;   // Tamaño del incremento

  fahr = lower;

  printf("Program farh 01\n");

  printf("Fahrenheit\tCelsius\n");
  while (fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
