#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  printf("El rango de un char es de %d a %d\n", CHAR_MIN, CHAR_MAX);
  printf("El rango de un int (signed) es de %d a %d\n", INT_MIN, INT_MAX);
  printf("El rango de un unsigned int es de %u a %u\n", UINT_MAX, UINT_MAX);
  printf("El rango de un long es de %ld a %ld\n", LONG_MIN, LONG_MAX);
  printf("El rango de un long long es de %lld a %lld\n", LLONG_MIN, LLONG_MAX);
  printf("El rango de un float es de %f a %f\n", FLT_MIN, FLT_MAX);

  return 0;
}