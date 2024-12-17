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

Poly le_poli(const char *file_name)
{
  FILE *file = fopen(file_name, "rb");
  Poly poly;

  fread(poly.code, sizeof(char), ID_SIZE, file);
  poly.code[ID_SIZE - 1] = '\0';
  fread(&poly.p, sizeof(int), 1, file);

  poly.coef = (double *)calloc(poly.p + 1, sizeof(double));
  fread(poly.coef, sizeof(double), poly.p + 1, file);

  fclose(file);
  return poly;
}

void salva_poli(const char *file_name, const Poly *poly)
{
  FILE *file = fopen(file_name, "wb");

  fwrite(poly->code, sizeof(char), ID_SIZE, file);
  fwrite(&poly->p, sizeof(int), 1, file);
  fwrite(poly->coef, sizeof(double), poly->p + 1, file);

  fclose(file);
}

Poly sub_poli(const Poly *poly1, const Poly *poly2)
{
  Poly res;

  res.p = (poly1->p > poly2->p) ? poly1->p : poly2->p;
  strncpy(res.code, "poly", ID_SIZE);

  res.coef = (double *)calloc(res.p + 1, sizeof(double));

  for (int i = 0; i <= res.p; i++)
  {
    double coef1 = (i <= poly1->p) ? poly1->coef[i] : 0.0;
    double coef2 = (i <= poly2->p) ? poly2->coef[i] : 0.0;
    res.coef[i] = coef1 - coef2;
  }

  return res;
}

int main(int argc, char *argv[])
{
  if (argc != 4)
  {
    printf("Uso: %s <arquivo1> <arquivo> <arquivo_saida>\n", argv[0]);
    return 0;
  }

  const char *file1 = argv[1];
  const char *file2 = argv[2];
  const char *arquivo_saida = argv[3];

  Poly poly1 = le_poli(file1);
  Poly poly2 = le_poli(file2);

  Poly result = sub_poli(&poly1, &poly2);

  salva_poli(arquivo_saida, &result);

  free(poly1.coef);
  free(poly2.coef);
  free(result.coef);

  return 0;
}
