#include <stdio.h>

#define N 100

int main() {

  int matriz[N][N], largura, altura, borda, val, _largura, _altura;

  scanf("%d", &largura);
  scanf("%d", &altura);
  scanf("%d", &borda);
  scanf("%d", &val);

  if (largura <= 0 || largura > 100 || altura <= 0 || altura > 100) {
    return 0;
  }

  printf("P2\n");
  printf("%d %d\n", largura, altura);
  printf("255\n");

  for (_altura = 0; _altura < altura; _altura++) {
    for (_largura = 0; _largura < largura; _largura++) {
      matriz[_altura][_largura] = 0;
    }
  }

  for (_altura = 0; _altura < altura; _altura++) {
    for (_largura = 0; _largura < largura; _largura++) {
      if (_altura < borda || _altura >= altura - borda || _largura < borda || _largura >= largura - borda) {
        matriz[_altura][_largura] = val;
      }
    }
  }

  for (_altura = 0; _altura < altura; _altura++) {
    for (_largura = 0; _largura < largura; _largura++) {
      printf("%d ", matriz[_altura][_largura]);
    }
    printf("\n");
  }

  return 0;
}
