#include <stdio.h>
#include <string.h>

int main() {
  int n, i, j, k;
  char * numeros[] = {"one", "two", "three"};
  char palavra[5];

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("\n%[^\n]%*c", palavra);
        
    for (j = 0; j < 3; j++) {
      if (strlen(numeros[j]) == strlen(palavra)) {
        int corretas = 0;

        for (k = 0; k < strlen(palavra); k++) {
          if (numeros[j][k] == palavra[k])
            corretas++;
        }
        
        if (corretas >= strlen(numeros[j]) - 1) {
          printf("%d\n", j + 1);
        }
      }
    }
    
  }


  return 0;
} 