// EXEMPLO DE CÓDIGO COM SOMA DE MATRIZES

#include <stdio.h>
int main()
{
  int matrizA[2][2] = {{1, 2}, {3, 4}};
  int matrizB[2][2] = {{5, 6}, {7, 8}};
  int resultado[2][2];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      resultado[i][j] = matrizA[i][j] + matrizB[i][j];
    }
  }
  printf("Resultado da Soma:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d ", resultado[i][j]);
    }
    printf("\n");
  }
  return 0;
}