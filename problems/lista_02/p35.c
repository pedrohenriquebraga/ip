#include <stdio.h>
#include <math.h>

int soma_divisores(int num)
{
  int soma = 0, i;
  int raiz = sqrt(num);

  for (i = 1; i <= raiz; i++)
  {
    if (num % i == 0)
    {
      soma += i;
      if (i != num / i)
      {
        soma += num / i;
      }
    }
  }
  return soma - num;
}

int sao_amigos(int a, int b)
{

  int somaA = soma_divisores(a);
  int somaB = soma_divisores(b);

  return somaA == b && somaB == a;
}

void encontrar_numeros_amigos(int n)
{
  int i, j, count = 0;
  for (i = 2; count < n; i++)
  {
    int somaA = soma_divisores(i);
    if (somaA > i)
    {
      int somaB = soma_divisores(somaA);
      if (somaB == i && somaA != somaB && somaA > somaB)
      {
        printf("(%d,%d)\n", i, somaA);
        count++;
      }
    }
  }
}

int main()
{
  int n;
  scanf("%d", &n);

  if (n < 1 || n >= 9)
    return 0;

  encontrar_numeros_amigos(n);
  return 0;
}