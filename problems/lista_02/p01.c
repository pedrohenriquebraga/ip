#include <stdio.h>

int main() {

  float n1, n2, n3, media = 0;

  scanf("%f%f%f", &n1, &n2, &n3);

  media = (n1 + n2 + n3) / 3.0;

  printf("MEDIA = %.2f\n", media);

  if (media >= 6) {
    printf("APROVADO\n");
  } else {
    printf("REPROVADO\n");
  }

  return 0;
}