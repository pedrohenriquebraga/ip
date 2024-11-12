#include <stdio.h>

int main() {

  int a[100], b[100];
  int ta = 0, tb = 0, i, j, count = 0;

  while (ta < 1 || ta > 100) {
    scanf("%d", &ta);
  }

  while (tb < 1 || tb > 100) {
    scanf("%d", &tb);
  }

  for (i = 0; i < ta; i++) {
    int num;
    int encontrou = 0;
    scanf("%d", &num);

    for (j = 0; j < i; j++) {
      if (a[j] == num) {
        encontrou = 1;
        break;
      }
    }

    if (!encontrou) {
      a[i] = num; 
    } else {
      i--;
      encontrou = 0;
    }
  }
  
  for (i = 0; i < tb; i++) {
    int num;
    int encontrou = 0;
    scanf("%d", &num);

    for (j = 0; j < i; j++) {
      if (b[j] == num) {
        encontrou = 1;
        break;
      }
    }

    if (!encontrou) {
      b[i] = num; 
    } else {
      i--;
      encontrou = 0;
    }
  }

  // Print A
  printf("(");
  for (i = 0; i < ta; i++) {
    if (i != 0)
      printf(",");
    printf("%d", a[i]);
  }
  printf(")\n");

  // Print B
  printf("(");
  for (i = 0; i < tb; i++) {
    if (i != 0) {
      printf(",");
    }
    printf("%d", b[i]);
  }
  printf(")\n");
  
  // Print A-B
  printf("(");
  for (i = 0; i < ta; i++) {
    int encontrou = 0;
    for (j = 0; j < tb; j++) {
      if (a[i] == b[j]) {
        encontrou = 1;
        break;
      }
    }

    if (!encontrou) {
      if (count > 0) {
        printf(",");
      }
      printf("%d", a[i]);
      count++;
    } else {
      encontrou = 0;
    }
  }
  printf(")\n");

  count = 0;

  // Print AxB
  printf("(");
  for (i = 0; i < ta; i++) {
    for (j = 0; j < tb; j++) {
      if (count > 0)
        printf(",");
      printf("(%dx%d)", a[i], b[j]);
      count++;
    }
  }
  printf(")\n");


  return 0;
}