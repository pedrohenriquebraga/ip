#include <stdio.h>

#define N 1000
#define M 1000

int main() {
  int matriz[N][M], l, c, n, m, 
    maior, menor, 
    countMenor = 0, 
    countMaior = 0;
  
  double freqMaior, freqMenor;
  scanf("%d %d", &n, &m);

  for (l = 0; l < n; l++) {
    for (c = 0; c < m; c++) {
      scanf("%d", &matriz[l][c]);

      if (l == 0 && c == 0) {
        maior = matriz[l][c];
        menor = matriz[l][c];
      } else {
        if (matriz[l][c] < menor) {
          menor = matriz[l][c];
        }

        if (matriz[l][c] > maior) {
          maior = matriz[l][c];
        }
      }
    }
  }

  for (l = 0; l < n; l++) {
    for (c = 0; c < m; c++) {
      if (matriz[l][c] == maior) {
        countMaior++;
      } else if (matriz[l][c] == menor) {
        countMenor++;
      }
    }
  }

  freqMenor = ((double) countMenor / (n * m)) * 100.0;
  freqMaior = ((double) countMaior / (n * m)) * 100.0;

  printf("%d %.2lf%%\n", menor, freqMenor);
  printf("%d %.2lf%%\n", maior, freqMaior);

  return 0;
}