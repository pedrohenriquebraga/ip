#include <stdio.h>

int main() {

  int num, i;
  double raiz, x0;

  scanf("%d", &num);

  x0 = num / 2.0;
  raiz = 0.5 * (x0 + (num / x0));

  for (i = 0; i < 32; i++) {
    raiz = 0.5 * (raiz + (num / raiz));
  }

  printf("%.10lf\n", raiz);

  return 0;
}