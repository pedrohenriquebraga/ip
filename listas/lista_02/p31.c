#include <stdio.h>

int main() {
  int n, i, f1, f2;

  scanf("%d%d%d", &n, &f1, &f2);

  for (i = 0; i < n; i++) {
    int num;
    int fib = f1 + f2;
    scanf("%d", &num);

    if (i >= 2) {
      if (fib != num) {
        printf("Nao e Fibonacci\n");
        return 0;
      } else {
        printf("OK\n");
        f1 = f2;
        f2 = num;
      }
    } else {
      if (i == 0 && f1 != num) {
        printf("Nao e Fibonacci\n");
        return 0;
      } else if (i == 1 && f2 != num) {
        printf("Nao e Fibonacci\n");
        return 0;
      } else {
        printf("OK\n");
      }
    }
  }

  printf("A serie informada e de Fibonacci\n");

  return 0;
}