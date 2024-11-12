#include <stdio.h>

int main() {

  int n, invertido = 0, tempN;

  scanf("%d", &n);

  if (n > 99999) {
    printf("NUMERO INVALIDO\n");
    return 0;
  }

  tempN = n;
  while (tempN > 0) {
    invertido = invertido * 10 + tempN % 10;
    tempN /= 10;
  }

  if (invertido == n) {
    printf("PALINDROMO\n");
  } else {
    printf("NAO PALINDROMO\n");
  }

  return 0;
}