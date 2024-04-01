#include <stdio.h>

/*
  Programa para imprimir la tabla de fahrenheit-Celsius
  para fahr = 0, 20, ..., 300
*/

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
  int fahr;

  printf("Program farh 02\n");
  printf("Fahrenheit\tCelsius\n");

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %17.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
