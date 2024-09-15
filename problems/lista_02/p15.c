#include <stdio.h>

int main()
{

  double num1, num2, num3;
  double ord1, ord2, ord3;

  scanf("%lf%lf%lf", &num1, &num2, &num3);

  if (num1 > num2)
  {
    double temp = num1;
    num1 = num2;
    num2 = temp;
  }
  if (num1 > num3)
  {
    double temp = num1;
    num1 = num3;
    num3 = temp;
  }
  if (num2 > num3)
  {
    double temp = num2;
    num2 = num3;
    num3 = temp;
  }
  ord1 = num1;
  ord2 = num2;
  ord3 = num3;
  
  printf("%.2lf, %.2lf, %.2lf\n", ord1, ord2, ord3);

  return 0;
}