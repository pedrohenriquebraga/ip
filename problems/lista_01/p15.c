#include <stdio.h>

int main()
{

  int num;
  int pos = 7;
  char binario[8] = "00000000";

  scanf("%d", &num);

  if (num > 255 || num < 0) {
    printf("Numero invalido!");
    return 0;
  }

  while (num > 0) {
    int resto = num % 2;
    binario[pos] = resto + '0'; // Converte o número 0 ou 1 para seu respectivo código na tabela ASCII
    num /= 2;
    pos--;
  }

  printf("%s\n", binario);

  return 0;
}