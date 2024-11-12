#include <stdio.h>

#define N 500

/**
* Função que verifica se a matriz é de permutação
* @param matriz Indica a matriz a ser verificada
* @param n indica a dimensão da matriz
* @param *soma parâmetro de saída, que armazenará a soma de todos os ’n’ elementos
 matriz.
* @return int
*/
int ehPermutacao( int matriz[N][N], int n, int *soma ) {
  int l, c, countUm = 0, countZero = 0, ePerm = 1;

  *soma = 0;

  // Verifica cada linha
  for (l = 0; l < n; l++) {
    countUm = 0;
    countZero = 0;

    for (c = 0; c < n; c++) {
      if (ePerm) {
        if (matriz[l][c] == 0) {
          countZero++;
        } else if (matriz[l][c] == 1) {
          countUm++;
        } else {
          ePerm = 0;
        }
      }
      *soma += matriz[l][c];
    }

    if (countZero != n - 1 || countUm != 1) {
      ePerm = 0;
    }
  }

  // Verifica cada coluna
  for (c = 0; c < n && ePerm; c++) {
    countUm = 0;
    countZero = 0;

    for (l = 0; l < n; l++) {
      if (matriz[l][c] == 0) {
        countZero++;
      } else if (matriz[l][c] == 1) {
        countUm++;
      } else {
        ePerm = 0;
      }
    }

    if (countZero != n - 1 || countUm != 1) {
      ePerm = 0;
    }
  }

  return ePerm;

}

int main() {

  int matriz[N][N], l, c, n, soma = 0, ePerm = 1;
  scanf("%d", &n);

  for (l = 0; l < n; l++) {
    for (c = 0; c < n; c++) {
      scanf("%d", &matriz[l][c]);
    }
  }

  ePerm = ehPermutacao(matriz, n, &soma);

  printf("%d\n", n);

  if (ePerm) {
    printf("PERMUTACAO\n");
  } else {
    printf("NAO EH PERMUTACAO\n");
  }

  printf("%d\n", soma);

  return 0;
}