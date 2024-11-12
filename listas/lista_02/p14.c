#include <stdio.h>

int main() {

  long int num;

  scanf("%ld", &num);

  if (num < 0) {
    printf("Numero invalido!");
    return 0;
  }

  if ((num % 2 == 0 && num != 2) || num == 1) {
    printf("NAO PRIMO\n");
  } else if (num % 3 == 0 && num != 3) {
    printf("NAO PRIMO\n");
  } else if (num % 5 == 0 && num != 5) {
    printf("NAO PRIMO\n");
  } else if (num % 7 == 0 && num != 7) {
    printf("NAO PRIMO\n");
  } else {
    printf("PRIMO\n");
  }

  return 0;
}