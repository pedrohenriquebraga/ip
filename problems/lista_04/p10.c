#include <stdio.h>
#include <string.h>

int main()
{

  int num, i;
  int pos = 0;
  char binario[11];

  scanf("%d", &num);

  if (num == 0) {
    printf("0\n");
    return 0;
  }

  while (num > 0) {
    int resto = num % 2;
    sprintf(&binario[pos], "%d", resto);
    num /= 2;
    pos++;
  }

  binario[pos + 1] = '\0';

  for (i = strlen(binario) - 1; i >= 0; i--) {
    if (binario[i] == '\0')
      break;
    printf("%c", binario[i]);
  }
  printf("\n");

  return 0;
}