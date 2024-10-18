#include <stdio.h>

void converteEmNotasMoedas(
  unsigned int valor, 
  unsigned int *nota100, 
  unsigned int *nota50, 
  unsigned int *nota10, 
  unsigned int *moeda1
) {

  while (valor > 0) {
    if (valor >= 100) {
      valor = valor - 100;
      *nota100 += 1;
    } else if (valor >= 50) {
      valor = valor - 50;
      *nota50 += 1;
    } else if (valor >= 10) {
      valor = valor - 10;
      *nota10 += 1;
    } else {
      break;
    }
  }

  *moeda1 = valor;
}

int main() {

  unsigned int valor, nota100 = 0, nota50 = 0, nota10 = 0, moeda1 = 0;

  scanf("%u", &valor);

  converteEmNotasMoedas(valor, &nota100, &nota50, &nota10, &moeda1);

  printf("NOTAS DE 100 = %d\n", nota100);
  printf("NOTAS DE 50 = %d\n", nota50);
  printf("NOTAS DE 10 = %d\n", nota10);
  printf("MOEDAS DE 1 = %d\n", moeda1);

  return 0;
}