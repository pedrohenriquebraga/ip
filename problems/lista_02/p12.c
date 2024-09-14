#include <stdio.h>

int main() {

  int i, numAnt = -1, contagem = 0, contagemMax = 1;

  scanf("%d", &i);

  if (i <= 0) {
    return 0;
  }

  while (i > 0) {
    
    int num;
    scanf("%d", &num);

    if (num > numAnt) {
      contagem++;
    } else {
      if (contagem > contagemMax) {
        contagemMax = contagem; 
      }
      contagem = 1;
    }

    numAnt = num;
    i--;
  }

  if (contagem > contagemMax) {
    contagemMax = contagem; 
  }

  printf("O comprimento do segmento crescente maximo e: %d\n", contagemMax);

  return 0;
}