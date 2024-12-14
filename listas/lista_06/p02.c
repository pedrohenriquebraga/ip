#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX_PROD_NOME 51
 
 
int main() {
    int n, m, i = 0, j, l, c, p, qtd;
 
    char ** nomeProdutos = NULL;
    double * precos = NULL;
    double soma = 0;
 
    char * produto = NULL;
 
    scanf("%d", &n);
 
    while (n--) {
        scanf("%d", &m);
        nomeProdutos = (char **) malloc(sizeof(char *) * m);
        precos = (double *) malloc(sizeof(double) * m);
 
        for (l = 0; l < m; l++) {
            nomeProdutos[l] = (char *) malloc(sizeof(char) * MAX_PROD_NOME);
        }
 
        for (j = 0; j < m; j++) {
            scanf("%s %lf", nomeProdutos[j], &precos[j]);
        }
 
        scanf("%d", &p);
 
        if (p < 1 || p > m) {
            return 0;
        }
 
        while (p--) {
            produto = (char *) malloc(sizeof(char) * MAX_PROD_NOME);
 
            scanf("%s", produto);
            scanf("%d", &qtd);
 
            for (i = 0; i < m; i++) {
                if (strcmp(nomeProdutos[i], produto) == 0) {
                    break;
                }
            }
 
            soma += precos[i] * qtd;
 
            free(produto);
            produto = NULL;
        }
        
        printf("R$ %.2lf\n", soma);
 
        // Limpa a memória
        for (l = 0; l < m; l++) {
            free(nomeProdutos[l]);
        }
        free(nomeProdutos);
        free(precos);
 
        i = 0;
        soma = 0;
        nomeProdutos = NULL;
        precos = NULL;
    }
    
 
    return 0;
}