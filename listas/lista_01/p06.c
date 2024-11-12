#include <stdio.h>

int main() {

  int a, b;
  float media;

  scanf("%d%d", &a, &b);

  media = (a + b) / 2.0;

  printf("%.3f", media);

  return 0;
}