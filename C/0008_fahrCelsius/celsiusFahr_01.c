#include <stdio.h>

/*
  Programa para imprimir la tabla de Celsius-fahrenheit
  para cel = 0, 20, ..., 300
*/

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
  int cels;

  printf("Program celsius 02\n");
  printf("Celsius\tFahrenheit\n");

  for (cels = LOWER; cels <= UPPER; cels = cels + STEP)
    printf("%3d %12.1f\n", cels, (cels * 9.0 / 5.0) + 32.0);
}
