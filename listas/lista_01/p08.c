#include <stdio.h>

int main() {

  int horas, minutos, segundos;
  unsigned long int totalSegundos;

  scanf("%d%d%d", &horas, &minutos, &segundos);

  totalSegundos = segundos + (horas * 60 * 60) + (minutos * 60);

  printf("O TEMPO EM SEGUNDOS E = %ld\n", totalSegundos);

  return 0;
}