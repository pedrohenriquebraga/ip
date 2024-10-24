#include <stdio.h>

#define v_size 1000000
#define seq_size 101

int main() {

  unsigned int v[v_size];
  int n, i, maiorNumSeq, maiorNumCount, sequencias[seq_size];

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
    sequencias[v[i]]++;
  }

  maiorNumSeq = 0;
  maiorNumCount = sequencias[0];
  
  for (i = 0; i < seq_size; i++) {
    int num = sequencias[i];

    if (num > maiorNumCount) {
      maiorNumCount = num;
      maiorNumSeq = i;
    }
  }

  printf("%d\n", maiorNumSeq);
  printf("%d\n", maiorNumCount);

  return 0;
}