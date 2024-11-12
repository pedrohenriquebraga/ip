#include <stdio.h>
#include <string.h>

/**
 * Converte a string str para o valor inteiro correspondente.
 * @param str string contendo um número inteiro
 * @return o número inteiro correspondente
 */
long int string2int( const char * str ) {
  long int n = 0, i, k = 1, sinal = 1;

  if (str[0] == '-') {
    sinal = -1;
  }

  for (i = strlen(str) - 1; i >= 0; i--) {
    if (str[i] >= '0' && str[i] <= '9') {
      n += (str[i] - '0') * k;
      k *= 10;
    }
  }

  return n * sinal;
}

int main() {

  char str[128];
  long int n;

  while(scanf("%s", str) != EOF) {
    n = string2int(str);
    printf("%ld %ld\n", n, n*2);
  }

  return 0;
}