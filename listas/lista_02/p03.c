#include <stdio.h>

int main() {

  unsigned long int conta;
  float consumo, total = 0;
  char tipo;

  scanf("%ld%f %c", &conta, &consumo, &tipo);

  switch (tipo) {
    case 'R':
      total = 5 + consumo * 0.05;
      break;
    
    case 'C':
      total = 500;
      consumo -= 80;
      total = total + consumo * 0.25;
      break;
      
    case 'I':
      total = 800;
      consumo -= 100;
      total = total + consumo * 0.04;
      break;
  }  

  printf("CONTA = %ld\n", conta);
  printf("VALOR DA CONTA = %.2f\n", total);

  return 0;
}