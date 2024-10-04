#include <stdio.h>

void separaDigitos(int n, int * a, int * b, int * c) {

  int n1 = n / 100;
  int n2 = (n / 10) % 10;
  int n3 = n % 10;

  *a = n1;
  *b = n2;
  *c = n3;
}

int main() {

  int n, n1, n2, n3;
  scanf("%d", &n);

  separaDigitos(n, &n1, &n2, &n3);

  printf("%d%d%d\n", n3, n2, n1);

  return 0;
}