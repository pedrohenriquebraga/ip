#include <stdio.h>
#include <math.h>

#define S_SIZE (int) pow(10, 4)

int contar_transformacoes(char * s1, char * s2) {

  int i, count = 0;

  for (i = 0; s1[i] != '\0'; i++) {
    while (s1[i] != s2[i]) {
      if (s1[i] >= 'a' && s1[i] <= 'z') {
        if (s1[i] == 'z') {
          s1[i] = 'a';
        } else {
          s1[i] += 1;
        }
        count++;
      }
    }
  }

  return count;
}

int main() {

  int t, i, n;
  char a[S_SIZE], b[S_SIZE];

  scanf("%d%*c", &t);

  for (i = 0; i < t; i++) {
    scanf("%s%*c%s", a, b);

    n = contar_transformacoes(a, b);

    printf("%d\n", n);
  }

  return 0;
}