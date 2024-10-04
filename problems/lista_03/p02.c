#include <stdio.h>

/**
 * Retorna o n-ésimo termo da sequência de Fibonacci
 * @param t1 primeiro termo da sequência
 * @param t2 segundo termo da sequência
 * @param n a posição do termo desejado da sequência
 * @return o valor do n-ésimo termo da sequência
 */

int fibonacci(int t1, int t2, int n) {
  int i;
  int tn;

  for (i = 2; i < n; i++) {
    tn = t1 + t2;

    int temp = t2;
    t2 = tn;
    t1 = temp;
  }

  return tn;
}

int main() {

  int n, t1, t2;
  scanf("%d%d%d", &t1, &t2, &n);

  printf("%d\n", fibonacci(t1, t2, n));
  return 0;
}



