#include <stdio.h>

/**
 * Função que calcula o valor de pi usando a série proposta por John Wallis
 * @param n quantidade de termos da série
 * @return o valor aproximado da constante pi
 */
double compute_pi( int n ) {
  int numerador, denominador, i, cont;
  double res = 2;

  numerador = 2;
  denominador = 3;
  cont = 1;

  for (i = 1; i <= n; i++) {
    if (cont >= 2) {
      numerador += 2;
      denominador += 2;
      cont = 0;
    }

    res *= numerador / denominador;
    cont++;
  }

  return res;
}

int main() {
  int n;
  scanf("%d", &n);

  printf("%.12lf\n", compute_pi(n));

  return 0;
}