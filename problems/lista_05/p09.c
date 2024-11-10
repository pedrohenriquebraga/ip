#include <stdio.h>

#define N 1000
int main() {

  int matriz[N][N], matrizT[N][N], n, l, c, tr = 0;

  scanf("%d", &n);

  for (l = 0; l < n; l++) {
    for (c = 0; c < n; c++) {
      scanf("%d", &matriz[l][c]);
      matrizT[c][l] = matriz[l][c];

      if (l == c) {
        tr += matriz[l][c];
      }
    }
  }

  for (l = 0; l < n; l++) {
    for (c = 0; c < n; c++) {
      matriz[l][c] = matriz[l][c] * tr;
      matriz[l][c] = matriz[l][c] + matrizT[l][c];

      printf("%d ", matriz[l][c]);
    }
    printf("\n");
  }

  return 0;
}