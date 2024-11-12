#include <stdio.h>
#include <math.h>

int main() {

  float num;
  float numWithRound1;
  float numWithRound2;
  float numWithRound3;

  scanf("%f", &num);

  numWithRound1 = round(num * 10.0) / 10.0;
  numWithRound2 = round(num * 100.0) / 100.0;
  numWithRound3 = round(num * 1000.0) / 1000.0;

  printf("%.6f\n", numWithRound1);
  printf("%.6f\n", numWithRound2);
  printf("%.6f\n", numWithRound3);

  return 0;
}