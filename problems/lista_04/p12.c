#include <stdio.h>

int main() {

  long int v[1000000], n, i, j;
  double mediana;
  scanf("%ld", &n);

  for (i = 0; i < n; i++) {
    scanf("%ld", &v[i]);
  }

  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (v[i] > v[j]) {
        long int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
  }

  if (n % 2 == 0) {
    mediana = (v[n / 2 - 1] + v[(n / 2)]) / 2.0;
  } else {
    mediana = v[(n / 2)];
  }
  printf("%.2lf\n", mediana);

  return 0;
}