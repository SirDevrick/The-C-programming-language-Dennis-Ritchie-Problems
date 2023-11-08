#include <stdio.h>

int palabra_mayor(int *m) {
  int mayor = 0;
  for (int i = 0; i < 15; i++) {
    if (m[i] > mayor) {
      mayor = m[i];
    }
  }
  return 0;
}

int main() {
  int word, npalabras, w_mayor;
  int longitud[15];
  word = npalabras = w_mayor = 0;
  int cont = 0;
  while ((word = getchar()) != EOF) {
    if (word == ' ' || word == '\n' || word == '\t') {
      longitud[npalabras] = cont;
      ++npalabras;
      cont = 0;
    } else {
      ++cont;
    }
  }
  // En esta parte estamos trabajando columnas x filas ya que las columnas
  // depende del tamaño de la palabra mas grande
  w_mayor = palabra_mayor(longitud);
  for (int i = 0; i < w_mayor; i++) {
    for (int j = 0; j < npalabras; j++) {
      if ((w_mayor - i) <= longitud[j]) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
  printf("%d\n", npalabras);
  return 0;
}
