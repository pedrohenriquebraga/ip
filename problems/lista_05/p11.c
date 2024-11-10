#include <stdio.h>

#define N 10
#define M 10

int main() {
  int matriz[N][M], l, c, n, m, encontrou, count;
  int nums[100], numsUnicos[100], i = 0, j, iUnicos = 0;

  scanf("%d %d", &n, &m);

  if (n <= 0 || n > 10 || m <= 0 || m > 10) {
    printf("dimensao invalida\n");
    return 0;
  }

  for (l = 0; l < n; l++) {
    for (c = 0; c < m; c++) {
      scanf("%d", &matriz[l][c]);
      nums[i] = matriz[l][c];
      i++;
    }
  }

  for (l = 0; l < n; l++) {
    for (c = 0; c < m; c++) {
      encontrou = 0;

      for (j = 0; j < iUnicos; j++) {
        if (numsUnicos[j] == matriz[l][c]) {
          encontrou = 1;
          break;
        }
      }

      if (!encontrou) {
        count = 0;
        for (j = 0; j < i; j++) {
          if (nums[j] == matriz[l][c]) {
            count++;
          }
        }

        if (count == 1) {
          numsUnicos[iUnicos] = matriz[l][c];
          iUnicos++;
        }
      }
    }
  }

  if (iUnicos == 0) {
    printf("sem elementos unicos\n");
    return 0;
  } else {
    for (j = 0; j < iUnicos; j++) {
      if (j > 0) {
        printf(",");
      }
      printf("%d", numsUnicos[j]);
    }
  }

  printf("\n");

  return 0;
}
