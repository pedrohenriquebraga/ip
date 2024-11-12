#include <stdio.h>

#define VSize 1000

int main() {

  int v[VSize], n, i, countPares = 0;
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  for (i = 0; i < n; i++) {
    if (v[i] % 2 == 0) {
      countPares++;
      printf("%d ", v[i]);
    }
  }

  printf("%d", countPares);

  return 0;
}