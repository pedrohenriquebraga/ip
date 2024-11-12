#include <stdio.h>
#include <string.h>

int main() {
  unsigned long int n;
  int j, i, k = 0;
  char texto[10000];
  char textoInvertido[10000];

  scanf("%lu", &n);

  for (i = 0; i < n; i++) {
    
    scanf("\n%[^\n]%*c", texto);

    for (j = 0; j < strlen(texto); j++) {
      if (texto[j] >= 'A' && texto[j] <= 'z') {
        texto[j] = texto[j] + 3;
      }
    }

    k = 0;

    for (j = strlen(texto) - 1; j >= 0; j--) {
      textoInvertido[k] = texto[j];
      k++;
    }

    for (j = strlen(textoInvertido) / 2; j < strlen(textoInvertido); j++) {
      textoInvertido[j] = textoInvertido[j] - 1;
    }

    printf("%s\n", textoInvertido);
    strncpy(textoInvertido,"",strlen(textoInvertido));
    strncpy(texto,"",strlen(texto));
  }

  return 0;
}