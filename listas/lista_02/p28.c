#include <stdio.h>

int main() {

  int n1, n2, n3;
  int a, b, c;
  char l1, l2, l3;

  scanf("%d%d%d\n", &n1, &n2, &n3);
  scanf("%c%c%c", &l1, &l2, &l3);

  if (n1 > n2)
  {
    int temp = n1;
    n1 = n2;
    n2 = temp;
  }
  if (n1 > n3)
  {
    int temp = n1;
    n1 = n3;
    n3 = temp;
  }

  if (n2 > n3) {
    int temp = n2;
    n2 = n3;
    n3 = temp;
  }
  
  a = n1;
  b = n2;
  c = n3;

  if (l1 == 'A') {
    printf("%d ", a);
  } else if (l1 == 'B') {
    printf("%d ", b);
  } else {
    printf("%d ", c);
  }

  if (l2 == 'A') {
    printf("%d ", a);
  } else if (l2 == 'B') {
    printf("%d ", b);
  } else {
    printf("%d ", c);
  }

  if (l3 == 'A') {
    printf("%d\n", a);
  } else if (l3 == 'B') {
    printf("%d\n", b);
  } else {
    printf("%d\n", c);
  }

  return 0;
}