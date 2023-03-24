#include <stdio.h>

/*
  Programa para imprimir la tabla de fahrenheit-Celsius
  para fahr = 0, 20, ..., 300
*/

int main()
{
  int fahr;

  printf("Program farh 02\n");
  printf("Fahrenheit\tCelsius\n");

  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
