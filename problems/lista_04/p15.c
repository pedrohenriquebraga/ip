#include <stdio.h>
#include <string.h>

int main() {
  int c, i;
  int inicio, fim, j, k;
  char num[1000000];

  scanf("%d", &c);

  for (i = 0; i < c; i++) {
    scanf("%d%d", &inicio, &fim);

    for (j = inicio; j <= fim; j++) {
      printf("%d", j);
      sprintf(&num[strlen(num)], "%d", j);
    }

    for (k = strlen(num) - 1; k >= 0; k--) {
      printf("%c", num[k]);
      num[k] = 0;
    }

    printf("\n");
  }

  return 0;
}