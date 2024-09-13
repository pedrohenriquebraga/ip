#include <stdio.h>

int main()
{
  int num, primeiroNum, segundoNum, terceiroNum, novoNum;

  scanf("%d", &num);

  primeiroNum = num / 100;
  segundoNum = (num / 10) % 10;
  terceiroNum =  num % 10;

  novoNum = (primeiroNum + segundoNum * 3 + terceiroNum * 5) % 7;

  printf("O NOVO NUMERO E = %d%d\n", num, novoNum);

  return 0;
}
