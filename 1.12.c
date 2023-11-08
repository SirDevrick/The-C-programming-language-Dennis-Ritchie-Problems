#include <stdio.h>

int main() {
  int c;
  int last = -1;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      // Aqui verifica si el caracter sea diferente al anterior
      if (c != last)
        putchar('\n');
    } else {
      putchar(c);
    }
    last = c;
  }
  return 0;
}
