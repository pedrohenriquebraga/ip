#include <stdio.h>

int main() {

  double a, b, c, d;
  scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

  printf("O VALOR DO DETERMINANTE E = %.2f\n", a * d - b * c);

  return 0;
}