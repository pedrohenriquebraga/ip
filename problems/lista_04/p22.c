#include <stdio.h>

#define N 256

void str_clean(char * str, char * clr) {
  char * ptrStr = str;
  char * ptrClr = clr;
  char newStr[N];
  int i = 0, achou = 0;

  while (*ptrStr != '\0') {
    while (*ptrClr != '\0') {

      if (*ptrStr == *ptrClr) {
        achou = 1;
        break;
      }
      
      ptrClr++;
    }

    if (achou) {
      achou = 0;
    } else {
      newStr[i] = *ptrStr;
      i++;
    }
    
    ptrStr++;
    ptrClr = clr;
  }

  newStr[i] = '\0';
  i = 0;

  while (newStr[i] != '\0') {
    str[i] = newStr[i];
    i++;
  }
  str[i] = '\0';
}

int main() {
  char str[N]; // string original
  char clr[N]; // lista de caracteres indesejados
  scanf("%[^\n]%*c", str);
  scanf("%[^\n]%*c", clr);
  str_clean(str, clr) ;
  printf("%s\n", str);
  return 0;
}