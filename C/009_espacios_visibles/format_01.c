#include <stdio.h>

/* formatea espacios, tabulaciones y nuevas lineas */

/*
  Nota adicional
  Para generar artificialmente un EOF en la terminal se utiliza:
  ctrl D en unix/linux/macos
  ctrl Z en windows
  El caracter retroceso en el teclado es
*/

int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      printf("\\t");
    }
    else if (c == '\b')
    {
      printf("\\b");
    }
    else if (c == '\\')
    {
      printf("\\\\");
    }
    else
    {
      putchar(c);
    }
  }
}