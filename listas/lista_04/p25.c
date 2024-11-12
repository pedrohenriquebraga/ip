#include <stdio.h>

int main() {

  char str[2049];
  scanf("%[^\n]%*c", str);


  printf("%s", str);

  return 0;
}