#include <stdio.h>
#include <math.h>

int main() {

  double a, b, c, delta, x1, x2, temp;

  scanf("%lf%lf%lf", &a, &b, &c);

  delta = pow(b, 2) - 4 * a * c;

  if (delta < 0) {
    printf("RAIZES IMAGINARIAS\n");
  } else {
    x1 = (-b + sqrt(delta)) / (2.0 * a);

    if (delta == 0) {
      printf("RAIZ UNICA\n");
      printf("X1 = %.2lf\n", x1);
    } else {
      printf("RAIZES DISTINTAS\n");

      x2 = (-b - sqrt(delta)) / (2.0 * a);

      if (x1 > x2) {
        temp = x1;

        x1 = x2;
        x2 = temp;
      }

      printf("X1 = %.2lf\n", x1);
      printf("X2 = %.2lf\n", x2);
    }
  }

  return 0;
}