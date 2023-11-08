/* Escriba un program a que imprima todas las líneas de entrada que */
/* sean mayores de 80 caracteres */

#include <stdio.h>

#define MAX 1000
#define MAXLINE 80

int max_line(char line[], int maxline);

int main() {
  int len;
  char line_actually[MAX];

  /* Con este for podemos ver en la funcion max_line la importancia
   * de colocar el espaciado y el final del linea */
  for (int i = 0; i < MAX; i++) {
    line_actually[i] = 'a';
  }
  while ((len = max_line(line_actually, MAX)) > 0) {
    if (len > MAXLINE) {
      printf("Longitud: %d\n", len);
      printf("%s", line_actually);
    }
  }
  return 0;
}

int max_line(char line[], int maxline) {
  int i, c;
  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }
  /* Aqui colocamos al arreglo el salto de linea
   *  que tambien cuenta como caracter */
  if (c == '\n') {
    line[i] = '\n';
    i++;
  }
  line[i] = '\0';
  /* Esto es por si las lineas son mas grandes que el tamaño del array */
  while (c != EOF && c != '\n') {
    c = getchar();
    i++;
  }
  return i;
}
