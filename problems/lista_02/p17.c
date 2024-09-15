#include <stdio.h>

int main() {

  int num1, num2, num3, num4;

  scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

  if (num1 > num2)
  {
    int temp = num1;
    num1 = num2;
    num2 = temp;
  }
  if (num1 > num3)
  {
    int temp = num1;
    num1 = num3;
    num3 = temp;
  }
  if (num1 > num4) {
    int temp = num1;
    num1 = num4;
    num4 = temp;
  }
  if (num2 > num3)
  {
    int temp = num2;
    num2 = num3;
    num3 = temp;
  }

  if (num3 > num4)
  {
    int temp = num3;
    num3 = num4;
    num4 = temp;
  }


  if (num2 > num4) {
    int temp = num2;
    num2 = num4;
    num4 = temp;
  }

  printf("%d\n", num1 + num2 + num3);

  return 0;
}