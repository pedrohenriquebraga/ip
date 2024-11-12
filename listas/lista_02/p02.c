#include <stdio.h>

int main() {

  int num = 0, i = 0;
  long int powNum = 0;

  while (i < 3) {

    int tempNum;

    scanf("%d", &tempNum);

    if (tempNum >= 10) {
      printf("DIGITO INVALIDO");
      return 0;
    }

    switch (i) {
      case 0:
        num = num + tempNum * 100;
        break;
      case 1:
        num = num + tempNum * 10;
        break;
      case 2:
        num += tempNum;
        break;
    }
  
    i++;
  }

  powNum = num * num;


  printf("%d, %ld\n", num, powNum);
  return 0;
}