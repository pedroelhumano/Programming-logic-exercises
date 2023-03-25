#include <stdio.h>

/* capturar la entrada y mostrarla en pantalla*/

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
    putchar(c);
    printf("\nLa expresion getchar() != EOF es %d\n", getchar() != EOF);
  }
  printf("La expresion getchar() != EOF es %d\n", getchar() != EOF);
}