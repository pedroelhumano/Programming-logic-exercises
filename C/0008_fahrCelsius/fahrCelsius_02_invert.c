#include <stdio.h>

/*
  Programa para imprimir la tabla de fahrenheit-Celsius
  para fahr = 300, 280... 0
*/

int main()
{
  int fahr;

  printf("Program farh 02 invert\n");
  printf("Fahrenheit\tCelsius\n");

  for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%3d %17.1f\n", fahr, (5.0 / 9.0) * (fahr + 32));
}
