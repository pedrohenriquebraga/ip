#include <stdio.h>

int main()
{

  float a, b, c, d, e, f, x, y;

  scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

  float determinante = (a * e) - (b * d);
  float dx = (c * e) - (b * f);
  float dy = (a * f) - (d * c);

  x = dx / determinante;
  y = dy / determinante;

  printf("O VALOR DE X E = %.2f\n", x);
  printf("O VALOR DE Y E = %.2f\n", y);

  return 0;
}