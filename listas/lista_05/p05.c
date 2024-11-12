#include <stdio.h>

#define N 6

int main() {

  int matriz[N][N], l, c, maior = -63, soma;

  for (l = 0; l < N; l++) {
    for (c = 0; c < N; c++) {
      scanf("%d", &matriz[l][c]);
    }
  }

  for (l = 0; l < N - 2; l++) {
    for (c = 0; c < N - 2; c++) {
      soma = matriz[l][c] + matriz[l][c + 1] + matriz[l][c + 2]   // Linha superior
           + matriz[l + 1][c + 1]                                 // Centro
           + matriz[l + 2][c] + matriz[l + 2][c + 1] + matriz[l + 2][c + 2]; // Linha inferior

      if (soma > maior) {
        maior = soma;
      }
    }
  }

  printf("%d\n", maior);

  return 0;
}
