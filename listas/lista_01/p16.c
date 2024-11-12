#include <stdio.h>

int main() {

  int num;
  
  scanf("%d", &num);

  int pNum = num / 100;
  int sNum = (num / 10) % 10;
  int tNum = num % 10;


  printf("%d%d%d\n", tNum, sNum, pNum);

  return 0;
}