#include <stdio.h>

/* formatea espacios a saltos de linea */

/*
  Nota adicional
  Para generar artificialmente un EOF en la terminal se utiliza:
  ctrl D en unix/linux/macos
  ctrl Z en windows
*/

int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      printf("\n");
    }
    else
    {
      putchar(c);
    }
  }
}