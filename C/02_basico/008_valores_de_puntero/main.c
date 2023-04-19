#include <stdio.h>

// Funcion principal del programa
int main()
{
  int value = 32;
  int *pValue = &value;

  printf("Value es: %d\n", value);
  printf("Valor de la direccion de memoria de Value: %p\n", pValue);

  return 0;
}
