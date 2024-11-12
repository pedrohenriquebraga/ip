#include <stdio.h>

int main() {
  double temp;
  double pol;

  scanf("%lf%lf", &temp, &pol);

  printf("O VALOR EM CELSIUS = %.2lf\n", (5 * (temp - 32)) / 9);
  printf("A QUANTIDADE DE CHUVA E = %.2lf", pol * 25.4);

  return 0;
}