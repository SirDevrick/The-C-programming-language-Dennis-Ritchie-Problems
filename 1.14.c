#include <stdio.h>

#define MAX 256

int main() {
  int c;
  int charactersASCII[MAX];

  for (int i = 0; i < MAX; i++) {
    charactersASCII[i] = 0;
  }

  // Aqui a cada valor ascii le doy un incremento
  while ((c = getchar()) != EOF) {
    charactersASCII[c]++;
  }

  for (int i = 0; i < MAX; i++) {
    if (charactersASCII[i] != 0) {
      printf("\n|%-4d|%-3c|%3d|", i, i, charactersASCII[i]);
    }
    for (int j = 0; j < charactersASCII[i]; j++) {
      printf("*");
    }
    /* printf("Char %d: %d\n", i, charactersASCII[i]); */
  }
  printf("\n");

  return 0;
}
