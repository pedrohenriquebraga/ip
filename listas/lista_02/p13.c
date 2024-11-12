#include <stdio.h>

int main() {

  double mediaI = 0, mediaP = 0;
  int iCount = 0, pCount = 0;

  while (1) {
    long int num;
    scanf("%ld", &num);

    if (num == 0) {
      break;
    }

    if (num % 2 == 0) {
      mediaP += num;
      pCount++;
    } else {
      mediaI += num;
      iCount++;
    }
  }

  if (pCount > 0) {
    mediaP = mediaP / pCount;
    printf("MEDIA PAR: %.6lf\n", mediaP);
  } else {
    printf("MEDIA PAR: 0.000000\n");
  }

  if (iCount > 0) {
    mediaI = mediaI / iCount;
    printf("MEDIA IMPAR: %.6lf\n", mediaI);
  } else {
    printf("MEDIA IMPAR: 0.000000\n");
  }

  return 0;
}