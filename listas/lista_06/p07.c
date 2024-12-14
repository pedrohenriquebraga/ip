#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
  double u, x, y, z;
} Ponto;


int main() {

  Ponto * pontos = NULL;
  int n, i, j;
  scanf("%d", &n);

  pontos = (Ponto *) malloc(n * sizeof(Ponto));

  for (i = 0; i < n; i++) {
    scanf("%lf%lf%lf%lf", &pontos[i].u, &pontos[i].x, &pontos[i].y, &pontos[i].z);
  }

  for (i = 0; i < n - 1; i++) {
    double dist = sqrt(
      pow(pontos[i + 1].u - pontos[i].u, 2) +
      pow(pontos[i + 1].x - pontos[i].x, 2) +
      pow(pontos[i + 1].y - pontos[i].y, 2) +
      pow(pontos[i + 1].z - pontos[i].z, 2)
    );

    printf("%.2lf\n", dist);
}

  return 0;
}