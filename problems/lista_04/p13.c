#include <stdio.h>

char * sliceString(int n, char * texto) {
  int i;
  char * ptrTexto = texto;

  ptrTexto += n;

  while (*ptrTexto != '\0')  {
    *ptrTexto = 0;
    ptrTexto++;
  }

  return texto;
}

int main() {

  char texto[500];
  int n, testes, i;

  scanf("%d", &testes);

  for (i = 0; i < testes; i++) {
    scanf("\n%d %[^\n]%*c", &n, texto);
    sliceString(n, texto);
    printf("%s\n", texto);
  }


  return 0;
}