#include <stdio.h>

/* cuenta las lineas de la entrada*/

int main()
{
  int c, nl;
  nl = 0;

  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
  printf("%d\n", nl);
}