#include <stdio.h>

int fatorial(int n)
{
  int i, f = 1;
  for (i = n; i > 1; i--)
  {
    f *= i;
  }

  return f;
}

int binomial(int n, int p)
{
  return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

int main()
{

  int inicial, final, n, p;

  scanf("%d%d", &inicial, &final);

  for (n = inicial; n <= final; n++)
  {
    for (p = 0; p <= n; p++)
    {
      printf("%d", binomial(n, p));
      if (p < n)
      {
        printf(",");
      }
    }
    printf("\n");
  }

  return 0;
}