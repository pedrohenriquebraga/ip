#include <stdio.h>
#include <math.h>

int main() {

  double altura, aresta;

  scanf("%lf%lf", &altura, &aresta);

  double areaBase = 3 * pow(aresta, 2) * sqrt(3) / 2.0;
  double volume = (1.0 / 3.0 * areaBase) * altura;

  printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);

  return 0;
}