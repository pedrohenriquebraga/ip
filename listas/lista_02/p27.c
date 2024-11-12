#include <stdio.h>

int main() {

  unsigned int n, i, soma = 0;

  scanf("%u", &n);

  printf("%u = ", n);

  for (i = 1; i < n; i++) {
    if (n % i == 0) {
      soma += i;

      if (i != 1) {
        printf(" + ");
      }
      printf("%u", i);
    }
  }

  printf(" = %u ", soma);
  if (soma == n) {
    printf("(NUMERO PERFEITO)\n");
  } else {
    printf("(NUMERO NAO E PERFEITO)\n");
  }

  return 0;
}