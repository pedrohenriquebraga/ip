#include <stdio.h>

int main() {

  int n, k, i, countAlunos = 0, v[1000];

  scanf("%d%d", &n, &k);

  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  for (i = 0; i < n; i++) {
    if (v[i] <= 0) {
      countAlunos++;
    }
  }

  if (countAlunos < k) {
    printf("SIM\n");
  } else {
    printf("NAO\n");
    for (i = n - 1; i >= 0; i--) {
      if (v[i] <= 0) {
        printf("%d\n", i + 1);
      }
    }
  }

  return 0;
}