#include <stdio.h>
#include <math.h>

int raizEq2(double a, double b, double c, double * delta) {
  double x1, x2, temp;
  *delta = pow(b, 2) - 4 * a * c;

  if (*delta < 0) {
    return 0;
  } else {
    if (*delta == 0) {
      return 1;
    } else {
      return 2;
    }
  }
}

int main() {
  double a, b, c;
  double delta, x1, x2;

  scanf("%lf%lf%lf", &a, &b, &c);

  int qtdRaizes = raizEq2(a, b, c, &delta);

  if (qtdRaizes == 0) {
    printf("RAIZES IMAGINARIAS\n");
    return 0;
  } else {
    x1 = (-b + sqrt(delta)) / (2.0 * a);

    if (qtdRaizes == 1) {
      printf("RAIZ UNICA\n");
      printf("X1 = %.2lf", x1);
    } else {
      x2 = (-b - sqrt(delta)) / (2.0 * a);
      printf("RAIZES DISTINTAS\n");
      
      if (x1 > x2) {
        int temp = x1;
        x1 = x2;
        x2 = temp;
      }
      printf("X1 = %.2lf\n", x1);
      printf("X2 = %.2lf\n", x2);
    }
  }

  return 0;
}