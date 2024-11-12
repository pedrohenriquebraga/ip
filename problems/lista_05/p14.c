#include <stdio.h>
 
#define N 1000
 
int main (){
 
    int matriz[N][N], l, c, n, i, j;
    scanf("%d", &n);
 
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            scanf("%d", &matriz[l][c]);
        }
    }
 
    for (c = 0; c < n; c++) {
 
        int v[n];
 
        for (l = 0; l < n; l++) {
            v[l] = matriz[l][c];
        }
 
 
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                long int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
 
        for (l = 0; l < n; l++) {
            matriz[l][c] = v[l];
        }
  }
    }
 
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
 
 
    return 0;
}