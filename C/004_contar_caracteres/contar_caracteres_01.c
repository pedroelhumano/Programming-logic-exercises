#include <stdio.h>

/* Cuenta cantidad de caracteres */

/*
  Nota adicional
  Para generar artificialmente un EOF en la terminal se utiliza:
  ctrl D en unix/linux/macos
  ctrl Z en windows
*/

int main()
{
  long nc;
  nc = 0;

  while (getchar() != EOF)
    ++nc;

  printf("%ld\n", nc);
}