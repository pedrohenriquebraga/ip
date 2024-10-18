#include <stdio.h>

/**
 * Função que calcula o valor de pi usando a série proposta por John Wallis
 * @param n quantidade de termos da série
 * @return o valor aproximado da constante pi
 */
double compute_pi( int n ) {
  int i;
  double num = 2, den = 1;
  double res = 2;

  for (i = 1; i < n; i++) {
    if (i % 2 == 0) {
      num += 2;
    } else {
      den += 2;
    }

    res *= num / den;
  }

  return res * 2;
}

int main() {
  int n;
  scanf("%d", &n);

  printf("%.12lf\n", compute_pi(n));

  return 0;
}