#include <stdio.h>
#include <math.h>

#define PERFIL_N 5
char simbolos[PERFIL_N + 1] = "aeiou";

void gera_perfil(char * txt, int * v) {

    int i;
    for (i = 0; i < PERFIL_N ; i++) v[i] = 0;

    while (*txt != '\0') {
        for (i = 0; i < PERFIL_N; i++) {

            if (*txt >= 'A' && *txt <= 'Z')
                *txt = *txt + 32;

            if (*txt == simbolos[i]) {
                v[i]++;
                break;
            }
        }
        txt++;
    }
}

void print_perfil(int v[]) {
    int i;
    for (i = 0; i < PERFIL_N; i++) {
        printf("%c(%d) ", simbolos[i], v[i]);
    }
    printf("\n");
}

double d_perfil(int *p1, int *p2) {
    int i, j;
    double d;

    for (i = 0; i < PERFIL_N; i++) {
        d += pow((p2[i] - p1[i]), 2);
    }

    return sqrt(d);
}

int main() {

    char txt[128];
    char word[128];
    int n, i;

    int p1[PERFIL_N], p2[PERFIL_N];
    double d;

    scanf("%d%*c", &n);
    scanf("%s%*c", word);

    for (i = 0; i < n; i++) {
        scanf("%[^\n]%*c", txt);
        gera_perfil(word, p1);
        gera_perfil(txt, p2);
        d = d_perfil(p1, p2);
        printf("d_perfil: %.2lf | %20s \n", d, txt);
    }

    return 0;
}