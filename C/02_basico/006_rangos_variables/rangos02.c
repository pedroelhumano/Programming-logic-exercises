#include <stdio.h>
// #include <string.h>

// Funcion strlen sin usar la biblioteca string.h

/* strlen: regresa la longitud de s */
int strlen(char s[])
{
  int i;
  i = 0;
  while (s[i] != '\0')
    ++i;
  return i;
}

int main()
{
  char cadena[] = "Hola, mundo!";
  int longitud = strlen(cadena);
  printf("La longitud de la cadena es: %d\n", longitud);
  return 0;
}
