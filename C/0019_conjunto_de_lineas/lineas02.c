#include <stdio.h>

/*
  Nota adicional
  Para generar artificialmente un EOF en la terminal se utiliza:
  ctrl D en unix/linux/macos
  ctrl Z en windows
*/

// constantes
#define MAXLINE 1000

// variables globales
int max;               /* maxima longitud dvista hasta el momento */
char line[MAXLINE];    /* linea de entrada actual */
char longest[MAXLINE]; /* la línea mas larga se guarda aquí */

// Funciones
int get_line(void);
void copy(void);

// Función principal
/* Imprime la linea de entrada mas larga */
int main()
{
  int len; /* longitud de la linea actual */
  extern int max;
  extern char longest[];

  max = 0;

  while ((len = get_line()) > 0)
  {
    if (len > max)
    {
      max = len;
      copy();
    }
  }

  if (max > 0) /* hubo una línea*/
    printf("%s\n", longest);

  return 0;
}

// Funciones

/* get_line: version especializada*/
int get_line(void)
{
  int c, i;

  extern char line[];

  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;

  if (c == '\n')
  {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return i;
}

/* copy: version especializada */
void copy()
{
  int i;

  extern char line[], longest[];

  i = 0;
  while ((longest[i] = line[i]) != '\0')
    ++i;
}