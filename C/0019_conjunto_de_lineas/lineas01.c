#include <stdio.h>

/*
  Nota adicional
  Para generar artificialmente un EOF en la terminal se utiliza:
  ctrl D en unix/linux/macos
  ctrl Z en windows
*/

// constantes
#define MAXLINE 1000

// Funciones
int get_line(char line[], int maxline);
void copy(char to[], char from[]);

// Función principal
/* Imprime la linea de entrada mas larga */
int main()
{
  int len;               /* longitud de la linea actual */
  int max;               /* maxima longitud dvista hasta el momento */
  char line[MAXLINE];    /* linea de entrada actual */
  char longest[MAXLINE]; /* la línea mas larga se guarda aquí */

  max = 0;

  while ((len = get_line(line, MAXLINE)) > 0)
  {
    if (len > max)
    {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) /* hubo una línea*/
    printf("%s\n", longest);

  return 0;
}

// Funciones

/* get_line: lee una linea en s, regresa su longitud */
int get_line(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}

/* copy: copia 'from' en ´to´; supone que to es suficientemente grande */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}