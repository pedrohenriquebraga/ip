#include <stdio.h>
#include <math.h>

int main() {

  double peso, aceleracao, tempoDecolagem, velocidade, pista, trabalho;

  scanf("%lf%lf%lf", &peso, &aceleracao, &tempoDecolagem);

  velocidade = (aceleracao * tempoDecolagem);
  pista = (aceleracao * pow(tempoDecolagem, 2)) / 2;
  trabalho = ((peso * 1000) * pow(velocidade, 2)) / 2;

  printf("VELOCIDADE = %.2lf\n", velocidade * 3.6);
  printf("ESPACO PERCORRIDO = %.2lf\n", pista);
  printf("TRABALHO REALIZADO = %.2lf\n", trabalho);

  return 0;
}