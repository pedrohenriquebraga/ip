#include <stdio.h>

/**
 * Funcao que calcula o fatorial de um numero n
 * @param n um numero inteiro positivo
 * @return o fatorial de n
 */
unsigned long int fat(unsigned int n) {
  unsigned long int res = 1;
  int i;

  for (i = 1; i <= n; i++) {
    res *= i;
  }

  return res;
}

int main() {

  int n;
  unsigned long int res;
  scanf("%d", &n);

  res = fat(n);
  printf("%d! = %ld\n", n, res);

  return 0;
}