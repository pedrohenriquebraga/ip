#include <stdio.h>

#define N 6
#define R 100

int main() {

  int distancias[N][N] = {
      {0, 63, 210, 190, -1, 190}, // Cáceres
      {63, 0, 160, 150, 95, 10},  // Bugres
      {210, 160, 0, 10, 1, 10},   // Cuiabá
      {190, 150, 10, 0, 10, 20},  // Várzea
      {10, 95, 7, 21, 0, 80},     // Tangará
      {190, 2, -1, 41, 80, 0}     // Lacerda
  };

  int n, i, rotas[R], distancia = 0, valido = 1;
  scanf("%d", &n);

  if (n < 2 || n > 100) {
    printf("rota invalida!\n");
    return 0;
  }

  for (i = 0; i < n; i++) {
    scanf("%d", &rotas[i]);
  }

  for (i = 0; i < n - 1; i++) {
    int origem = rotas[i];
    int destino = rotas[i + 1];

    if (distancias[origem][destino] == -1) {
      valido = 0;
      break;
    } 

    distancia += distancias[origem][destino];
  }

  if (valido) {
    printf("%d\n", distancia);
  } else {
    printf("rota invalida!\n");
  }

  return 0;
}