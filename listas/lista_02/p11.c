#include <stdio.h>

int main() {

  unsigned long int n, f = 1, i;

  scanf("%ld", &n);
  i = n;

  while (i >= 1) {
    f *= i;
    i--;
  }

  printf("%ld! = %ld\n", n, f);

  return 0;
}