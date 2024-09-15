#include <stdio.h>

int main() {

  long int num;
  int dia, mes, ano;

  scanf("%ld", &num);

  dia = num / 1000000;
  mes = (num / 10000) % 100;
  ano = num % 10000;

  if (
      (mes < 1 || mes > 12) || 
      (dia < 1 || dia > 31)
    ) {
    printf("Data invalida!\n");
    return 0;
  }

  switch (mes) {
    case 2:
      if (dia > 28) {
        printf("Data invalida!\n");
        return 0;
      }
      break;
    case 4: case 6: case 9: case 11:
      if (dia > 30) {
        printf("Data invalida!\n");
        return 0;
      }
      break;
    default:
      if (dia > 31) {
        printf("Data invalida!\n");
        return 0;
      }
  }

  printf("%02d de ", dia);

  switch (mes) {
    case 1: printf("janeiro"); break;
    case 2: printf("fevereiro"); break;
    case 3: printf("marco"); break;
    case 4: printf("abril"); break;
    case 5: printf("maio"); break;
    case 6: printf("junho"); break;
    case 7: printf("julho"); break;
    case 8: printf("agosto"); break;
    case 9: printf("setembro"); break;
    case 10: printf("outubro"); break;
    case 11: printf("novembro"); break;
    case 12: printf("dezembro"); break;
  }

  printf(" de %d\n", ano);

  return 0;
}