#include <stdio.h>

int main() {

  // 0 = desordenada
  // 1 = crescente
  // -1 = decrescente

  int i = 0, maior = 0, menor = 0, ordem = 0, atual, ant;

  scanf("%d", &ant);
  scanf("%d", &atual);

  maior = ant;
  menor = ant;

  if (atual > maior) {
    maior = atual;
  }

  if (atual < menor) {
    menor = atual;
  }

  if (ant < atual) {
    ordem = 1;
  } else {
    ordem = -1;
  }

  for (i = 2; i < 5; i++) {
    ant = atual;

    scanf("%d", &atual);

    if (atual > maior) {
      maior = atual;
    }

    if (atual < menor) {
      menor = atual;
    }

    if (atual == ant) {
      ordem = 0;
    } else if (atual > ant) {
      if (ordem == -1) {
        ordem = 0;
      }
    } else {
      if (ordem == 1) {
        ordem = 0;
      }
    }
  }

  printf("MENOR: %d, MAIOR: %d\n", menor, maior);

  if (ordem == 1) {
    printf("ORDENADO CRESCENTE\n");
  } else if (ordem == -1) {
    printf("ORDENADO DECRESCENTE\n");
  } else {
    printf("DESORDENADO\n");
  }

  return 0;
}