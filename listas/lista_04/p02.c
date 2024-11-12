#include <stdio.h>

#define VSize 1000

int main() {

  int v[VSize], n = 0, k, i, countMaior;

  while (n < 1 || n > VSize) {
    scanf("%d", &n);
  }

  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  scanf("%d", &k);

  for (i = 0; i < n; i++) {
    if (v[i] >= k) {
      countMaior++;
    }
  }

  printf("%d\n", countMaior);

  return 0;
}