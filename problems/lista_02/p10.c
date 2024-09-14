#include <stdio.h>

int main() {

  unsigned int n, contagem = 0, i = 1, j = 1;

  scanf("%d", &n);

  while (i <= 6) {
    while (j <= 6) {
      if (i != j && i + j == n) {
        printf("D1: %d, D2: %d\n", i, j);
        contagem++;
      }
      j++;
    }
    j = 1;
    i++;
  }

  if (contagem == 0) {
    printf("Combinacao impossivel\n");
    return 0;
  }

  printf("Ha %d possibilidades\n", contagem);

  return 0;
}