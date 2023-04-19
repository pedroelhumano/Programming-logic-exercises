#include <stdio.h>

/* cuenta digitos, espacios en blanco y otros */

/*
  Nota adicional
  Para generar artificialmente un EOF en la terminal se utiliza:
  ctrl D en unix/linux/macos
  ctrl Z en windows
*/

int main()
{
  int c, i, nWhile, nOther;
  int nDigit[10];

  nWhile = nOther = 0;

  for (i = 0; i < 10; ++i)
    nDigit[i] = 0;

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++nDigit[c - '0']; // agreganios digitos
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nWhile; // añadimos espacios en blanco
    else
      ++nOther; // añadimos otros

  printf("digitos =");

  for (i = 0; i < 10; ++i)
    printf("%d", nDigit[i]);

  printf(", espacios blancos = %d, otros = %d\n", nWhile, nOther);
}