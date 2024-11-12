#include <stdio.h>

#define VSize 100000

int main() {

  int v[VSize],n, m, i, j;
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  scanf("%d", &m);

  for (i = 0; i < m; i++) {
    int num, achou = 0;
    scanf("%d", &num);

    for (j = 0; j < n; j++) {
      if (v[j] == num) {
        achou = 1;
        break;
      }
    }

    if (achou == 1) {
      printf("ACHEI\n");
      achou = 0;
    } else {
      printf("NAO ACHEI\n");
    }
  }

  return 0;
}