#include <stdio.h>

#define N 10

int main() {

  int matriz[N][N], n, l, c;
  scanf("%d", &n);

  if (n <= 0 || n > 10) {
    printf("dimensao invalida\n");
    return 0;
  }

  for (l = 0; l < n; l++) {
    for (c = 0; c < n; c++) {
      scanf("%d", &matriz[l][c]);
    }
  }

  for (l = 0; l < n; l++) {
    for (c = 0; c < n; c++) {
      if (l == c) {
        if (matriz[l][c] != matriz[c][l]) {
          printf("nao bissimetrica\n");
          return 0;
        }
      }

      if (matriz[l][n - 1 - c] != matriz[n - 1 - l][c]) {
        printf("nao bissimetrica\n");
        return 0;
      }
    }
  }

  printf("bissimetrica\n");

  return 0;
}