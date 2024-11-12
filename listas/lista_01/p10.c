#include <stdio.h>
#include <math.h>

int main()
{

  float l1, l2, l3, t, area;

  scanf("%f%f%f", &l1, &l2, &l3);

  t = (l1 + l2 + l3) / 2.0;
  area = sqrt(t * ((t - l1) * (t - l2) * (t - l3)));

  printf("A AREA DO TRIANGULO E = %.2f\n", area);

  return 0;
}