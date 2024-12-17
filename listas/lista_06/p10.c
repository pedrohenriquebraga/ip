#include <stdio.h>
#include <stdlib.h>

typedef struct {
  float cof;
  int exp;
} Termo;

void lerPolinomio(Termo * polis, int n) {
  int i;
  for (i = 0; i < n; i++) {
    scanf("%f%d", &polis[i].cof, &polis[i].exp);
  }
}

void imprimirPolinomio(Termo *polinomio, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (polinomio[i].cof != 0) {
            if (polinomio[i].cof > 0) {
                if (polinomio[i].exp == 0) {
                  printf("%.2f", polinomio[i].cof);
                } else {
                  printf("+%.2fX^%d", polinomio[i].cof, polinomio[i].exp);
                }
            } else {
              if (polinomio[i].exp == 0) {
                printf("%.2f", polinomio[i].cof);
              } else {
                printf("%.2fX^%d", polinomio[i].cof, polinomio[i].exp);
              }
            }
        }
    }
    printf("\n");
}

int somaPolinomios(Termo *p1, int n1, Termo *p2, int n2, Termo *resultado) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (p1[i].exp == p2[j].exp) {
            resultado[k].cof = p1[i].cof + p2[j].cof;
            resultado[k].exp = p1[i].exp;
            i++;
            j++;
        } else if (p1[i].exp > p2[j].exp) {
            resultado[k] = p1[i];
            i++;
        } else {
            resultado[k] = p2[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        resultado[k++] = p1[i++];
    }
    while (j < n2) {
        resultado[k++] = p2[j++];
    }
    return k;
}

int subPolinomios(Termo *p1, int n1, Termo *p2, int n2, Termo *resultado) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (p1[i].exp == p2[j].exp) {
            resultado[k].cof = p1[i].cof - p2[j].cof;
            resultado[k].exp = p1[i].exp;
            i++;
            j++;
        } else if (p1[i].exp > p2[j].exp) {
            resultado[k] = p1[i];
            i++;
        } else {
            resultado[k].cof = -p2[j].cof;
            resultado[k].exp = p2[j].exp;
            j++;
        }
        k++;
    }
    while (i < n1) {
        resultado[k++] = p1[i++];
    }
    while (j < n2) {
        resultado[k].cof = -p2[j].cof;
        resultado[k].exp = p2[j].exp;
        j++;
        k++;
    }
    return k;
}

int main() {
  Termo * p1 = NULL;
  Termo * p2 = NULL;
  Termo * resultado = NULL;

  int casos, termos, i, j;
  char op;

  scanf("%d%*c", &casos);

  for (i = 0; i < casos; i++) {
    int n1, n2, n_res;

    scanf("%c", &op);

    scanf("%d", &n1);
    p1 = (Termo *) malloc(n1 * sizeof(Termo));
    lerPolinomio(p1, n1);

    scanf("%d%*c", &n2);
    p2 = (Termo *) malloc(n2 * sizeof(Termo));
    lerPolinomio(p2, n2);

    resultado = (Termo *) malloc((n1 + n2) * sizeof(Termo));


    if (op == '+') {
      n_res = somaPolinomios(p1, n1, p2, n2, resultado);
    } else {
      n_res = subPolinomios(p1, n1, p2, n2, resultado);
    }

    imprimirPolinomio(resultado, n_res);

    free(p1);
    free(p2);
    free(resultado);
    p1 = NULL;
    p2 = NULL;
    resultado = NULL;
  }


  return 0;
}