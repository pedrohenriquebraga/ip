#include <stdio.h>

int main() {

  int v[10000], n, i, j;

  while (1) {
    scanf("%d", &n);

    if (n == 0)
      break;


    for (i = 0; i < n; i++) {
      scanf("%d", &v[i]);
    }

    int maior = v[0];

    for (i = 0; i < n; i++) {
      if (v[i] > maior) {
        maior = v[i];
      }
    }

    for (j = 0; j <= maior; j++) {
      int count = 0;
      for (i = 0; i < n; i++) {
        if (v[i] <= j) {
          count++;
        }
      }
      printf("(%d) %d\n", j, count);
    }
  }
  

  return 0;
}