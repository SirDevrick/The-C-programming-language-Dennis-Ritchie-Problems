#include <stdio.h>

int main() {
  int c, prev;
  prev = getchar();
  while ((c = getchar()) != EOF) {
    if (c != ' ' || prev != ' ') {
      putchar(prev);
    }
    prev = c;
  }
  putchar(prev);
  return 0;
}
