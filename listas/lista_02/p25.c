#include <stdio.h>

int main() {

  int m, i, j, ultImp = 1, res = 0;

  scanf("%d", &m);

  for (i = 1; i <= m; i++) {
    int resCubo = i * i * i;

    if (i == 1) {
      printf("%d*%d*%d = 1\n", i, i, i);
    } else {
      printf("%d*%d*%d = ", i, i, i);

      for (j = ultImp + 2; res != resCubo; j+=2) {
        res += j;
        ultImp = j;
        if (res == resCubo) {
          printf("%d", j);
        } else {
          printf("%d+", j);
        }
      }
      res = 0;
      printf("\n");
    }


  }

  return 0;
}