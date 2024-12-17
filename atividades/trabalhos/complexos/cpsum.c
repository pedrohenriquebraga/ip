#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_SIZE 2

typedef struct
{
  char code[ID_SIZE];
  double real;
  double img;
} Complex;

Complex le_complex(const char *file_name)
{
  FILE *file = fopen(file_name, "rb");

  Complex complex;
  fread(&complex, sizeof(Complex), 1, file);
  fclose(file);

  return complex;
}

void salva_complex(const char *file_name, const Complex *complex)
{
  FILE *file = fopen(file_name, "wb");

  fwrite(complex, sizeof(Complex), 1, file);
  fclose(file);
}

Complex soma_complex(const Complex *complex1, const Complex *complex2)
{
  Complex result = {{'C', 'P'}, 0.0, 0.0};
  result.real = complex1->real + complex2->real;
  result.img = complex1->img + complex2->img;
  return result;
}

int main(int argc, char *argv[])
{
  if (argc != 4)
  {
    printf("Uso: %s <arquivo1> <arquivo2> <arquivo_saida>\n", argv[0]);
    return 0;
  }

  const char *arquivo1 = argv[1];
  const char *arquivo2 = argv[2];
  const char *arquivo_saida = argv[3];

  Complex complex1 = le_complex(arquivo1);
  Complex complex2 = le_complex(arquivo2);

  Complex result = soma_complex(&complex1, &complex2);

  salva_complex(arquivo_saida, &result);

  return 0;
}
