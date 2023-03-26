#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LENGTH 20 // Longitud máxima de la palabra

int main()
{
  int c, state, length;
  int lengths[MAX_LENGTH];
  int i, j;

  state = OUT;
  length = 0;
  for (i = 0; i < MAX_LENGTH; ++i)
  {
    lengths[i] = 0;
  }

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      if (state == IN)
      {
        if (length < MAX_LENGTH)
        {
          ++lengths[length];
        }
        else
        {
          ++lengths[MAX_LENGTH - 1];
        }
        length = 0;
      }
      state = OUT;
    }
    else
    {
      state = IN;
      ++length;
    }
  }

  printf("Histograma de las longitudes de las palabras:\n");
  for (i = 1; i < MAX_LENGTH; ++i)
  {
    printf("%2d: ", i);
    for (j = 0; j < lengths[i]; ++j)
    {
      printf("*");
    }
    printf("\n");
  }
  printf(">=%2d: ", MAX_LENGTH);
  for (j = 0; j < lengths[MAX_LENGTH - 1]; ++j)
  {
    printf("*");
  }
  printf("\n");

  return 0;
}
