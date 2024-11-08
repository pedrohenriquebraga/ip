#include <stdio.h>
#include <stdlib.h>

#define N 99

int main() {

  char matriz[N][N], chBorda, chInterior;
  int n, _l, _c, meio;

  scanf("%d %c %c", &n, &chBorda, &chInterior);

  if (n > N || n <= 0 || n % 2 == 0) {
    printf("Dimensao invalida!\n");
    return 0;
  }

  meio = n / 2;

  for (_l = 0; _l < n; _l++) {
    for (_c = 0; _c < n; _c++) {
      matriz[_l][_c] = ' ';
    }
  }

  for (_l = 0; _l < n; _l++) {
    for (_c = 0; _c < n; _c++) {
      if (abs(_l - meio) + abs(_c - meio) == meio) {
        matriz[_l][_c] = chBorda;
      } else if (abs(_l - meio) + abs(_c - meio) < meio) {
        matriz[_l][_c] = chInterior;
      }
    }
  }

  for (_l = 0; _l < n; _l++) {
    for (_c = 0; _c < n; _c++) {
      printf("%c ", matriz[_l][_c]);
    }
    printf("\n");
  }

  return 0;
}