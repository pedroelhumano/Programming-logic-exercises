#include <stdio.h>

/* cuenta espacios en blanco, lineas y tabulaciones*/

/*
  Nota adicional
  Para generar artificialmente un EOF en la terminal se utiliza:
  ctrl D en unix/linux/macos
  ctrl Z en windows
*/

int main()
{
  int spaces, tabs, newL, c;
  spaces = tabs = newL = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
      ++newL;
    if (spaces == ' ' || c == '\n' || c == '\t')
      ++spaces;
    if (c == '\t')
      ++tabs;
  }
  printf("\nSpaces: %d\nTabs: %d\nNew Lines: %d\n", spaces, tabs, newL);
}