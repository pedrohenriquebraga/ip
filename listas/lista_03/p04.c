#include <stdio.h>

void somaDivisores(int n) {
  unsigned int i, soma = 0;

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
}

int main() {
  
  int n;
  scanf("%d", &n);

  somaDivisores(n);

  return 0;
}