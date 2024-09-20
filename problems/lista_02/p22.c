#include <stdio.h>
#include <math.h>

int main()
{

  int n, h, c1, c2;

  scanf("%d", &n);

  for (h = 1; h <= n; h++) {
    for (c1 = 1; c1 < h; c1++) {
      int c2 = sqrt(pow(h, 2) - pow(c1, 2));
      int tempH = pow(c1, 2) + pow(c2, 2);

      if (tempH == pow(h, 2) && c1 <= c2) {
        printf("hipotenusa = %d, catetos %d e %d\n", h, c1, c2);
      }
    }
  }

  return 0;
}