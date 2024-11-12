#include <stdio.h>

int main() {

  unsigned long int pop1, pop2, anos = 0;

  scanf("%ld%ld", &pop1, &pop2);

  while (pop1 < pop2) {
    pop1 = pop1 * 1.03;
    pop2 = pop2 * 1.015;

    anos++;
  }

  printf("ANOS = %ld\n", anos);
  

  return 0;
}