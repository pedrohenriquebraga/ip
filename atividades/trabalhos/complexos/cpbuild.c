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

void parse_algebraic(const char *str, double *real, double *img)
{
  sscanf(str, "%lf+%lfi", real, img);
}

void parse_polar(const char *str, double *real, double *img)
{
  double r, theta;
  sscanf(str, "%lf;%lf", &r, &theta);
  theta = theta * PI / 180.0;
  *real = r * cos(theta);
  *img = r * sin(theta);
}

void parse_vector(const char *str, double *real, double *img)
{
  sscanf(str, "[%lf,%lf]", real, img);
}

int main(int argc, char *argv[])
{
  if (argc < 3 || argc > 4)
  {
    printf("Uso: %s [OPTION] <string_numero_complexo> <nome_arquivo>\n", argv[0]);
    return 0;
  }

  char opt = 'a';
  const char *complex_str;
  const char *nome_arquivo;

  if (argc == 4)
  {
    opt = argv[1][1];
    complex_str = argv[2];
    nome_arquivo = argv[3];
  }
  else
  {
    complex_str = argv[1];
    nome_arquivo = argv[2];
  }

  Complex complex = {{'C', 'P'}, 0.0, 0.0};

  switch (opt)
  {
  case 'a':
    parse_algebraic(complex_str, &complex.real, &complex.img);
    break;
  case 'p':
    parse_polar(complex_str, &complex.real, &complex.img);
    break;
  case 'v':
    parse_vector(complex_str, &complex.real, &complex.img);
    break;
  default:
    printf("Opção inválida.\n");
    return 0;
  }

  FILE *file = fopen(nome_arquivo, "wb");

  fwrite(&complex, sizeof(Complex), 1, file);
  fclose(file);

  return 0;
}
