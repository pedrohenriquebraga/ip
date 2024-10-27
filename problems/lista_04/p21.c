#include <stdio.h>

int main() {
  int n, i, j, k, maior;
  char texto[201];
  char alfab[27] = "abcdefghijklmnopqrstuvwxyz";
  int countAlfab[26];

  scanf("%d%*c", &n);

  for (i = 0; i < n; i++) {
    texto[0] = '\0';
    for (j = 0; j < 26; j++)
      countAlfab[j] = 0;
    maior = 0;

    scanf("\n%[^\n]", texto);

    for (j = 0; texto[j] != '\0'; j++) {
      if (texto[j] >= 'A' && texto[j] <= 'z') {
        if (texto[j] >= 'A' && texto[j] <= 'Z') {
          texto[j] = texto[j] + 32;
        }

        k = texto[j] - 'a';
        if (k >= 0 && k < 26) {
          countAlfab[k] += 1;
          if (countAlfab[k] > countAlfab[maior]) {
            maior = k;
          }
        }
      }
    }

    for (k = 0; k < 26; k++) {
      if (countAlfab[k] == countAlfab[maior]) {
        printf("%c", alfab[k]);
      }
    }
    printf("\n");
  }

  return 0;
}
