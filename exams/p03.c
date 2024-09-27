#include <stdio.h>

int main() {

  int i = 1, dia, mes, ano, bissexto = 0, totalDias = 0;

  scanf("%d/%d/%d", &dia, &mes, &ano);

  if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    bissexto = 1;

  totalDias += dia;

  while (i < mes) { 
    switch (i) {
      case 1:
        totalDias += 31;
        break; 
      case 2:
        if (bissexto == 1) {
          totalDias += 29;
        } else {
          totalDias += 28;
        }
        break;
      case 3: 
        totalDias += 31;
        break;
      case 4:
        totalDias += 30;
        break;
      case 5:
        totalDias += 31;
        break;
      case 6:
        totalDias += 30;
        break;
      case 7: 
        totalDias += 31;
        break;
      case 8: 
        totalDias += 31;
        break;
      case 9:
        totalDias += 30;
        break;
      case 10: 
        totalDias += 31;
        break;
      case 11:
        totalDias += 30;
        break;
      case 12:
        totalDias += 31;
        break;
    }
    i++;
  }

  printf("NUMERO DE DIAS E %d\n", totalDias);

  return 0;
}