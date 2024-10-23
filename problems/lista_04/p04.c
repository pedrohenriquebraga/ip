#include <stdio.h>

int main() {
  
  unsigned long int n, i, count;
  int leds[10] = {2, 5, 5, 4, 5, 6, 3, 7, 6, 6};
  char v[1000000];

  scanf("%lu", &n);

  for (i = 0; i < n; i++) {
    scanf("%s", v);
    
    char * ch = v;

    while (*ch != '\0') { 
      int num = *ch - '0';

      if (num == 0) {
        count += leds[9];
      } else {
        count += leds[num - 1];
      }

      *ch++;
    }

    printf("%lu leds\n", count);
    count = 0;
    
  }

  return 0;
}