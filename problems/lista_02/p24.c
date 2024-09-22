#include <stdio.h>

int isPrimo(int n) {
  if ((n % 2 == 0 && n != 2) || n == 1) {
    return 0;
  } else if (n % 3 == 0 && n != 3) {
    return 0;
  } else if (n % 5 == 0 && n != 5) {
    return 0;
  } else if (n % 7 == 0 && n != 7) {
    return 0;
  } else {
    return 1;
  }
}

int main() {

  unsigned long int a, b, c;
  unsigned long int mmc = 1;

  scanf("%ld%ld%ld", &a, &b, &c);

  int i;

  for (i = 1; 1; i++) {
    if (isPrimo(i) == 1) {
      if (a == 1 & b == 1 && c == 1)
        break;

      if (a % i == 0 || b % i == 0 || c % i == 0) {
        printf("%ld %ld %ld :%d\n", a, b, c, i);

        if (a > 1 && a % i == 0) {
          a /= i;
        }

        if (b > 1 && b % i == 0) {
          b /= i;
        }

        if (c > 1 && c % i == 0) {
          c /= i;
        }

        mmc *= i;
        i = 1;
      }
    }
  }

  printf("MMC: %ld\n", mmc);
   
  return 0;
}