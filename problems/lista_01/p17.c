#include <stdio.h>

int main() {

  unsigned int valor, nCem = 0, nCinq = 0, nDez = 0;

  scanf("%u", &valor);

  while (valor > 0) {
    if (valor >= 100)
    {
      valor = valor - 100;
      nCem++;
    }

    else if (valor >= 50)
    {
      valor = valor - 50;
      nCinq++;
    }

    else if (valor >= 10)
    {
      valor = valor - 10;
      nDez += 1;
    }

    else
    {
      break;
    }
  }

  printf("NOTAS DE 100 = %d\n", nCem);
  printf("NOTAS DE 50 = %d\n", nCinq);
  printf("NOTAS DE 10 = %d\n", nDez);
  printf("MOEDAS DE 1 = %d\n", valor);

  return 0;
}