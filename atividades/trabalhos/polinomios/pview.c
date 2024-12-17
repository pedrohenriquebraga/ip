#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_SIZE 4

typedef struct
{
  char code[ID_SIZE];
  int p;
  double *coef;
} Poly;

Poly le_poli(const char *nome_arquivo)
{
  FILE *file = fopen(nome_arquivo, "rb");
  Poly poly;

  fread(poly.code, sizeof(char), ID_SIZE, file);
  poly.code[ID_SIZE - 1] = '\0';

  fread(&poly.p, sizeof(int), 1, file);

  poly.coef = (double *)malloc((poly.p + 1) * sizeof(double));

  fread(poly.coef, sizeof(double), poly.p + 1, file);

  fclose(file);
  return poly;
}

void print_poli(const Poly *poly)
{
  int primeiro = 1;

  for (int i = poly->p; i >= 0; i--)
  {
    if (poly->coef[i] != 0)
    {
      if (!primeiro)
      {
        printf(" %c ", poly->coef[i] > 0 ? '+' : '-');
      }
      else if (poly->coef[i] < 0)
      {
        printf("-");
      }
      primeiro = 0;

      double abs_coef = poly->coef[i] > 0 ? poly->coef[i] : -poly->coef[i];
      if (i == 0 || abs_coef != 1)
      {
        printf("%.2lf", abs_coef);
      }

      if (i > 0)
      {
        printf("x");
        if (i > 1)
        {
          printf("^%d", i);
        }
      }
    }
  }

  if (primeiro)
  {
    printf("0");
  }
  printf("\n");
}

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Uso: %s <nome_arquivo>\n", argv[0]);
    return 0;
  }

  const char *nome_arquivo = argv[1];

  Poly poly = le_poli(nome_arquivo);

  print_poli(&poly);

  free(poly.coef);

  return 0;
}
