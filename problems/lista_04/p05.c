#include <stdio.h>
#include <string.h>

#define StrSize 10000
int main()
{

  char texto[StrSize + 1];
  char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
  int n, i, j, countVogais = 0, countConsoantes = 0, letras = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("\n%[^\n]%*c", texto);
    char *ptrTexto = texto;

    countVogais = 0;
    countConsoantes = 0;
    letras = 0;

    while (*ptrTexto != '\0') {
      if (*ptrTexto >= 'A' && *ptrTexto <= 'z') {
        int eVogal = 0;

        letras++;

        if (*ptrTexto >= 'A' && *ptrTexto <= 'Z') {
          *ptrTexto = *ptrTexto + 32;
        }

        for (j = 0; j < 5; j++) {
          if (*ptrTexto == vogais[j]) {
            countVogais++;
            eVogal = 1;
            break;
          }
        }

        if (!eVogal) {
          countConsoantes++;
        }

        eVogal = 0;
      }

      ptrTexto++;
    }

    printf("Letras = %d\n", letras);
    printf("Vogais = %d\n", countVogais);
    printf("Consoantes = %d\n", countConsoantes);
  }

  return 0;
}