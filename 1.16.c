#include <stdio.h>

#define MAX 10

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len;
  int max;
  char line[MAX];
  char longest[MAX];

  max = 0;
  while ((len = getLine(line, MAX)) > 0) {
    if (len > max) {
      max = len;
      /* En este caso necesito la funcion de copiar */
      /*   para saber cual es mayor y si este puede cambiar en el futuro */
      copy(longest, line);
    }
  }
  if (max > 0) {
    printf("%s", longest);
    printf("\nLongitud: %d\n", max);
  }
  return 0;
}

int getLine(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = '\n';
    i++;
  }
  s[i] = '\0';
  /* Aunque el arreglo este lleno podemos saber su longitud */
  /* y su ultimo caracter y en base a eso determinar */
  /* cual linea fue mas larga */
  while (c != EOF && c != '\n') {
    c = getchar();
    i++;
  }
  return i;
}

void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0') {
    i++;
  }
}
