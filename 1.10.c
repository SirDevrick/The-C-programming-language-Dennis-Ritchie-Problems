/* Escriba un program a que copie su entrada a la salida, reem plazan­ */
/* do cada tabulación por \ t , cada retroceso por \ b y cada diagonal invertida
 * por */
/* \ \ . Esto hace que las tabulaciones y los espacios sean visibles sin
 * confusiones. */
#include <stdio.h>

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    } else if (c == '\b') {
      putchar('\\');
      putchar('b');
    } else if (c == '\\') {
      putchar('\\');
      putchar('\\');
    } else {
      putchar(c);
    }
  }
  return 0;
}
