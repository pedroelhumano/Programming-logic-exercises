#include <stdio.h>

/* Formatea espacios en blanco */

/*
  Nota adicional
  Para generar artificialmente un EOF en la terminal se utiliza:
  ctrl D en unix/linux/macos
  ctrl Z en windows
*/

int main()
{
  int spaceCount, c;
  spaceCount = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      ++spaceCount;
    }
    else if (c == '\n')
    {
      putchar(c);
      spaceCount = 0;
    }
    else
    {
      if (spaceCount > 0)
      {
        putchar(' ');
        spaceCount = 0;
      }
      putchar(c);
    }
  }
}