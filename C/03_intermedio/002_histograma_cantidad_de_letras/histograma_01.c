#include <stdio.h>

#define ASCII_SIZE 128 // Número de caracteres ASCII

int main()
{
  int c;
  int frequencies[ASCII_SIZE] = {0};
  int i, j;

  while ((c = getchar()) != EOF)
  {
    ++frequencies[c];
  }

  printf("Histograma de las frecuencias de los caracteres:\n");
  for (i = 0; i < ASCII_SIZE; ++i)
  {
    if (frequencies[i] > 0)
    {
      printf("%3d (%c): ", i, i);
      for (j = 0; j < frequencies[i]; ++j)
      {
        printf("*");
      }
      printf("\n");
    }
  }

  return 0;
}