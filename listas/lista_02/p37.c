#include <stdio.h>

int ePrimo(int n) {

  int nDiv = 1, c = 2;

  if (n == 0 || n == 1)
    return 0;

  while (c <= n / 2) {
    if (n % c == 0) {
      nDiv++;

      if (nDiv > 1) {
        return 0;
      }
    }
    if (c == 2) {
      c++;
    } else {
      c += 2;
    }
  }

  return 1;
}

int leNumValido() {
  while (1) {
    long int n;
    scanf("%ld", &n);

    if (n <= 0) {
      printf("Fatoracao nao e possivel para o numero %ld!\n", n);
    } else {
      return n;
    }
  }
}

int main() {
  long int n, p = 2, novoNum = 1;
  
  n = leNumValido();

  printf("%ld = ", n);

  while (1) {
    if (ePrimo(n)) {
      novoNum = novoNum * n;
      printf("%ld\n", n);
      break;
    }

    if (novoNum == n) {
      break;
    }

    if (ePrimo(p)) {
      if (n % p == 0) {
        printf("%ld x ", p);
        novoNum = novoNum * p;
        n = n / p;
        p = 0;
      }
    }

    if (p <= 2) {
      p++;
    } else {
      p += 2;
    }

  }

  printf("\n");

  return 0;
}