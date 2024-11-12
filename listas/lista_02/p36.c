#include <stdio.h>

int main() {
    double x, resultado = 1.0, termo = 1.0;
    int N, n;

    scanf("%lf", &x);
    scanf("%d", &N);

    for (n = 1; n <= N; n++) {
        termo *= x / n;
        resultado += termo;
    }

    printf("e^%.2lf = %.6lf\n", x, resultado);

    return 0;
}
