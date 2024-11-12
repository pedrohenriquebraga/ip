#include <stdio.h>

int main() {

  const float PI = 3.14159;
  float raio, altura, ac, al, areaTotal;

  scanf("%f%f", &raio, &altura);

  ac = PI * (raio * raio);
  al = 2 * PI * raio * altura;
  areaTotal = 2 * ac + al;

  printf("O VALOR DO CUSTO E = %.2f\n", areaTotal * 100);

  return 0;
}