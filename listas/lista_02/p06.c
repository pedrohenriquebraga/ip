#include <stdio.h>

int main() {

    float nota;

    scanf("%f", &nota);

    printf("NOTA = %.1f ", nota);

    if (nota >= 9) {
        printf("CONCEITO = A\n");
    } else if (nota >= 7.5) {
        printf("CONCEITO = B\n");
    } else if (nota >= 6) {
        printf("CONCEITO = C\n");
    } else {
        printf("CONCEITO = D\n");
    }

    return 0;
}