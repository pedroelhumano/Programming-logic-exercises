#include <stdio.h>

int main()
{
  // variables
  int auxValue;
  int value1 = 123;
  int value2 = 987;
  int *pValue1;
  int *pValue2;

  // Comienza programa
  pValue1 = &value1;
  pValue2 = &value2;

  auxValue = *pValue1;
  *pValue1 = *pValue2;
  *pValue2 = auxValue;

  // Resultado.
  printf("valor AUX: %d\n", auxValue);
  printf("valor 1: %d\n", *pValue1);
  printf("valor 2: %d\n", *pValue2);
}