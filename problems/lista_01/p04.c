#include <stdio.h>

int main() {

  float a, b, c;

  scanf("%f%f%f", &a, &b, &c);

  printf("O VALOR DE DELTA E = %.2f\n", (b * b) - 4 * a * c);

  return 0;
}