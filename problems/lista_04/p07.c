#include <stdio.h>
#include <string.h>

int main() {
  unsigned long int m, n, i;
  char StrSoma[100];

  while (1) {
    scanf("%lu%lu", &m, &n);

    if (m <= 0 && n <= 0)
      break;

    int soma = m + n;

    sprintf(StrSoma, "%d", soma);
    
    for (i = 0; i < strlen(StrSoma); i++) {
      if (StrSoma[i] != '0') {
        printf("%c", StrSoma[i]);
      }
    }
    printf("\n");
  }

  return 0;
}