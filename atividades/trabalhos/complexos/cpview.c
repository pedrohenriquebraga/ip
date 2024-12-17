#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14

typedef struct
{
  char code[2];
  double real;
  double img;
} Complex;

void print_algebrica(const Complex *complex)
{
  printf("%.2f%+.2fi\n", complex->real, complex->img);
}

void print_polar(const Complex *complex)
{
  double r = sqrt(complex->real * complex->real + complex->img * complex->img);
  double theta = atan2(complex->img, complex->real) * 180.0 / PI;
  printf("%.2f;%.2f\n", r, theta);
}

void print_vec(const Complex *complex)
{
  printf("[%.2f,%.2f]\n", complex->real, complex->img);
}

int main(int argc, char *argv[])
{
  if (argc < 2 || argc > 3)
  {
    printf("Uso: %s [OPTION] <nome_arquivo>\n", argv[0]);
    return 0;
  }

  char opt = 'a';
  const char *nome_arquivo;

  if (argc == 3)
  {
    opt = argv[1][1];
    nome_arquivo = argv[2];
  }
  else
  {
    nome_arquivo = argv[1];
  }

  FILE *file = fopen(nome_arquivo, "rb");

  Complex complex;
  fread(&complex, sizeof(Complex), 1, file);
  fclose(file);

  switch (opt)
  {
  case 'a':
    print_algebrica(&complex);
    break;
  case 'p':
    print_polar(&complex);
    break;
  case 'v':
    print_vec(&complex);
    break;
  default:
    printf("Opção inválida.\n");
    return 0;
  }

  return 0;
}
