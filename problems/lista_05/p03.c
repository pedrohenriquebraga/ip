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
 
    c = n - 1;
 
    for (l = 0; l < n; l++) {
        printf("%d\n", matriz[l][c]);
        c--;
    }
 
    return 0;
}