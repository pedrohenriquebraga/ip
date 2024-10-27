#include <stdio.h>

void intercalaStr(char *str) {
  int count = 0;
  while (*str != '\0') {
    if (*str >= 'A' && *str <= 'z') {
      if (count % 2 == 1) {
        if (*str >= 'A' && *str <= 'Z') {
          *str = *str + 32;
        }
      } else {
        if (*str >= 'a' && *str <= 'z') {
          *str = *str - 32;
        }
      }
      count++;
    }
    str++;
  }
}

int main()
{
  char texto[51];

  while(scanf("%[^\n]%*c", texto) != EOF){
    intercalaStr(texto);
    printf("%s\n", texto);
  }
  
  return 0;
}