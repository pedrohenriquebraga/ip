#include <stdio.h>

#define N 500
#define M 500

int main() {

  int matriz[N][M], l, c, n, m;
  scanf("%d %d", &n, &m);

  for (l = 0; l < n; l++) {
    for (c = 0; c < m; c++) {
      scanf("%d", &matriz[l][c]);
    }
  }

  for (l = 0; l < n; l++) {
    for (c = 0; c < m; c++) {
      if (matriz[l][c] == 1111) {
        // (l - 1 + n) % n faz com que a matriz seja circular

        if (matriz[(l - 1 + n) % n][c] == 4) {
          if (matriz[(l + 1) % n][c] == 8) {
            if (matriz[l][(c - 1 + m) % m] == 0) {
              if (matriz[l][(c + 1) % m] == 0) {
                printf("%d %d\n", l, c);
                return 0;
              }
            }
          }
        }
      }
    }
  }

  printf("WALLY NAO ESTA NA MATRIZ\n");

  return 0;
}