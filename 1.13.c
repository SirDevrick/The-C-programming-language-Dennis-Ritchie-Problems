#include <stdio.h>

int main() {
  int word, npalabras;
  int longitud[15];
  word = npalabras = 0;
  int cont = 0;

  for (int i = 0; i < 15; i++) {
    longitud[i] = 0;
  }

  while ((word = getchar()) != EOF) {
    if (word == ' ' || word == '\n' || word == '\t') {
      longitud[npalabras] = cont;
      ++npalabras;
      cont = 0;
    } else {
      cont++;
    }
  }
  for (int i = 0; i < npalabras; i++) {
    for (int j = 0; j < longitud[i]; j++) {
      printf("*");
    }
    printf("\n");
    /* printf("Word %d: %d\n", i + 1, longitud[i]); */
  }
  printf("%d\n", npalabras);
  return 0;
}
