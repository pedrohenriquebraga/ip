#include <stdio.h>
 
#define N 2
 
int main() {
 
    double matriz[N][N], det, ad, bd;
    int l, c;
 
    for (l = 0; l < N; l++) {
        for (c = 0; c < N; c++) {
            scanf("%lf", &matriz[l][c]);
        }
    }
 
    ad = (matriz[0][0] * matriz[1][1]);
    bd = (matriz[1][0] * matriz[0][1]);
    det = ad - bd;
 
    printf("%.2lf\n", det);
 
    return 0;
}