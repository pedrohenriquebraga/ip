#include <stdio.h>

int main() {

  float preco, percentDist, percentImposto, valorComImposto, valorFinal;

  scanf("%f%f%f", &preco, &percentDist, &percentImposto);

  valorComImposto = preco + (preco * (percentImposto / 100));
  valorFinal = valorComImposto + (preco * (percentDist / 100));

  printf("O VALOR DO CARRO E = %.2f\n", valorFinal);

  return 0;
}