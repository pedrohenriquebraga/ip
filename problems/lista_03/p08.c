#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
* Função que calcula a potencia de p mais próximo a n.
* @param n valor inteiro
* @param p valor da potencia
* @return retorna o valor da potencia mais proxima.
*/
int next_power( int n, int p ) {

  int i, difAnt = 0;

  for (i = 1; ;i++) {
    unsigned int pot = pow(i, p);
    int dif = abs(n - pot);

    if (i == 1) {
      difAnt = dif;
    } else {
        if (dif > difAnt) {
          return i - 1;
        } else {
          difAnt = dif;
        }
      }
    }
}

int main() {

  int n, p;
  scanf("%d%d", &n, &p);

  int proxPot = next_power(n, p);
  printf("%d -> %d^%d = %.0lf\n", n, proxPot, p, pow(proxPot, p));

  return 0;
}