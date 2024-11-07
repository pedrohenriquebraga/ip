#include <stdio.h>

#define N 2

int main()
{

  int _l, _c;
  double matriz[N][N], a, b, c, d;

  for (_l = 0; _l < 2; _l++)
  {
    for (_c = 0; _c < 2; _c++)
    {
      scanf("%lf", &matriz[_l][_c]);
    }
  }

  a = matriz[0][0] * matriz[0][0] + matriz[0][1] * matriz[1][0];
  b = matriz[0][0] * matriz[0][1] + matriz[0][1] * matriz[1][1];
  c = matriz[1][0] * matriz[0][0] + matriz[1][1] * matriz[1][0];
  d = matriz[1][0] * matriz[0][1] + matriz[1][1] * matriz[1][1];

  printf("%.3lf ", a);
  printf("%.3lf\n", b);

  printf("%.3lf ", c);
  printf("%.3lf\n", d);

  return 0;
}