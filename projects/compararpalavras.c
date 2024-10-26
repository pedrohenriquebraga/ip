#include <stdio.h>

#define NCH 1024

int comparaPalavra(char * p1, char * p2) {
  char * ptrP1 = p1;
  char * ptrP2 = p2;
  int i = 0;

  while (*ptrP1 != '\0') {
    if (*ptrP1 != *ptrP2) {
      return 0;
    }

    ptrP1++;
    ptrP2++;
  }

  return 1;
}

int main() {

  char texto[NCH];
  char palavra[32];
  char tempPalavra[32];
  int i = 0, count = 0, len;

  char * ptrTexto = texto;

  scanf("%[^\n]%*c", texto);
  scanf("%s", palavra);

  while (*ptrTexto != '\0') {
    char ch = *ptrTexto;

    if (ch != ' ') {
      tempPalavra[i] = ch;
      i++;
    } else {
      i++;
      tempPalavra[i] = '\0';
      if (comparaPalavra(tempPalavra, palavra)) {
        count++;
      }
      while (i >= 0) {
        tempPalavra[i] = '\0';
        i--;
      }
      i = 0;
    }

    ptrTexto++;
  }

  // Compara a ultima palavra, já que ela não possui espaço após ela.
  tempPalavra[i + 1] = '\0';
  if (comparaPalavra(tempPalavra, palavra)) {
    count++;
  }

  printf("%s (%d)\n", palavra, count);

  return 0;
}