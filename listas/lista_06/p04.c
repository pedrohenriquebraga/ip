#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
typedef struct {
    double u, x, y, z;
} Ponto;
 
int main() {
 
    int n, i, j;
    Ponto * pontos = NULL;
    double * normas = NULL;
 
    scanf("%d", &n);
 
    pontos = (Ponto *) malloc(n * sizeof(Ponto));
    normas = (double *) malloc(n * sizeof(double));
 
    for (i = 0; i < n; i++) {
        scanf("%lf %lf %lf %lf", &pontos[i].u, &pontos[i].x, &pontos[i].y, &pontos[i].z);
    }
 
    for (i = 0; i < n; i++) {
        normas[i] = sqrt(
            pow(pontos[i].u, 2) + 
            pow(pontos[i].x, 2) + 
            pow(pontos[i].y, 2) + 
            pow(pontos[i].z, 2)
        );
    }
 
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (normas[i] > normas[j]) {
                double temp = normas[i];
                normas[i] = normas[j];
                normas[j] = temp;
 
                Ponto tempP = pontos[i];
                pontos[i] = pontos[j];
                pontos[j] = tempP;
            }
        }
    }
 
    for (i = 0; i < n; i++) {
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", pontos[i].u, pontos[i].x, pontos[i].y, pontos[i].z, normas[i]);
    }
 
    free(pontos);
    free(normas);
    pontos = NULL;
    normas = NULL;
    j++;
    
 
    return 0;
}