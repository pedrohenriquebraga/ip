#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int n, m, itst = 1, i, j, count = 0;
    int * v = NULL;
    double res;
    
    scanf("%d", &n);
 
    while (n > 0) {
        scanf("%d", &m);
 
        v = (int *) malloc(m * 2 * sizeof(int));
 
        for (i = 0; i < m * 2; i += 2) {
            scanf("%d/%d", &v[i], &v[i + 1]);
        }
 
        printf("Caso de teste %d\n", itst);
 
        for (i = 0; i < m * 2; i+= 2) {
            for (j = i + 2; j < m * 2; j+=2) {
                int n1 = v[i];
                int d1 = v[i + 1];
 
                int n2 = v[j];
                int d2 = v[j + 1];
 
                if (n1 * d2 == n2 * d1) {
                    printf("%d/%d equivalente a %d/%d\n", n1, d1, n2, d2);
                    count++;
                }
            }
        }
 
        if (count == 0) {
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
 
       free(v);
       v = NULL;
       itst++;
       count = 0;
       n--;
    }
    
 
    return 0;
}