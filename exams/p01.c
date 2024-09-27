#include <stdio.h>
#include <math.h>

int main() {

  const double PI = 3.14;

  char tipo;
  int num, angulo, sinal = 0;
  double valorAngulo;

  scanf("%c%d", &tipo, &num);

  if (num > 180) {
    angulo = 360 - num;
  } else if (num > 90) {
    angulo = 180 - num;
  } else {
    angulo = num;
  }

  double radianos = (angulo * PI) / 180;

  switch (tipo) {
    case 's':
      valorAngulo = sin(radianos);

      if (num > 180) {
        sinal = -1;
      } else {
        sinal = 1;
      }
      break;
    
    case 'c':
      valorAngulo = cos(radianos);

      if (num > 90) {
        sinal = -1;
      } else {
        sinal = 1;
      }
      break;
  }

  printf("%d\n", angulo);
  printf("%.3lf\n", valorAngulo);
  
  if (sinal == 1) {
    printf("SINAL IGUAL\n");
  } else {
    printf("SINAL INVERTIDO\n");
  }

  return 0;
}