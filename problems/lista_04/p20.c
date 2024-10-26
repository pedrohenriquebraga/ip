#include <stdio.h>

int main() {

  int n, i, k, j, v[1000], nums[1000];
  int achou = 0;

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  for (i = 0; i < n; i++) {
    if (j == 0) {
      nums[j] = v[i];
      j++;
      printf("%d\n", v[i]);
    } else {
      for (k = j - 1; k >= 0; k--) {
        if (v[i] == nums[k]) {
          achou = 1;
          break;
        }
      }

      if (achou) {
        achou = 0;
      } else {
        printf("%d\n", v[i]);
        nums[j] = v[i];
        j++;
      }
    }
  }



  return 0;
}