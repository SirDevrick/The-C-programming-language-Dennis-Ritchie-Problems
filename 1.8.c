/* Escriba un program a que cuente espacios en blanco, tabuladores */
/* y nuevas líneas. */

#include <stdio.h>

int main() {
  int word, nNonWords;
  word = nNonWords = 0;
  while ((word = getchar()) != EOF) {
    if (word == ' ' || word == '\n' || word == '\t') {
      ++nNonWords;
    }
  }
  printf("%d\n", nNonWords);
  return 0;
}
