#include <stdio.h>

int encontraCaracter(char ch, char * texto) {
  int j;

  for (j = 0; texto[j] != '\0'; j++) {
    if (texto[j] == ch) {
      return j;
    }
  }

  return -1;
    
}

int main() {

  int n, i;
  scanf("%d%*c", &n);

  for (i = 0; i < n; i++) {
    char ch;
    char texto[500];

    scanf("%c %[^\n]%*c", &ch, texto);

    int indice = encontraCaracter(ch, texto);

    if (indice < 0) {
      printf("Caractere %c nao encontrado.\n", ch);
    } else {
      printf("Caractere %c encontrado no indice %d da string.\n", ch, indice);
    }
  }

  return 0;
}