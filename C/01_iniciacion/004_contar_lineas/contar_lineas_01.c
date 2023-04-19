#include <stdio.h>

/* cuenta las lineas de la entrada*/

/*
  Nota adicional
  Para generar artificialmente un EOF en la terminal se utiliza:
  ctrl D en unix/linux/macos
  ctrl Z en windows
*/

int main()
{
  int c, nl;
  nl = 0;

  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
  printf("%d\n", nl);
}