#include <stdio.h>
 
#define N 1000
 
int main() {
    int matriz[N][N], n, l, c;
 
    scanf("%d", &n);
 
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            scanf("%d", &matriz[l][c]);
        }
    }
 
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            if (l == c) {
                printf("%d\n", matriz[l][c]);
            }
        }
    }
 
    return 0;
}