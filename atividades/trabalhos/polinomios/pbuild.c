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

void parse_polinomio(const char *input, Poly *poly)
{
  int max_pot = 0;

  const char *ptr = input;
  while (*ptr)
  {
    if (*ptr == '^')
    {
      int pot = atoi(ptr + 1);
      if (pot > max_pot)
      {
        max_pot = pot;
      }
    }
    ptr++;
  }

  poly->p = max_pot;
  poly->coef = (double *)calloc(max_pot + 1, sizeof(double));

  ptr = input;

  while (*ptr)
  {
    double coef = strtod(ptr, (char **)&ptr);
    int pot = 0;

    if (*ptr == 'x')
    {
      ptr++;
      if (*ptr == '^')
      {
        ptr++;
        pot = atoi(ptr);
      }
      else
      {
        pot = 1;
      }
    }

    poly->coef[pot] = coef;

    while (*ptr && (*ptr == '+' || *ptr == '-' || *ptr == ' '))
    {
      ptr++;
    }
  }
}

void salvar_polinomio(const char *nome_arquivo, const Poly *poly)
{
  FILE *file = fopen(nome_arquivo, "wb");

  fwrite(poly->code, sizeof(char), ID_SIZE, file);
  fwrite(&poly->p, sizeof(int), 1, file);
  fwrite(poly->coef, sizeof(double), poly->p + 1, file);

  fclose(file);
}

int main(int argc, char const *argv[])
{
  if (argc < 3)
  {
    printf("Tente usar o comando assim:\n./pbuild <polinomio> <nome do arquivo>\n");

    return 0;
  }

  Poly poly;

  const char *polinomio = argv[1];
  const char *nome_arquivo = argv[2];

  strncpy(poly.code, "poly", ID_SIZE);

  parse_polinomio(polinomio, &poly);
  salvar_polinomio(nome_arquivo, &poly);

  free(poly.coef);

  return 0;
}