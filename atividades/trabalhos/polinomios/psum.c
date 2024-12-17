#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_SIZE 4

typedef struct {
    char code[ID_SIZE];
    int p;
    double *coef;
} Poly;

Poly le_poli(const char *nome_arquivo) {
    FILE *file = fopen(nome_arquivo, "rb");
    Poly poly;

    fread(poly.code, sizeof(char), ID_SIZE, file);
    poly.code[ID_SIZE - 1] = '\0';

    fread(&poly.p, sizeof(int), 1, file);

    poly.coef = (double *)calloc(poly.p + 1, sizeof(double));
    fread(poly.coef, sizeof(double), poly.p + 1, file);

    fclose(file);
    return poly;
}

void salva_poli(const char *nome_arquivo, const Poly *poly) {
    FILE *file = fopen(nome_arquivo, "wb");
    fwrite(poly->code, sizeof(char), ID_SIZE, file);

    fwrite(&poly->p, sizeof(int), 1, file);
    fwrite(poly->coef, sizeof(double), poly->p + 1, file);

    fclose(file);
}

Poly soma_polis(const Poly *poly1, const Poly *poly2) {
    Poly result;

    result.p = (poly1->p > poly2->p) ? poly1->p : poly2->p;
    strncpy(result.code, "poly", ID_SIZE);

    result.coef = (double *)calloc(result.p + 1, sizeof(double));

    for (int i = 0; i <= result.p; i++) {
        double coef1 = (i <= poly1->p) ? poly1->coef[i] : 0.0;
        double coef2 = (i <= poly2->p) ? poly2->coef[i] : 0.0;
        result.coef[i] = coef1 + coef2;
    }

    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <arquivo1> <arquivo2> <arquivo_saida>\n", argv[0]);
        return 0;
    }

    const char *file1 = argv[1];
    const char *file2 = argv[2];
    const char *arquivo_saida = argv[3];

    Poly poly1 = le_poli(file1);
    Poly poly2 = le_poli(file2);

    Poly result = soma_polis(&poly1, &poly2);

    salva_poli(arquivo_saida, &result);

    free(poly1.coef);
    free(poly2.coef);
    free(result.coef);

    return 0;
}
