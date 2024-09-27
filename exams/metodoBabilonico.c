#include <stdio.h>

double calculaRaiz(double x, double num) {
  return 0.5 * (x + (num / x));
}

double calculaPrecisao(double raiz, double num) {
  double res = (raiz * raiz) - num;

  return res;
}

int main() {

  int num, i;
  double raiz, precisao, erro, x0;

  scanf("%d%lf", &num, &precisao);

  x0 = num / 2.0;
  raiz = calculaRaiz(x0, num);
  erro = calculaPrecisao(raiz, num);

  while (erro > precisao) {
    raiz = calculaRaiz(raiz, num);
    erro = calculaPrecisao(raiz, num);
  }

  printf("%lf\n", raiz);

  return 0;
}